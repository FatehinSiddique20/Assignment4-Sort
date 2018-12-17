l#include "InsertionSort.h"
#include <iostream>
using namespace std;
InsertionSort::InsertionSort()
{
}
InsertionSort::~InsertionSort()
{
}
void InsertionSort::InsertionSorter(int arr[], int arr_size)
{
     cout <<"InsertionSort :"<<endl;
    if(arr_size > 1)
    {
        int size = arr_size;
        for(int index1 = 1; index1 < size; ++index1)
        {
            int index2 = index1 - 1;
            int key = arr[index1];
            while(index2 >= 0 && arr[index2] > key)
            {
                arr[index2+1] = arr[index2];
                --index2;
            }
            arr[index2+1] = key;
            for(int index3 = 0; index3 < arr_size; ++index3)
    {
        cout << arr[index3]<<" ";
    }
    cout <<endl;
        }

    }
}
