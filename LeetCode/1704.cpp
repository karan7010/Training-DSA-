/*1704. Determine if String Halves Are Alike
You are given a string s of even length. Split this string into two halves of equal lengths, and let a be the first half and b be the second half.

Two strings are alike if they have the same number of vowels ('a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'). Notice that s contains uppercase and lowercase letters.

Return true if a and b are alike. Otherwise, return false.*/

#include <string>
#include <algorithm>

class Solution {
public:
    bool halvesAreAlike(std::string s) {
        int n = s.size();
        int half = n / 2;
        int count1 = 0, count2 = 0;
        std::transform(s.begin(), s.end(), s.begin(), ::tolower);
        auto isVowel = [](char c) {
            return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
        };
        for (int i = 0; i < half; ++i) {
            if (isVowel(s[i])) {
                count1++;
            }
        }
        for (int i = half; i < n; ++i) {
            if (isVowel(s[i])) {
                count2++;
            }
        }
        return count1 == count2;
    }
};.cpp
