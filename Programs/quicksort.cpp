/* Submitted By :
Aryan Garg
19124018
IT(G-1)
*/

//Program For The Implementation Of Quick Sort

#include<iostream>
using namespace std;

// A utility function to swap two elements
void swapElement(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int partitionArray(int arr[], int l, int h)
{
    int pivot = arr[h]; // pivot
    int i = (l - 1); // Index of smaller element

    for (int j = l; j <= h- 1; j++)
    {
        // If current element is smaller than or
        // equal to pivot
        if (arr[j] <= pivot)
        {
            i = i+1; // increment index of smaller element
            swapElement(&arr[i], &arr[j]);
        }
    }
    swapElement(&arr[i + 1], &arr[h]);
    return (i + 1);
}

void printArray(int arr[], int n)//function for printing the elements of array)
{
    int i;
    for (i=0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
}

void quickSort(int arr[], int l, int h,int n)//recursive function for implementing quick sort
{
    if (l < h)
    {
        int q = partitionArray(arr, l, h);
        printArray(arr,n);
        cout<<endl;
        quickSort(arr, l, q - 1,n);
        quickSort(arr, q + 1, h,n);
    }
}

int main()
{
    int n;
    cout<<"Enter The Size Of Array U Want : "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter The Elements Of Array One By One : "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<endl;
    cout<<"Array Before Applying Quick Sort : "<<endl;
    printArray(arr, n);
    cout<<endl;
    cout<<endl;
    quickSort(arr, 0, n-1,n);
    cout<<endl;
    cout<<endl;
    cout<<"Array After Applying Quick Sort: "<<endl;;
    printArray(arr, n);
    cout<<endl;
    return 0;
}

