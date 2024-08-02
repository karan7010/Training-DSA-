#include<iostream>
#include<vector>
#include<numeric>
using namespace std;
int main(){
    vector <int> number ={1,2,3,4,5};
    int sum=accumulate(number.begin(),number.end(),0,[](int total,int n){
        return total +n;
    });
    cout<<"Sum : "<<sum;
    return 0;
}
