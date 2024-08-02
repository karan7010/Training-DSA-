
#include<iostream>
using namespace std;
void example(){
    static int count=0;
    count++;
    cout<<count<<endl;
}
static int var=0;
void example2(){
    var++;
    cout<<var;
}
int main(){
    example();
    example2();
}
