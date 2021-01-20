/* Submitted By :
Aryan Garg
19124018
IT(G-1)
*/

//Program For The Implementation Of Bubble Sort

#include <iostream>
using namespace std;

void swapElement(int *x,int *y)//swapping function
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

void bubbleSort(int A[],int n)//function for bubble sort
{
    int i,j,flag=0;
    for(i=0; i<n-1; i++)
    {
        flag=0;
        for(j=0; j<n-i-1; j++)
        {
            if(A[j]>A[j+1])
            {
                swapElement(&A[j],&A[j+1]);
                flag=1;
            }
        }
        if(flag==0)
            break;
        printArray(A, n);
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
    bubbleSort(A,n);//call of function
    cout<<endl;
    cout<<"Array After Bubble Sort : "<<endl;
    printArray(A, n);
    cout<<endl;
    return 0;
}
