#include <bits/stdc++.h>
using namespace std;

const int MAX_SIZE = 100;
int matrix[MAX_SIZE][MAX_SIZE];

int main() {
    int m, n;
    cout << "Enter the size of the matrix : ";
    cin >> m >> n;

    cout << "Enter the elements of the matrix : " << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    int primaryDiagonalSum = 0;
    cout << "Primary Diagonal Elements: ";
    for (int i = 0; i < m; i++) {
        primaryDiagonalSum += matrix[i][i];
        cout << matrix[i][i] << " ";
    }

    cout << endl;

    int secondaryDiagonalSum = 0;
    cout << "Secondary Diagonal Elements: ";
    for (int i = 0; i < m; i++) {
        secondaryDiagonalSum += matrix[i][n - 1 - i];
        cout << matrix[i][n - 1 - i] << " ";
    }
    cout << endl;

    cout << "Sum of Primary Diagonal Elements: " << primaryDiagonalSum << endl;

    cout << "Sum of Secondary Diagonal Elements: " << secondaryDiagonalSum << endl;

    cout << "Total Sum of Diagonal Elements: " << primaryDiagonalSum + secondaryDiagonalSum << endl;

    //return 0;
}
