
// You cannot add duplicate value
// take the value in sorted order
/*#include <iostream>
#include <set>
using namespace std;

int main()
{
    int i;
    set<int> l;
    l.insert(5);
    l.insert(5);
    l.insert(5);
    l.insert(1);
    l.insert(6);
    l.insert(0);
    l.insert(0);

    for (auto i : l)

        cout << i << endl;
    cout << endl;

    cout << "s present " << l.count(7) << endl;

    set<int>::iterator itr = l.find(5);

    for (auto it = itr; it != l.end(); it++)
    {
        cout << "it" << " ";
    }
    cout << endl;
    //
    // it++;
    // l.erase(it);
    // for (auto i : l)
    cout << i << endl;
}

#include <iostream>
#include <map>
using namespace std;
// stored the data in key value pair
int main()

{
    map<int, string> m;
    // 1 is key and Ajay is value

    m[1] = "Ajay";
    m[2] = "Nanjay";
    m[4] = "Manjay";

    m.insert({5, "ankita"});
    for (auto i : m)
    // expression can not be used as a function.
    // t.first() dont write this way
    {
        cout << i.first << " " << i.second << " " << endl;
    }

    cout << "find the element" << m.count(-13) << endl;
    m.erase(5);
    cout << "after erase" << endl;
    for (auto i : m)
    {
        cout << i.first << " " << i.second << " " << endl;
    }
    // find the element from map
    auto findElement = m.find(4);
    for (auto i = findElement; i != m.end(); i++)
        cout << (*i).first << " " << (*i).second << endl;
}

#include <iostream>
#include <list>
using namespace std;
int main()
{
    int i = 10;

    int *j = &i;
    int &(i+34);
    cout << *j << endl;
    // cout<<*<<endl;
    //& can be used with variable
    //* can be used with variable/expression/constant
    /// cout << i << endl;
    // cout << &i << endl;
}*/

/*#include<iostream>
using namespace std;

int main()
{
    const char * message ("Hello World!");
    cout<< 'message !' << message << endl; //Hello World!
    //*message = "B"; // compile error
}*/

#include <iostream>

using namespace std;

int main()
{

    // Declare and initialize pointer

    int *p_number{}; // Will initialize with nullptr

    double *p_fractional_number{};

    // Explicitly initialize with nullptr

    int *p_number1{nullptr};

    double *p_fractional_number1{nullptr};

    // Pointers to different variables are of the same size

    // cout << "sizeof(int) : " << sizeof(int) << endl; // 4

    // cout << "sizeof(double) : " << sizeof(double) << endl; // 8

    // cout << "sizeof(double*) : " << sizeof(double*) << endl;

    // cout << "sizeof(int*) : " << sizeof(int*) << endl; // 8

    // cout << "sizeof(p_number1) : " << sizeof(p_number1) << endl; // 8

    // cout << "sizeof(p_fractional_number1) : " << sizeof(p_fractional_number1) << endl; // 8

    // It doesn't matter if you put the * close to data type or to varible name

    // int* p_number2{nullptr};

    // int * p_number3{nullptr};

    // int *p_number4{nullptr};

    // int *p_number5{}, other_int_var{};

    // int* p_number6{}, other_int_var6{};	// Confusing as you wonder if other_int_var6

    // // is also a pointer to int. It is not.

    // // The structure is exactly the same for the

    // // previous statement

    // cout << "sizeof(p_number5) : " << sizeof(p_number5) << endl; // 8

    // cout << "sizeof(other_int_var) : " << sizeof(other_int_var) << endl; // 4

    // cout << "sizeof(p_number6) : " << sizeof(p_number6) << endl; // 8

    // cout << "sizeof(other_int_var6) : " << sizeof(other_int_var6) << endl; // 4

    // // It is better to separate these declarations on different lines though

    // int *p_number7{};

    // int other_int_var7{}; // No room for confusion this time

    // Initializing pointers and assigning them data

    // We know that pointers store addresses of variables

    // int int_var {43};

    // int *p_int{&int_var};// The address of operator (&);

    // cout << "Int var : " << int_var << endl; // 43

    // cout << "p_int (Address in memory) : " << p_int << endl; // 0x7ffdfa760bf8

    // // //You can also change the address stored in a pointer any time

    // int int_var1 {65};

    // p_int = &int_var1; // Assign a different address to the pointer

    // cout << "p_int (with different address) : " << p_int << endl; // 0x7ffdfa760bfc

    // Can't cross-assign between pointers of different types

    int *p_int1{nullptr};

    double double_var{33};

    // p_int = &double_var; // Compiler error

    // Dereferencing a pointer:

    int *p_int2{nullptr};

    int int_data{56};

    p_int2 = &int_data;

    cout << "value : " << *p_int2 // Dereferencing a pointer

         << endl; // 56

    return 0;
}
