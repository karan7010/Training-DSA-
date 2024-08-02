
#include<iostream>
#include<list>
using namespace std;
int main(){
    list <int> l;
    l.push_back(5);
    l.push_back(10);
    l.push_back(10);
    l.push_front(11);
    l.push_front(11);
    l.push_front(11);
    for(int i:l) cout<<i<<" ";
    cout<<endl;
    l.erase(l.begin());
    cout<<"After erase: \n";
    for(int i:l) cout<<i<<" ";
    cout<<endl;
    cout<<"Size of list: "<<l.size()<<endl;
    l.unique();
    for(int i:l) cout<<i<<" ";
    cout<<endl;
    l.reverse();
    for(int i:l) cout<<i<<" ";
    cout<<endl;
    l.resize(10);
    for(int i:l) cout<<i<<" ";
}
