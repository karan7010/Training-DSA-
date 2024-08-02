/*1672. Richest Customer Wealth
You are given an m x n integer grid accounts where accounts[i][j] is the amount of money the i​​​​​​​​​​​th​​​​ customer has in the j​​​​​​​​​​​th​​​​ bank. Return the wealth that the richest customer has.

A customer's wealth is the amount of money they have in all their bank accounts. The richest customer is the customer that has the maximum wealth.*/

#include <vector>
#include <algorithm>

class Solution {
public:
    int maximumWealth(std::vector<std::vector<int>>& accounts) {
        int n = accounts.size();
        int maxWealth = 0;

        for (int i = 0; i < n; i++) {
            int sum = 0;
            for (int j = 0; j < accounts[i].size(); j++) {
                sum += accounts[i][j];
            }
            maxWealth = std::max(sum, maxWealth);
        }

        return maxWealth;
    }
};
