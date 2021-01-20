/* Aryan Garg
   19124018
   Information Technology(IT)
   Group-1 */

#include<iostream>
#include<stdlib.h>

using namespace std;

/* Function Of Insertion Sort */
void insertionSort(int A[],int n)
{
    int i,j,x;//i is index of traversing of array//x is the key
    for(i=1; i<n; i++)//first element is already sorted
    {
        x = A[i];
        j= i-1;
        /* To Move Elements Greater Than
           Key One Position
           Ahead Of A[1...i-1] */
        while(j>=0 && A[j]>x)
        {
            A[j+1] = A[j];
            j--;
        }
        A[j+1] = x;//now ahead position is equal to key
//        for (int t = 0; t < n; t++)
//        {
//            cout << A[t] << " ";
//        }
//        cout<<endl;
    }
}

/* Function To Print Array */
void printArray(int A[], int n)
{
    int t;
    for (t = 0; t < n; t++)
    {
        cout << A[t] << " ";
    }
    cout << endl;
}

int main()
{
    int A[] = {19,45,56,2,90};//input array
    int n = sizeof(A)/sizeof(A[0]);//size of array
    cout<<"Array Before Insertion Sort Is : "<<endl;
    printArray(A,n);
    cout<<endl;
    insertionSort(A,n);
    cout<<"Array After Insertion Sort Is : "<<endl;
    printArray(A,n);
    return 0;
}
