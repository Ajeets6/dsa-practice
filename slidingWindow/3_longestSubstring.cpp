#include <bits/stdc++.h>
using namespace std;

#define IOS \
  ios::sync_with_stdio(0); \
  cin.tie(0); \
  cout.tie(0);

int lengthOfLongestSubstring(string s) {
    unordered_map<char, int> freq;
    int left = 0;
    int result = 0;

    for (int right = 0; right < s.size(); right++) {
        freq[s[right]]++;

        // shrink window until no duplicates
        while (freq[s[right]] > 1) {
            freq[s[left]]--;
            left++;
        }

        result = max(result, right - left + 1);
    }

    return result;
}

int main() {
  IOS


  return 0;
}