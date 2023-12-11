#include<bits/stdc++.h>
using namespace std;

void swap(int *a, int *b, int *count){
    int temp = *a;
    *a = *b;
    *b = temp;
    *count += 1;
}

int partition(int arr[], int low, int high, int *count){
    int pivot = arr[high];
    int i = low - 1;
    for(int j = low; j <= high - 1; j++){
        if(arr[j] > pivot){
            i++;
            swap(&arr[i], &arr[j], count);
        }
    }
    
    swap(&arr[i + 1], &arr[high], count);
    return (i + 1);
}

int quickSort(int arr[], int low, int high, int *count){
    if(low < high){
        int pi = partition(arr, low, high, count);
        quickSort(arr, low, pi - 1, count);
        quickSort(arr, pi + 1, high, count);
    }
}

int main(){
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int count = 0;
    quickSort(arr, 0, n - 1, &count);
    cout << "The sorted array is: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << "\nThe number of swaps required is: " << count << endl;
    return 0;
}