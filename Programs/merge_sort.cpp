#include <iostream>
#include<stdlib.h>
using namespace std;

// Merging two sub arrays of arr[].
// First sub array is from arr[l to m]
// Second sub array is arr[m+1 to r] and then
//taking them into this function.

void mergeArray(int arr[], int l, int m, int h)
{
    int n1 = m - l + 1;//size of array 1
    int n2 = h - m;//size of array 2

    // Create two arrays by splitting
    int A[n1], B[n2];

    // Copy data to temp arrays L[] and R[]
    for (int i = 0; i < n1; i++)
    {
        A[i] = arr[l + i];
    }
    for (int j = 0; j < n2; j++)
    {
        B[j] = arr[m + 1 + j];
    }
    // Merge the temp sub arrays back to a single array

    // Initial index of first sub array
    int i = 0;

    // Initial index of second sub array
    int j = 0;

    // Initial index of merged array
    int k = l;

    while (i < n1 && j < n2)
    {
        if (A[i] <= B[j])
        {
            arr[k] = A[i];
            i = i+1;
        }
        else
        {
            arr[k] = B[j];
            j = j+1;
        }
        k = k+1;
    }
    // Copy the remaining elements of
    // L[], if there are any
    while (i < n1)
    {
        arr[k] = A[i];
        i = i+1;
        k = k+1;
    }
    // Copy the remaining elements of
    // R[], if there are any
    while (j < n2)
    {
        arr[k] = B[j];
        j = j+1;
        k = k+1;
    }
}
// l is for lower index and h is
// higher index of the sub array
// of arr to be sorted
void mergeSort(int arr[],int l,int h)
{
    if(l>=h)
    {
        return;//return the statement recursively
    }
    int m = (l+h-1)/2;//middle element by the use of floor of l and r
    mergeSort(arr,l,m);
    mergeSort(arr,m+1,h);
    mergeArray(arr,l,m,h);//merge the sub arrays in the final array
}

// Function to print an array
void printTheArray(int A[], int m)
{
    for (int i = 0; i < m; i++)
    {
        cout << A[i] << " ";
    }
}


int main()
{
    int n;
    cout<<"Enter The Size Of Array You Want To Sort : "<<endl;
    cin>>n;
    cout<<endl;
    int C[n];//Initial array to be taken of n elemebts
    cout<<"Enter The Elements Of Array One By One : "<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>C[i];
    }
    cout<<endl;
    cout << "Array Before Sorting The Array : "<<endl;
    printTheArray(C, n);

    mergeSort(C, 0, n-1);
    cout<<endl;

    cout << "\nSorted array After Sorting The Array : "<<endl;
    printTheArray(C, n);
    cout<<endl;
    return 0;
}
