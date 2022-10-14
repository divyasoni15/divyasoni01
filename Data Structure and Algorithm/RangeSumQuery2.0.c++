#include<bits/stdc++.h>
using namespace std;

void preCompute(int arr[], int T, int pre[])
{
    pre[0] = arr[0];
    for ( int Q = 1; Q < T; Q++)
    pre[Q] = arr[Q] + pre[Q - 1];
}

int rangeSum(int Q, int L, int pre[])
{
    if (Q == 0)
    return pre[L];

    return pre[L] - pre[Q - 1];
}

int main()
{
    int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    int T = sizeof(arr) / sizeof(arr[0]);

    int pre[T];

    preCompute(arr, T, pre);
    // cout << rangeSum( 9, 9, pre) + rangeSum(9, 9, pre) << endl;

    // cout << rangeSum( 1, 2, pre) << endl;
    // cout << rangeSum( 1, 1, pre) << endl;

    cout << rangeSum( 2, 2, pre) - rangeSum( 1, 1, pre) << endl;

    cout << rangeSum( 2, 1, pre) << endl;
    // cout << rangeSum(6, 7, pre) << endl;
    // cout << rangeSum(9, 9, pre) << endl;

    return 0;
}