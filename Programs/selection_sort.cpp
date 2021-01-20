/* Submitted By :
Aryan Garg
19124018
IT(G-1)
*/

//Program For The Implementation Of Selection Sort

#include<iostream>
using namespace std;

void swapElement(int *x,int *y)//function for swapping
{
    int temp=*x;
    *x=*y;
    *y=temp;
}

void printArray(int arr[], int n)//function for printing the elements of array
{
    int i;
    for (i=0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
}

void SelectionSort(int A[],int n)//function of selection sort
{
    int i,j,k;
    for(i=0; i<n-1; i++)
    {
        for(j=k=i; j<n; j++)
        {
            if(A[j]<A[k])
                k=j;
        }
        swapElement(&A[i],&A[k]);
        printArray(A,n);
        cout<<endl;
    }
}

int main()
{
    int n;//size of array
    cout<<"Enter The Size Of Array : "<<endl;
    cin>>n;
    int A[n];//array of elements
    int i;//index of array to be traversed
    cout<<"Enter The Elements Of Array One By One : "<<endl;
    for(i=0; i<n; i++)
    {
        cin>>A[i];
    }
    cout<<endl;
    cout<<"Initial Array Without Sorting : "<<endl;
    printArray(A, n);
    cout<<endl;
    cout<<endl;
    SelectionSort(A,n);//call of function
    cout<<endl;
    cout<<"Array After Selection Sort : "<<endl;
    printArray(A, n);
    cout<<endl;
    return 0;
}
