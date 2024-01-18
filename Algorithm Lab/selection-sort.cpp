#include<iostream>
using namespace std;

void selection_sort(int arr[], int n){
for(int i = 0;i <= n - 2; i++){
    int v = i;
    for(int j = i; j <= n - 1; j++){
        if(arr[j] < arr[v]){
            v = j;
        }
    }
    int temp = arr[v];
    arr[v] = arr[i];
    arr[i] = temp;
    }
}

int main(){
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++)
    cin >> arr[i];
    selection_sort (arr, n);

    cout << "Sorted Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i]<<" ";
    }
    return 0;
}