/*#include <iostream>
using namespace std;

void sort(int arr[], int size)
{
    for (int i = 0; i <= size; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            int temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
    }
}
int main()
{
    int arr[5] = {7, 8, 3, 1, 2};
    int size;
    cout << "Enter The Size of The Array: ";
    cin >> size;
    sort(arr, size);
    cout << "Sorted Array: ";
    for (int j = 0; j < size; j++)
    {
        cout << arr[j] << " ";
    }
    return 0;
}

#include <iostream>
using namespace std;

void sort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int arr[5] = {7, 8, 3, 1, 2};
    int size = 5;

    sort(arr, size);

    cout << "Sorted Array: ";
    for (int j = 0; j < size; j++)
    {
        cout << arr[j] << " ";
    }

    return 0;
}*/

// Selection Sorting//

// C++ program for implementation of
// selection sort

/*#include <iostream>
using namespace std;

// Function for Selection sort
void selectionSort(int arr[], int n)
{
    int i, j, min_idx;

    // One by one move boundary of
    // unsorted subarray
    for (i = 0; i < n - 1; i++)
    {

        // Find the minimum element in
        // unsorted array
        min_idx = i;
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min_idx])
                min_idx = j;
        }

        // Swap the found minimum element
        // with the first element
        if (min_idx != i)
            swap(arr[min_idx], arr[i]);
    }
}

// Function to print an array
void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
        cout << endl;
    }
}

// Driver program
int main()
{
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Function Call
    selectionSort(arr, n);
    cout << "Sorted array: ";
    printArray(arr, n);
    return 0;
}

#include <iostream>
#include<string>
using namespace std;

int main()
{
    std::string str1 = "Hello, ";
    std::string str2 = "World!";
    std::string result = str1 + str2;
    std::cout << "Concatenated String: " << result << std::endl;
    return 0;
}

#include <iostream>
#include <string>
using namespace std;

int main()
{
    std::string str = "Hello, World!";
    std::string substr = "World";
    size_t found = str.find(substr);

    if (found != std::string::npos)
    {
        std::cout << "Substring found at index: " << found << std::endl;
    }
    else
    {
        std::cout << "Substring not found" << std::endl;
    }
    return 0;
}

// Find Substring

#include <iostream>
#include <string>

int main()
{
    std::string str = "Hello, World!";
    std::string from = "World";
    std::string to = "C++";

    size_t start_pos = str.find(from);
    if (start_pos != std::string::npos)
    {
        str.replace(start_pos, from.length(), to);
    }

    std::cout << "String after replacement: " << str << std::endl;
    return 0;
}

#include <iostream>
#include <string>
using namespace std;

int main()
{
    std::string str = "Welcome to the MIET";
    str.replace(3, 4, "abcd");
    cout << str << endl;
    return 0;
}

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str = "Hello Skibidi G";
    cout << str.length();
    return 0;
}

#include <iostream>
using namespace std;

void b_sort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int arr[5] = {44, 5, 67, 12, 89, 45};
    int size = 5;

    b_sort(arr, size);

    cout << "Sorted Array: ";
    for (int j = 0; j < size; j++)
    {
        cout << arr[j] << " ";
    }
    int s;
    cout << "Enter The Number to Search: ";
    cin >> s;
    for (int j = 0; j <= size - 1; j++)
    {
        if (arr[j] == s)
        {
            cout << "Number Found at " << j + 1 << " position";
        }
    }
    return 0;
}*/

#include <iostream>
using namespace std;

int main()
{
    char b;
    do
    {
        int c;
        cout << "--------------------------------------------------" << endl;
        cout << "----------------PARKING SOFTWARE------------------" << endl;
        cout << "----------CHOOSE AN OPTION TO CONTINUE------------" << endl;
        cout << "1. CAR PARKING" << endl;
        cout << "2. BIKE PARKING" << endl;
        cout << "3. RIKSHAW PARKING" << endl;
        cout << "4. EXIT" << endl;
        cout << "PRESS BUTTON TO CONTINUE:";
        cin >> c;
        switch (c)
        {
        case 1:
        {
            cout << "CAR PARKED SUCCESSFULLY" << endl;
            break;
        }
        case 2:
        {
            cout << "BIKE PARKED SUCCESSFULLY" << endl;
            break;
        }
        case 3:
        {
            cout << "RIKSHAW PARKED SUCCESSFULLY" << endl;
            break;
        }
        case 4:
        {
            cout << "THANKS FOR USING!!" << endl;
            exit(0);
        }
        default:
        {
            cout << "YOU CHOSE A WRONG OPTION" << endl;
        }
        }
        cout << "Do YOU WANT TO CONTINUE (Y/N): ";
        cin >> b;
    } while (b == 'y' || b == 'Y');

    return 0;
}
