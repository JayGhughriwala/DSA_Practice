#include <iostream>
using namespace std;
void printAllPairs(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            cout << A[i] << " " << A[j] << endl;
        }
        cout << endl;
    }
}
int main()
{
    int A[] = {1, 2, 3, 4, 5};
    int size = sizeof(A) / sizeof(int);

    printAllPairs(A, size);
}