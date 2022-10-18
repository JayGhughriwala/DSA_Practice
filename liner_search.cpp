#include <iostream>
using namespace std;
int linear_search(int A[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (A[i] == key)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int array[] = {100, 2000, 10, 300, 12, 30, 60, 90};
    int n = sizeof(array) / sizeof(int);
    int key;
    cout << "Enter a number to search in the array :- ";
    cin >> key;
    int index = linear_search(array, n, key);
    if (index != -1)
    {
        cout << " The number is found at index " << index << endl;
    }
    else
    {
        cout << "The number is not found in the array" << endl;
    }
}