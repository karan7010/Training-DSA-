#include<iostream>
#include<vector>
#include<algorithm>
#include<array>
using namespace std;

/*
int main()
{
    vector<int> arr = {10 , 9  , 8 , 7 , 1 , 5};

    //using sort from stl to sort the array

    sort(arr.begin() , arr.end() , greater<int>());

    cout<<"Sorted array : ";
    for(int num:arr)
    {
        cout<<num<<" ";
    }
    return 0;
}
*/

//--------------------------------------------------------------//


//Main Fil
/*
int main()

{
  Input obj;
  obj.In();
  Display obj2;
  obj2.Dis();
  return 0;
}
*/

//--------------------------------------------------------------//

//main files part
/*
class Input
{
public:
    int n;
    void In()
    {
        std::cout << "Give Input:" << std::endl;

        std::cin >> n;
    }
};

class Display : Input
{
public:
    int n;

    void Dis()
    {
        std::cout << "Entered Input: " << n << std::endl;
    }
};
*/
//--------------------------------------------------------------//
/*
void mergeSort(vector<int>& arr);
void insertionSort(vector<int>& arr);
void bubbleSort(vector<int>& arr);
void selectionSort(vector<int>& arr);

int main() {

  vector<int> arr = {5, 2, 4, 6, 1, 3};
  cout << "Given Array:\n";

   display(arr);
  int choice;
  do {
    cout << "Choose sorting method:\n1. Bubble sort\n2. Selection sort\n3. Merge Sort\n4. Insertion Sort\n5. Exit" << endl;
    cin >> choice;

    switch (choice) {

      case 1:
        bubbleSort(arr);
        break;

      case 2:
        selectionSort(arr);
        break;

      case 3:
        mergeSort(arr);
        break;

      case 4:
        insertionSort(arr);
        break;

      case 5:
        cout << "Exiting..." << endl;
        exit(0);

      default:
        cout << "Invalid choice!" << endl;
    }

    cout << "\nSorted Array:\n";
    display(arr);
    arr = {5, 2, 4, 6, 1, 3};

    cout << "\nArray reset to unsorted state for next demonstration:\n";
    display(arr);

  } while (true);
  return 0;

}

//--------------------------------------------------------------//

using namespace std;
void insertionSort(vector<int>& arr) {

  for (size_t i = 1; i < arr.size(); ++i) {
    int key = arr[i];
    int j = i - 1;

    while (j >= 0 && arr[j] > key) {
      arr[j + 1] = arr[j];
      --j;
    }

    arr[j + 1] = key;
  }
}

void mergeSort(vector<int>& arr) {
  stable_sort(arr.begin(), arr.end());
}

void bubbleSort(vector<int>& arr) {
  int n = arr.size();
  for (int i = 0; i < n - 1; ++i) {
    for (int j = 0; j < n - i - 1; ++j) {
      if (arr[j] > arr[j + 1]) {
        swap(arr[j], arr[j + 1]);
      }
    }
  }
}

void selectionSort(vector<int>& arr) {
  int n = arr.size();

  for (int i = 0; i < n - 1; ++i) {
    int min_idx = i;
    for (int j = i + 1; j < n; ++j) {
      if (arr[j] < arr[min_idx]) {
        min_idx = j;
      }
    }

    if (min_idx != i) {
      swap(arr[min_idx], arr[i]);
    }
  }
}

void display(const vector<int>& arr) {
  for (int val : arr) {
    cout << val << " ";
  }
  cout << endl;
}
*/

//--------------------------------------------------------------//

/*
bool canAttendMeetings(vector<vector<int>>& intervals) {
    sort(intervals.begin(),intervals.end(),[](const vector<int>& a,const vector<int>& b){
        return a[0]<b[0];
    });
    for (int i=1;i<intervals.size();i++){
        if (intervals[i - 1][1]>intervals[i][0]){
            return false;
        }
    }
    return true;
}
int main(){
    vector<vector<int>> time={{0,30},{5,10},{15,20}};
   if(canAttendMeetings(time))
        cout<<"true"<<endl;
    else
        cout << "false" << endl;
         vector<vector<int>> time1={{7,10},{2,4}};
         if(canAttendMeetings(time1))
        cout<<"true"<<endl;
    else
        cout << "false" << endl;
    return 0;
}

*/




bool canAttendMeetings(vector<vector<int>> &time) {
 sort(time.begin(),time.end(),[](vector<int> &a,vector<int> &b) {
    return a[0]<b[0];
   });

 for (int i=1;i<time.size();i++) {
  if (time[i][0]<time[i-1][1]){
   return false;
  }
 }
 return true;
}

int main(){

 vector<vector<int>>time={{7,10},{2,4}};
 string a=(canAttendMeetings(time)?"true":"false");
 cout<<"Output: "<<a;
 return 0;
}

//--------------------------------------------------------------//

struct Interval {
 int start;
 int end;
};

bool compareIntervals(const Interval& a, const Interval& b) {
 return a.start < b.start;
}

bool canAttendMeetings(vector<Interval>& intervals) {
 sort(intervals.begin(), intervals.end(), compareIntervals);
 for(auto i: intervals){
  printf("%d",i);
 }

 cout<<endl;
 for (int i = 1; i < intervals.size(); ++i) {
  if (intervals[i].start < intervals[i - 1].end) {
   return false; // Overlapping meetings
  }
 }
 return true; // No overlaps
}

int main() {

 vector<Interval> meetings = {{0, 30}, {5, 10}, {15, 20}};
 bool result = canAttendMeetings(meetings);
 cout << (result ? "Can attend all meetings" : "Cannot attend all meetings") << endl;
 return 0;
}

//--------------------------------------------------------------//

bool canAttendMeetings(vector<vector<int>>& intervals) {
 sort(intervals.begin(),intervals.end(),[](const vector<int>& a,const vector<int>& b){
  return a[0]<b[0];
 });

 for (int i=1;i<intervals.size();i++){
  if (intervals[i - 1][1]>intervals[i][0]){
   return false;
  }
 }
 return true;
}

int main(){
 vector<vector<int>> time={{0,30},{5,10},{15,20}};
 if(canAttendMeetings(time))
  cout<<"true"<<endl;

 else
  cout << "false" << endl;
   vector<vector<int>> time1={{7,10},{2,4}};
   if(canAttendMeetings(time1))
  cout<<"true"<<endl;

 else
  cout << "false" << endl;
 return 0;
}

//--------------------------------------------------------------//


vector<vector<int>>nums={{0,30},{5,10},{15,20}};

int main(){
 int flag;
 for(int i=0;i<nums.size();i++){
 if(nums[i].end()>nums[i+1].begin()){
  flag=1;
  break;
 }
}

if(flag==1){
 cout<<"False"<<endl;
}

else{
 cout<<"True";
}
return 0;
}
