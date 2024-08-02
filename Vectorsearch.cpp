#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    vector <int> a;
    cout<<"Enter element in vector: \n";
    int size;
    while(size!=0){
        int v;
        cin>>v;
        a.push_back(v);
        size=v;
    }
    int n;
    n=a.size();
    // for(int i=0;i<5;i++){
    //     cout<<a[i]<<" ";
    // }
    // cout<<endl<<a.size();
    // cout<<endl<<a.at(1);
    // cout<<endl<<a.data();
    // cout<<endl<<a.empty();
    // cout<<endl<<a.max_size()<<endl;
    // cout<<"First Element: "<<a.front();
    // cout<<"\nLast Element: "<<a.back()<<endl;

    for(int i=0;i<n-1;i++){
        int count=1;
        if(a[i]==a[i-1]) continue;
        for(int j=i+1;j<n-1;j++){
            if(a[i]==a[j]) count++;
        }
        cout<<a[i]<<"is present "<<count<<" times\n";
    }


}
