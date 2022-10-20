#include <iostream>
using namespace std;
void printingSubArray(int A[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i; j < size; j++)
        {
            for (int k = i; k <= j; k++)
            {
                cout << A[k] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
}
int main()
{
    int A[] = {10, 20, 30, 40, 50};
    int size = sizeof(A) / sizeof(int);
    printingSubArray(A, size);
}