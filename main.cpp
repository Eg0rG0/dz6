#include <iostream>
#include "header.h"
#include <string>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int* arr = new int[n];
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    Sort(arr, n);
    print(arr, n);
    int m;
    cin >> m;
    double* arr1 = new double[m];
    for (int i = 0; i < m; ++i) {
        cin >> arr1[i];
    }
    Sort(arr1, m);
    print(arr1, m);
    return 0;
}