#include <iostream>
#include "SelectionSort.h"
#include "InsertionSort.h"
#include "MergeSort.h"
#include "BubbleSort.h"

using namespace std;

int main()
{

SelectionSort sorts;
    int a[8] = {14,33,27,10,35,19,48,44};
int n = sizeof(a)/sizeof(a[0]);
    sorts.SelectionSorter(a,n);
cout<<"\n";
cout<<"\n";
InsertionSort sorts1;
int b[8] = {14,33,27,10,35,19,48,44};
int n1= sizeof(b)/sizeof(b[0]);
    sorts1.InsertionSorter(b,n1);
cout<<"\n";
cout<<"\n";

MergeSort sorts2;
cout <<"MergeSort :"<<endl;
int c[8] = {14,33,27,10,35,19,48,44};
int n2 = sizeof(c)/sizeof(c[0]);
    sorts2.merge_sort(c,0,n2-1);
cout<<"\n";
cout<<"\n";

BubbleSort sorts3;
int d[8] = {14,33,27,10,35,19,48,44};
int n3 = sizeof(d)/sizeof(d[0]);
    sorts3.BubbleSorter(d,n3);
    return 0;
}
