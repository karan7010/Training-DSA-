
/*496. Next Greater Element I
The next greater element of some element x in an array is the first greater element that is to the right of x in the same array.

You are given two distinct 0-indexed integer arrays nums1 and nums2, where nums1 is a subset of nums2.

For each 0 <= i < nums1.length, find the index j such that nums1[i] == nums2[j] and determine the next greater element of nums2[j] in nums2. If there is no next greater element, then the answer for this query is -1.

Return an array ans of length nums1.length such that ans[i] is the next greater element as described above.*/

class Solution {



public:

 vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {

  vector<int> v;

  for(auto i: nums1)

  {

   int j=0;

   for( ;j<nums2.size();j++)

   {

    if(i==nums2[j])

     break;

   }

   j=j+1;

   int f=1;

   for( ;j<nums2.size();j++){

    if(nums2[j]>i) {

     v.push_back(nums2[j]);

     f=0;

     break;

    }

   }

   if(f==1)

    v.push_back(-1);

  }

  return v;

 }

};
