#include<iostream>
using namespace std;

struct Array{
   int *A;
   int sizes;
   int length;
} ;
void display_array_elements(struct Array arr){
   int i;
   for(i=0 ; i<arr.length ;i++){
    cout<< arr.A[i]<<" ";
   }
}
int BinarySearch(struct Array arr, int key){
  int l=0,h=arr.length-1,mid;
  while(l<=h){
    mid = (l+h)/2;
    if(key == arr.A[mid]){
        return mid;
    }
    else if(key < arr.A[mid]){
        h=mid-1;
    }
    else{
        l=mid+1;
    }
  }
  return -1;
}
int RBSearch(int a[],int l,int h,int key){
  int mid;
  if(l<=h){
    mid = (l+h)/2;
    if(key == a[mid]){
        return mid;
    }
    else if(key < a[mid]){
        return RBSearch(a,l,mid-1,key);
    }
    else{
        return RBSearch(a,mid+1,h,key);
    }
  }
  return -1;
}
int main (){
   struct Array arr;
   int n,i;
   cout<<"Enter The Size Of The Array"<<endl;
   cin>>arr.sizes;
   arr.A = new int[arr.sizes];
   arr.length = 0;
   cout<<"Enter The Number Of Integers In Array"<<endl;
   cin>>n;
   cout<<"Now Enter All The Elements Of Array"<<endl;
   for(i=0 ; i<n ;i++){
    cout<<"Enter The Integer In Array"<<endl;
    cin>>arr.A[i];
   }
   arr.length = n;
   cout<<BinarySearch(arr,12)<<endl;
   cout<<RBSearch(arr.A,0,arr.length,12)<<endl;
   display_array_elements(arr);
   cout<<endl;

   return 0;
}

