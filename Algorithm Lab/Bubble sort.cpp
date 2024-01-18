#include <bits/stdc++.h>
using namespace std;
void swap(int &a, int &b, int &swapCount) {
    a = a + b;
    b = a - b;
    a = a - b;
    swapCount++;
}
void optimizedBubbleSort(int arr[], int n, int &swapCount) {
    bool swapped;
    for (int i = 0; i < n-1; i++) { //index loop
        swapped = false;
        for (int j = 0; j < n-i-1; j++) { //comparison loop
            if (arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1], swapCount);
                swapped = true;
            }
        }

        if (!swapped) {
            break;
        }
    }
}
int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int swapCount = 0;
    optimizedBubbleSort(arr, n, swapCount);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
} 