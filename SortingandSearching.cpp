#include<iostream>
using namespace std;
void binarysearch(int a[],int n){
    int l,h;
    l=0;
    h=n-1;
    int x;
    cout<<"Enter the element u want to search: ";
    cin>>x;
    while(l<=h){
        int mid=(l+h)/2;
        if(a[mid]==x) {
            cout<<"Yes it is present at loc "<<mid;
            exit(0);
        }
        else if(a[mid]>x) h=mid-1;
        else if(a[mid]<x) l=mid+1;
    }
    cout<<"It is not present";
}
void bubble(int a[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    binarysearch(a,n);
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    bubble(arr,n);
    return 0;
}
