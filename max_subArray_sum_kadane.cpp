#include <iostream>
using namespace std;
int kadane_max_subArray_sum(int A[], int n)
{
    int max_sum = 0;
    int current_sum = 0;
    for (int i = 0; i < n; i++)
    {
        current_sum += A[i];
        if (current_sum < 0)
        {
            current_sum = 0;
        }
        max_sum = max(max_sum, current_sum);
    }
    return max_sum;
}
int main()
{
    int A[] = {10, 20, 30, 40, 50};
    int size = sizeof(A) / sizeof(int);
    int largest_sum = kadane_max_subArray_sum(A, size);
    cout << "The Largest sum of the sub Arrray is : " << largest_sum << endl;
}