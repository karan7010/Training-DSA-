/*#include <iostream>
using namespace std;

int main()
{
    int array[5] = {10, 20, 30, 40, 50};
    // --------------------------------------------------------------------------------
    // TO Find Sum of elements in an Array :
    int sum = 0;
    for (auto x : array) // automatically assign the data type to varibale which is your are use.
        sum += x;
    sum += x;
    cout << "Sum is " << sum

        //----------------------------------------------------------------------------------
        //----------------------------------------------------------------------------------
        // To Find the minimum or maximum elements in an array :
        int max = -32678;
    for (auto temp : array)
    {
        if (temp > max) // use if (temp < min) then in = INT64_MAX intial for minimum
        {
            max = temp;
        }
        int user_input;
        cout << "Enter the number you want to search for in the array :";
        cin >> user_input;
        int counter = 0;
        for (auto x : array)
        {
            if (x == user_input)
            {
                cout << "Number " << user_input << " is found at the location: " << counter;

                exit(0);
            }
            counter++;
        }
        cout << "Not Founder: ";
    }
    cout << "Not Found";
    return 0;
}

#include <iostream>
using namespace std;

int main()
{
    int a[5] = {1, 4, 2, 3, 8};
    int i;
    int value = 5;
    int count = 0;
    // pick the first element of the pair along with a[i]
    for (int i = 0; i < 5; i++)
        // pick the second element of the pair along with a[i]
        for (int j = i + 1; j < 5; j++)
        {
            if (a[i] + a[j] == value)
            {
                count = count + 1;
            }
        }
    cout << "the count of pairs " << value << " is " << count << endl;
    return 0;
}*/

#include <iostream>
using namespace std;

int main()
{
    int i;
    int j;
    for (i = 1; i <= 5; i++) // Print a stars format star pattern which goes from 1 to 5 star.
    {
        for (j = 1; j <= 5; j++)
        {
            if (i + j < 5) // use if (i<=j) for top right triangle which gpes from s to 1 star
                cout << "* ";
            else
            {
                cout << "  ";
            }
            cout << endl;
        }
        return 0;
    }
}

/*#include <iostream>
using namespace std;

int main()
{
    int array[5] = {10, 20, 30, 40, 50};
    // --------------------------------------------------------------------------------
    // TO Find Sum of elements in an Array :
    int sum = 0;
    for (auto x : array) // automatically assign the data type to varibale which is your are use.
        sum += x;
    sum += x;
    cout << "Sum is " << sum

        //----------------------------------------------------------------------------------
        //----------------------------------------------------------------------------------
        // To Find the minimum or maximum elements in an array :
        int max = -32678;
    for (auto temp : array)
    {
        if (temp > max) // use if (temp < min) then in = INT64_MAX intial for minimum
        {
            max = temp;
        }
        int user_input;
        cout << "Enter the number you want to search for in the array :";
        cin >> user_input;
        int counter = 0;
        for (auto x : array)
        {
            if (x == user_input)
            {
                cout << "Number " << user_input << " is found at the location: " << counter;

                exit(0);
            }
            counter++;
        }
        cout << "Not Founder: ";
    }
    cout << "Not Found";
    return 0;
}

#include <iostream>
using namespace std;

int main()
{
    int a[5] = {1, 4, 2, 3, 8};
    int i;
    int value = 5;
    int count = 0;
    // pick the first element of the pair along with a[i]
    for (int i = 0; i < 5; i++)
        // pick the second element of the pair along with a[i]
        for (int j = i + 1; j < 5; j++)
        {
            if (a[i] + a[j] == value)
            {
                count = count + 1;
            }
        }
    cout << "the count of pairs " << value << " is " << count << endl;
    return 0;
}*/

/*#include <iostream>
using namespace std;

int main()
{
    int i;
    int j;
    for (i = 1; i <= 5; i++) // Print a stars format star pattern which goes from 1 to 5 star.
    {
        for (j = 1; j <= 5; j++)
        {
            if (i + j < 5) // use if (i<=j) for top right triangle which gpes from s to 1 star
                cout << "* ";
            else
            {
                cout << "  ";
            }
            cout << endl;
        }
        return 0;
    }
}

#include <iostream>
using namespace std;

int main()
{
    cout << "1. Insertion" << endl;
    cout << "2. Deletion" << endl;
    cout << "3. Updation" << endl;
    cout << "4. Read" << endl;
    cout << "5. Exit" << endl;
    int c;
    cout << "Enter Your Choice: ";
    cin >> c;
    int i;
    int s;
    cout << "Enter The Size of Array: ";
    cin >> s;
    int arr[i]={4 , 6 , 7 ,8};
    int pos;
    cout<<"Enter The Position for Element to be Inserted: ";
    cin>>pos;
    if (c == 1)
    {
        for (i = 0; i < s; i++)
        {
            cout << "Enter Element: ";
            cin >> arr[i];
            cout << "Element Inserted at position" << "" << arr[i] << endl;
        }
    }
    else if (c == 2)
    {
        int b;
        cout<<"Enter The Element to be Deleted: ";
        cin>>b;
        if (arr[i]==0)
        {
            cout<<""
        }
    }
    return 0;
}*/

#include <iostream>
using namespace std;

int main()
{
    int sum, product;
    cin >> sum >> product;

    for (int x = 1; x <= sum / 2; ++x)
    {
        int y = sum - x;
        if (x * y == product)
        {
            if (x < y)
            {
                cout << x << " " << y << endl;
            }
            else
            {
                cout << y << " " << x << endl;
            }
            return 0;
        }

        // If no pair is found
        cout << "No valid pair found." << endl;

        return 0;
    }
}
