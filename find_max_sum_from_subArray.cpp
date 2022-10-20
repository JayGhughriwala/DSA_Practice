#include <bits/stdc++.h>
using namespace std;
int max_sum_subArray(int A[], int n)
{
    int max_sum = 0; // this is a bruteforce approach
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int sum = 0;
            for (int k = i; k <= j; k++)
            {
                sum += A[k];
            }
            // if (sum > max_sum) // compare the sum with max_sum with a if statement
            // {
            //     max_sum = sum;
            // }

            max_sum = max(max_sum, sum); // compare the sum with max_sum with a max function it is a inbuilt cpp function
            /// the purpose of using this inbuilt function is to reduce the number of lines of code and faster the execution also and we can also save our time for writing a if statement means condition everytime.
        }
    }
    return max_sum;
}
int main()
{
    int A[] = {10, 20, 30, 40, 50};
    int size = sizeof(A) / sizeof(int);
    int max_sum = max_sum_subArray(A, size);
    cout << "The maximum sum of the sub Array is : " << max_sum << endl;
}