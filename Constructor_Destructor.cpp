/*
#include<iostream>
#include<conio.h>

using namespace std;

class Example
{
    public:
        Example()
        {
            cout<<"Destructor Invoked";
        }
};

int main ()
{
    Example obj;
    return 0;
}*/

/*#include<iostream>
#include<conio.h>

using namespace std;

class Example
{
    public:
        Example()
        {
            cout<<"Default Constructor Invoked";
        }
};

int main ()
{
    Example obj;
    return 0;
}*/

/*
#include<iostream>
#include<conio.h>

using namespace std;

class Example
{
    public:
        Example()
        {
            cout<<"Destructor Invoked";
        }
};

int main ()
{
    Example obj;
    return 0;
}*/
/*
#include <iostream>

using namespace std;

class Example
{
public:
    Example(int n)
    {
        cout << "Pin Entered By User is:" << n;
    }
};

int main()
{

    Example obj(1001);
    return 0;
}
*/
#include <iostream>
using namespace std;
class Sum
{
private:
    int x;
    int y;

public:
    sum(int x1 = 0, int y1 = 0)
    {
        x = x1;
        y = y1;
    }
    sum add(sum s)
    {
        sum temp;
        temp.x = x + s.x;
        temp.y = y + s.y;
        return temp;
    }
    void display()
    {
        cout << "x = " << x << "\n";
        cout << "y = " << y << "\n";
    }
};

int main()
{
    sum s1(5, 10);
    sum s2(10, 20);
    sum s3;
    cout << "Sum 1 \n;
            s1.display();
    cout << "Sum 2 \n;
            s2.display();
    cout << "THe Sum of two no. is \n";
    s3.display();
    return 0;
}
