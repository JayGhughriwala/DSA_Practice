#include <iostream>

using namespace std;

// ----------------------------------------------------------- Here is the binary search function -------------------------------------------------//
int binary_search(int A[], int size, int key)
{
    int low = 0;
    int high = size - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (A[mid] == key)
        {
            return mid;
        }
        else if (A[mid] < key) // here we are searching on the right half because the key is greater than the mid element
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1; // here we searching in the left part because the key is smaller than the mid element
        }
    }
    return -1; // this return - 1 if the key is not found in the array
}
int main()
{
    int A[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 20, 33, 44, 55, 66, 77, 88, 99, 100};
    int size = sizeof(A) / sizeof(int);      // this is the method to find the size of the arry
    int key = 77;                            // this is the key which we are searching in the array
    int index = binary_search(A, size, key); // calling the function

    if (index == -1) // this means that the key is not found in the array
    {
        cout << "Key value " << key << " is not present in the array" << endl;
    }

    else
    {
        cout << " Key value " << key << " is present at index " << index << endl;
    }

    return 0;
}