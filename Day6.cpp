// STL

/*#include <iostream>
#include <array>

using namespace std;

int main()
{
    array<int, 4> a = {1, 2, 3, 4};
    cout << a.size() << endl;
    return 0;
}

//Stack
#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack<string> s;
    s.push("Ajay");
    s.push("Ajab");
    s.push("Gajab");
    s.push("Sajab");

    cout << "Top Element: " << s.top() << endl;
    s.pop();
    cout << "Element after Pop: " << s.top() << endl;
    cout<<:Size of Stack<<s.size()<<endl;
    // find the size
}

//Queue
#include <iostream>
#include <queue>
using namespace std;
int main()
{
    queue<string> q;
    q.push("Abha");
    q.push("Sabha");
    q.push("Mabha");
    cout << "Element After Pop: ";
    cout << q.front() << endl;
    // cout << q.back() << endl;
    cout << q.size() << endl;
    /*cout << "Top Element: " << q.top() << endl;
    s.pop();
    cout << "Element after Pop: " << s.top() << endl;
}* /

/*#include <iostream>
#include <queue>
using namespace std;
int main()
{
    int n;
    int i;
    cout<<"Enter The Size of The Queue: ";
    cin>>n;
    queue<string, n> q={};
    cout<<"Enter The Element: "
    for(i=0;i<q.size();i++)
    {

    }
}

#include <iostream>
#include <queue>
using namespace std;
int main()
{
    // max heap
    priority_queue<int> max;
    // min heap
    priority_queue<int, vector<int>, greater<int>> mini;
    max.push(1);
    max.push(2);
    max.push(3);
    max.push(4);
    cout << "Size: " << max.size() << endl;
    int n = max.size();
    for (int i = 0; i < n; i++)
    {
        cout << max.top() << " ";
        max.pop();
    }
    cout << endl;
    mini.push(5);
    mini.push(1);
    mini.push(0);
    mini.push(4);
    mini.push(3);
    int m = mini.size();
    for (int i = 0; i < m; i++)
    {
        cout << mini.top() << " ";
        mini.pop();
    }
    cout << endl;
}

#include <iostream>
#include <stack>
using namespace std;

int main()
{
    cout << "===========Stack Function=============" << endl;
    cout << "1.) Size of The Stack" << endl;
    cout << "2.) Insertion in Stack" << endl;
    cout << "3.) Deletion from Stack" << endl;
    cout << "4.) Top of Stack" << endl;

    stack<int> s;
    char b;

    do
    {
        int c;
        cout << "Enter Your Choice: ";
        cin >> c;

        if (c == 1)
        {
            cout << "Size of Stack is: " << s.size() << endl;
        }
        else if (c == 2)
        {
            int elm;
            cout << "Enter The Element to be Inserted: ";
            cin >> elm;
            s.push(elm);
            cout << "Element Inserted: " << elm << endl;
        }
        else if (c == 3)
        {
            if (s.empty())
            {
                cout << "Stack is Empty." << endl;
            }
            else
            {
                cout << "Element Deleted: " << s.top() << endl;
                s.pop();
            }
        }
        else if (c == 4)
        {
            if (s.empty())
            {
                cout << "Stack is Empty." << endl;
            }
            else
            {
                cout << "Top of Stack is: " << s.top() << endl;
            }
        }
        else
        {
            cout << "Invalid Choice. Exiting..." << endl;
            exit(0);
        }

        cout << "Do You Want to Continue (y/Y or n/N): ";
        cin >> b;

    } while (b == 'y' || b == 'Y');

    return 0;
}*/

#include <iostream>
#include <list>
using namespace std;
int main()
{
    list<int> myList;

    // Adding elements
    myList.push_back(10);
    myList.push_front(20);
    myList.push_back(30);

    // Displaying elements
    cout << "List elements: ";
    for (list<int>::iterator it = myList.begin(); it != myList.end(); ++it)
    {
        cout << *it << " ";
    }
    cout << std::endl;

    // Inserting element at the second position
    list<int>::iterator it = myList.begin();
    ++it;
    myList.insert(it, 15);

    // Displaying elements after insertion
    cout << "List elements after insertion: ";
    for (it = myList.begin(); it != myList.end(); ++it)
    {
        cout << *it << " ";
    }
    cout << endl;

    // Removing the first element
    myList.pop_front();

    // Displaying elements after removal
    cout << "List elements after removal: ";
    for (it = myList.begin(); it != myList.end(); ++it)
    {
        cout << *it << " ";
    }
    cout << endl;

    // Size of the list
    cout << "Size of the list: " << myList.size() << endl;

    // Clearing the list
    myList.clear();
    cout << "List cleared. Size of the list: " << myList.size() << endl;

    return 0;
}
