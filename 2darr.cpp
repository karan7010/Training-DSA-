/*#include<bits/stdc++.h>
using namespace std;
int main (){
    int n;
    int m;
    cin>>n;
    int arr[n][n];
    for (int i=0;i<=n;i++)
        {
            for (int j=0;j<=n;j++){
            cin>>arr[i][j];
            }
        }
        for(int i=0;i<=n;i++){
            for (int j=0;j<=n;j++)
            if (i>=j){
                cout<<arr[i][j]<<" ";
            }
        }
        cout<<endl;
    return 0;
}*/

/*#include<bits/stdc++.h>
using namespace std;
int main (){
int n;
int i;
int j;
int arr[n][n];
cin>>n;
for (int i=0;i<=n;i++)
{
    for (int j=0;j<n;j++)
    cin>>arr[i][j];
}
for (int i=0;i<n;i++)
    for (int j=0;j<=n;j++)
    if (i+j<=1)
    {
        cout<<" ";
    }
    else
    {
        cout<<arr[i][j];
    }
    cout<<endl;
return 0;
}*/


#include<bits/stdc++.h>
using namespace std;
int main (){
int n;
int i;
int j;
int arr[n][n];
cin>>n;
for (int i=0;i<=n;i++)
{
    for (int j=0;j<n;j++)
    cin>>arr[i][j];
}
for (int i=0;i<n;i++)
    for (int j=0;j<=n;j++)
    if (i+j<=1)
    {
        cout<<" ";
    }
    else
    {
        cout<<arr[i][j];
    }
    cout<<endl;
return 0;
} 
