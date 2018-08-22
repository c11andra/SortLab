#include <iostream>
#include "Algo.h"
using namespace std;
void PrintArray(int* arr, int count)
{
    for(int i = 0; i < count; i ++)
    {
        cout << arr[i] << endl;
    }
}


int main(int argc, char **argv)
{
    int arr[] = {1, 10, 2, 20, 5, 3, 4, 5};

    int count = sizeof(arr)/sizeof(arr[0]);
   // Algo<int>::BubbleSort(arr, count);

    Algo<int>::BubbleSortOptimized(arr, count);

    PrintArray(arr, count);
    return 0;
}


