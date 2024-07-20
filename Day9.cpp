/*

#include<iostream>
#include<vector>
#include<numeric>

using namespace std;

int main()
{
    vector<int> numbers = {1 , 2 , 3, 4 , 5};
      //using accumulate with a lambd to sum up the elements

      int sum = accumulate(numbers.begin() , numbers.end() , 0 , [](int total , int x)
                           {
                               return total+x;
                           });

                           cout<<"Sum : "<<sum<<endl;

                           return 0;
}



*/


//----------------------------------------------------------------------------------------------------------------//


/*

#include<iostream>
#include<vector>
#include<numeric>

using namespace std;

int main()
{
    vector<int> numbers = {1 , 2 , 3, 4 , 5};
     int sum = 0;

     auto result
                           return 0;
}


*/


/*



#include<iostream>
#include<vector>
#include<string>
#include<numeric>


using namespace std;
int main()
{
    vector<string> words = {"Hello" , "world" , "from" , "C++"};

    string result = accumulate(words.begin() , words.end() , string(""),
                               [](const string& total , const string& word)
                               {
                                   return total = (total.empty() ? "" : " ") + word;
                               });


                               cout<<"Concatenated string : "<<result<<endl;

                               return 0;
}


*/

//-------------------------------------------------------------------------------------------------------------//

/*

#include<bits/stdc++.h>
using namespace std;

int main () {
    string s1 = "jhon12Doe14@gmail18.com8";
    string s2 = s1;
    int count = 0;
    sort(s2.begin(), s2.end());
    for (int i = 0 ;i<s2.length()-1;i++) {
        if (s2[i] == s2[i+1]){
        cout<<"Duplicate Number: "<<s2[i]<<endl;
        count++;}
        if (isalpha(s2[i]))
        break;
    }
    cout << "Total Duplicated Numbers: "<<count<<endl;
}
*/



//---------------------------------------------------------------------------------------------------------//


//write a program to find the duplicate number from string

/*
let say string jhon12Doe14@gmail18.com8

1 -number -1 is 3 times

8 -number -2 times

solution using- STL

solution using -lambda

simple-solution

-----leet code-----
*/

/*
#include<bits/stdc++.h>
using namespace std;

int main () {
 string s1 = "jhon12Doe14@gmail18.com8";
 string s2 = s1;

 int count = 0;
 sort(s2.begin(), s2.end());

 for (int i = 0 ;i<s2.length()-1;i++) {
  if (s2[i] == s2[i+1]){
  cout<<"Duplicate Number: "<<s2[i]<<endl;
  count++;}

  if (isalpha(s2[i]))
  break;

 }
 cout << "Total Duplicated Numbers: "<<count<<endl;
}


*/






/*

#include <iostream>

#include <string>

using namespace std;

bool isDigit(char c) {

 return c >= '0' && c <= '9';

}

void countDigits(const string &input, int digitCount[]) {

 // Lambda to increment count of a digit in the array

 auto incrementCount = [&digitCount](char c) {

  if (isDigit(c)) {

   digitCount[c - '0']++;

  }

 };

 for (char c : input) {

  incrementCount(c); }}

void printDuplicateCounts(int digitCount[]) {

 for (int i = 0; i < 10; ++i) {

  if (digitCount[i] > 1) {

   cout << "Number " << i << " is " << digitCount[i] << " times" << endl;

  }}}

int main() {

 string input = "john12Doe14@gmail18.com8";

 int digitCount[10] = {0};

 countDigits(input, digitCount);

 printDuplicateCounts(digitCount);

 return 0;

}



/*
--------------

#include <iostream>

#include <unordered_map>

using namespace std;

int main() {

 string s = "jhon12Doe14@gmail.com8";

 unordered_map<char, int> countMap;

 for (char c : s) {

  if (isdigit(c)) {

   countMap[c]++;

  }

 }

 for (const auto& entry : countMap) {

  cout << entry.first << " : " << entry.second << endl;

 }

 return 0;

}

--------------

#include<iostream>

using namespace std;

int main()

{

 string s;

 cin>>s;

 int c=0;

 for(char i: s)

 {

  if(i=='1'||i=='2'||i=='3'|i=='4'||i=='5'||i=='6'||i=='7'||i=='8'||i=='9'||i=='0')

  {

   c=0;

   char k;

   for(char j:s)

   {

    if(j==i)

    {

     k=j;

     c++;

    }

   }

   cout<<k<<" occurs "<<c<<" times"<<endl;

 } }}
*/

/*

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> a = {1, 0,  1, 0, 1, 1, 1};
    int count = 0;

    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == 1 && a[i + 1] == 1)
            count++;
    }

    cout << "Maximum Consecutive 1s: " << count << endl;
    return 0;
}



*/


//------------------------------------------------------------------------------------------------------//
#include <iostream>



using namespace std;

int count_of_consecutive_one(int arr[], int size){

  int count = 0;

  for(int i = 0;#include <iostream>



using namespace std;

int count_of_consecutive_one(int arr[], int size){

  int count = 0;#include <iostream>



using namespace std;

int count_of_consecutive_one(int arr[], int size){

  int count = 0;

  for(int i = 0; i < size - 1; i++){

    if(arr[i] == 1 && arr[i] == arr[i + 1]){

      count++;

    }

  }

  return count;

}

int main(){

  int size;

  cout << "Enter the size of the array: ";

  cin >> size;

  int arr[size];

  cout << "Enter the elements of the array (0 or 1): ";

  for(int i = 0; i < size; i++){

    cin >> arr[i];

  }

  int found = count_of_consecutive_one(arr, size);

  cout << "Number of consecutive ones: " << found << endl;

  return 0;

}































  for(int i = 0; i < size - 1; i++){

    if(arr[i] == 1 && arr[i] == arr[i + 1]){

      count++;

    }

  }

  return count;

}

int main(){

  int size;

  cout << "Enter the size of the array: ";

  cin >> size;

  int arr[size];

  cout << "Enter the elements of the array (0 or 1): ";

  for(int i = 0; i < size; i++){

    cin >> arr[i];

  }

  int found = count_of_consecutive_one(arr, size);

  cout << "Number of consecutive ones: " << found << endl;

  return 0;

}






















 i < size - 1; i++){

    if(arr[i] == 1 && arr[i] == arr[i + 1]){

      count++;

    }

  }

  return count;

}

int main(){

  int size;

  cout << "Enter the size of the array: ";

  cin >> size;

  int arr[size];

  cout << "Enter the elements of the array (0 or 1): ";

  for(int i = 0; i < size; i++){

    cin >> arr[i];

  }

  int found = count_of_consecutive_one(arr, size);

  cout << "Number of consecutive ones: " << found << endl;

  return 0;

}

#include <iostream>



using namespace std;

int count_of_consecutive_one(int arr[], int size){

  int count = 0;

  for(int i = 0; i < size - 1; i++){

    if(arr[i] == 1 && arr[i] == arr[i + 1]){

      count++;

    }

  }

  return count;

}

int main(){

  int size;

  cout << "Enter the size of the array: ";

  cin >> size;

  int arr[size];

  cout << "Enter the elements of the array (0 or 1): ";

  for(int i = 0; i < size; i++){

    cin >> arr[i];

  }

  int found = count_of_consecutive_one(arr, size);

  cout << "Number of consecutive ones: " << found << endl;

  return 0;

}

