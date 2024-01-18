#include<bits/stdc++.h>
using namespace std;

void display(int *array, int size) {
	for(int i = 0; i < size; i++)
	cout <<array[i] << " ";
}

void insertion_sort(int *array, int size) {
	int temp, j ;
	for(int i = 1; i < size; i++){
		temp = array[i];
		j = i;
		while(array [j-1] > temp){
			array [j] = array [j-1];
			j--;
		}
		array[j] = temp;
	}
}

int main() {
	int n ;
	cout << "Enter the size of the array: " ;
	cin >> n;
	
	int a[n];
	cout<<"Enter the elements of the array: ";

	for(int i = 0; i < n; i++)
	cin >> a[i];
        cout << endl;	

	insertion_sort (a, n);

		cout<<"Sorted Array: " ;	

	display (a,n);
	return 0;
}