#include <bits/stdc++.h>
using namespace std;

int largest_subArray_sum(int A[], int n)
{
    int prefix_sum[n];
    prefix_sum[0] = A[0];
    for (int i = 1; i < n; i++)
    {
        prefix_sum[i] = prefix_sum[i - 1] + A[i];
    }
    int max_sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int sum = 0;
            sum = i > 0 ? (prefix_sum[j] - prefix_sum[i - 1]) : (prefix_sum[j]);
            max_sum = max(max_sum, sum);
        }
        // the purpose of this to reduce the time complexity from O(N^3) to O(N^2)
        // because the prefix_sum array is already calculated and that required N time and this loop N^2 so sum of this becomes a N^2 so time complexity reduces from
        // O(N^3) to O(N^2)
    }
    return max_sum;
}

int main()
{
    int A[] = {10, 20, 30, 40, 50};
    int size = sizeof(A) / sizeof(int);
    int largest_subarray_sum = largest_subArray_sum(A, size);
    cout << "The largest sum of the sub Array is  : " << largest_subarray_sum << endl;
    return 0;
}