#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cout << "Enter The Rows of Array: ";
    cin >> n;
    cout << "Enter The Columns of Array: ";
    cin >> m;
    int arr[n][m];
    int sum = 0;
    cout << "Enter The Element of Array: ";
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            cin >> arr[i][j];
        }
        cout << endl;
    }

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    int i;
    int j;
    for (int i = 0; i < n; i++)
    {
        for (i == j; i < m; j++)
            sum = sum + arr[i][j];
    }
    cout << "Sum is: " << sum;
    return 0;
}
