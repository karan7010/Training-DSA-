
/*503. Next Greater Element II

Given a circular integer array nums (i.e., the next element of nums[nums.length - 1] is nums[0]), return the next greater number for every element in nums.

The next greater number of a number x is the first greater number to its traversing-order next in the array, which means you could search circularly to find its next greater number. If it doesn't exist, return -1 for this number.*/

#include <vector>
#include <stack>

class Solution {
public:
    std::vector<int> nextGreaterElements(std::vector<int>& nums) {
        std::stack<int> stack;
        std::vector<int> ans(nums.size(), -1);

        for (int i = 0; i < 2 * nums.size(); i++) {
            int current = nums[i % nums.size()];
            while (!stack.empty() && nums[stack.top()] < current) {
                ans[stack.top()] = current;
                stack.pop();
            }
            if (i < nums.size()) {
                stack.push(i);
            }
        }

        return ans;
    }
};
