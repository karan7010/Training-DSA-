
#include<iostream>
using namespace std;
class example{
    mutable int val;
public:
    example(int v) :val(v){}
    void modify() const{
        val++;
        cout<<val;
    }
};
main(){
    example e(9);
    e.modify();
}
