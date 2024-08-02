/*Total Negative Numbers In A Sorted Matrix
Problem statement
You are given an ‘N’ x ‘M’ matrix ‘MAT’, which is sorted in non-increasing order both row-wise and column-wise. Your task is to count the number of negative numbers in ‘MAT’.

For Example:

You are given ‘N’ = 3, ‘M’ = 2 and ‘MAT’= [[3, 1],[2, -1],[1, 2]]. Then the answer will be two for the first test case because there are two negative numbers in the given matrix(-1, -2).*/

#include <iostream>
#include <vector>

int countNegativeNumbers(std::vector<std::vector<int>> &mat) {
    int count = 0;
    for (const auto &row : mat) {
        for (int num : row) {
            if (num < 0) {
                count++;
            }
        }
    }
    return count;
}
