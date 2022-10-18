#include <iostream>
using namespace std;

void printArray(int A[], int size)
{
    // int size = sizeof(A);
    cout << "In function the size of the array is " << size << endl;
}

int main()
{
    int array[] = {1, 2, 3, 4, 5, 6};
    int size = sizeof(array) / sizeof(int);
    cout << "In main function the size of the array is  " << size << endl;
    printArray(array, size);

    // so that 's why we need to pass a size also to maintain the array it 's  the logic behind the passing array by reference

    return 0;
}