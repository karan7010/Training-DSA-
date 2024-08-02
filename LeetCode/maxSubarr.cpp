
/*53. Maximum Subarray
Given an integer array nums, find the 
subarray
 with the largest sum, and return its sum.*/

class Solution
{
public:

    int maxSubArray(vector<int>& nums)
    {
        int ans = INT_MIN;
        int sum = 0;

        for(const int num : nums)
        {
            sum = max(num , sum+num);
            ans = max(ans , sum);
        }
        return ans;
    }
};
