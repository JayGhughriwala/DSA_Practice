#include <iostream>
using namespace std;
void printArray(int A[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
}
void reverseArray_using_for_loop(int A[], int size)
{
    // int temp;
    for (int i = 0; i < size / 2; i++)
    {
        swap(A[i], A[size - i - 1]);
    }
}
void reverseArray_using_while_loop(int A[], int size)
{
    int i = 0;
    int j = size - 1;
    while (i < j)
    {
        swap(A[i], A[j]);
        i++;
        j--;
    }
}

int main()
{
    int A[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int temp[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(A) / sizeof(int);

    printArray(A, size);
    cout << "Reverse Array using for loop " << endl;
    reverseArray_using_for_loop(A, size);
    printArray(A, size);

    cout << "Reverse Array using while loop " << endl;
    printArray(temp, size);
    reverseArray_using_while_loop(temp, size);
    printArray(temp, size);
}