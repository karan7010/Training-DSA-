
#include<bits/stdc++.h>
using namespace std;

int main () {
    int arr[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    int diag0=0;
    int diag1=0;
    for (int i = 0 ; i < 3 ; i++) {
        for (int j = 0 ; j < 3 ; j++) {
            if (i == j) {
                diag0 += arr[i][j];
            }
            if (i+j == 2) {
                diag1 += arr[i][j];
            }
        }
    }
    cout << "Diagonal 1 : " << diag0 << endl << "Diagonal 2 : "<<diag1;
}
