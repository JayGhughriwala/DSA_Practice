// this is the recursive version of binary search
#include <iostream>
using namespace std;
int binary_search(int A[], int low, int high, int key)
{
    if (low > high) // this indicates that the key is not present in the array
    {
        return -1;
    }
    int mid = (low + high) / 2; // finding the mid element
    if (A[mid] == key)          // if the key is found at the mid position
    {
        return mid;
    }
    else if (A[mid] > key) // if the key is less than the mid element go to the left part of the array
    {
        return binary_search(A, low, mid - 1, key);
    }
    else // if key is greater than the mid element then go to the right part of the array
    {
        return binary_search(A, mid + 1, high, key);
    }
}
int main()
{
    int A[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(A) / sizeof(int);
    int key = 90;
    int low = 0;
    int high = size - 1; // here I am subtrating 1 from the size because the index of the array starts from 0 and last character is in the array is null characater '\0' this is the array termination character

    int index = binary_search(A, low, high, key);
    if (index == -1)
    {
        cout << "Key value " << key << " is not present in the array " << endl;
    }
    else
    {
        cout << "Key value " << key << " is present at index " << index << endl;
    }
}