
#include<iostream>
using namespace std;
 void Sorting(int arr[],int n)
 {
     int i,j;
     for(i=0;i<n-1;i++){
        for(j=i;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
     }
 }
 }
 void Display(int arr[], int size)
 {
     int i;
     for(i=0;i<size;i++){
        cout<<arr[i]<<endl;
     }
 }
int Searching(int arr[],int n, int target)
 {
    int i;
    for(i=0;i<n;i++){
        if(arr[i]== target){
            return i;
        }
    }
     return -1;
 }
 int main()
 {
     int arr[]={44,5,67,12,89,45};
     int N = sizeof(arr)/sizeof(arr[0]);
     Display(arr,N);
     Sorting(arr,N);
     cout<<"Sorted Array"<<endl;
     Display(arr,N);
     int result = Searching(arr,N,89);
     cout<<result;
     return 0;


 }
