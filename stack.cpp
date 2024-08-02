
#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack <string> s;
    s.push("Ajay");
    s.push("Ajab");
    s.push("Gajab");
    s.push("Sajab");
    
    cout<<"Top Element: "<<s.top();
    s.pop();
    cout<<"\nTop Element after pop: "<<s.top()<<endl;
    cout<<"Size: "<<s.size();
}
