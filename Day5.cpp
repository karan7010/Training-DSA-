// STL
// LEETCODE PROBLEM
/*#include <iostream>
#include <array>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int i;
    array<int, 5> a = {3, 4, 7, 2, 7};
    int size = a.size();
    cout << size << endl;

        for (int i = 0; i < size; i++)
        {
            cout << a[i] << endl;
        }
        bool trueorfalse=a.empty();
        cout<<"element at index"<<a.at(i)<<endl;
        bool trueFalse = a.empty();
        cout<<"true of false+ "<<trueFalse;
        bool empty=a.empty();
        cout<<"is array is empty or not ="<<empty;
        cout<<"first element ="<<a.front()<<endl;
        cout<<"last element ="<<a.back()<<endl;

sort(a.begin(), a.end());
for (int i = 0; i < size; i++)
    if (a[i] == a[i + 1])
    {
        int count = count + 1;
    }
return 0;
}


#include <iostream>
#include <array>
#include <algorithm>
using namespace std;

int main()
{
    array<int, 5> a = {3, 4, 7, 2, 7};
    int size = a.size();
    cout << "Size of array: " << size << endl;

    // Sorting the array
    sort(a.begin(), a.end());

    // Counting repetitive numbers
    int count = 0;
    for (int i = 0; i < size - 1; i++)
    {
        if (a[i] == a[i + 1])
        {
            count++;
        }
    }

    cout << "Count of repetitive numbers: " << count << endl;

    return 0;
}

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    cout << "Capacity = " << v.capacity() << endl; // size will return 0
    v.push_back(10);
    cout << "Capacity = " << v.capacity() << endl; // size will return 1
    v.push_back(12);
    cout << "Capacity = " << v.capacity() << endl; // size will return 2
    v.push_back(14);
    cout << "Capacity = " << v.capacity() << endl; // size will return 4
    // because it create a new vector and with double size and older daa is stored in to the new vector
    cout << "size = " << v.size() << endl;

    cout << "first element = " << v.front() << endl;
    cout << "last element = " << v.back() << endl;

    // before pop
    cout << "before pop" << endl;
    v.clear();
    cout << "after clear size= " << v.size() << endl;

    // another way to create the vector
    vector<int> x(5, 1);
    // means size is 5 and all five default value is 1 cout << "print all element" << endl;
    for (int i : x)
    {
        cout << i << " ";
    }
}*/

#include <iostream>
#include <deque>
using namespace std;

int main()
{
    // deque means you can perform push and pop operation from both end.
    deque<int> d;
    // Insertion
    d.push_back(10);
    d.push_front(11);
    for (int i : d)
    {
        cout << i << " ";
    } // delete
    d.pop_back();
    for (int i : d)
    {
        cout << i << " ";
    }
    // delete from front
    d.pop_front();
    for (int i : d)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << "fron:t " << d.front() << endl;
    cout << "back: " << d.back() << endl;
    cout << "Empty of not: " << d.empty() << endl;
    cout << "before erase: " << d.size() << endl;
    d.erase(d.begin(), d.begin() + 1);
    cout << "after erase: " << d.size() << endl;
    return 0;
}*/
#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> l;
    l.push_back(10);
    l.push_front(12);
    for (int i : l)
    {
        cout << i << " ";
    }
    cout << endl;
    l.erase(l.begin());
    cout
        << "after erase " << endl;
    for (int i : l)
    {
        cout << " ";
    }
    cout << "size of list " << l.size() << endl;

    return 0;
}
