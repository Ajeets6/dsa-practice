#include <bits/stdc++.h>
using namespace std;

#define IOS \
  ios::sync_with_stdio(0); \
  cin.tie(0); \
  cout.tie(0);

int longestOnes(vector<int>& nums, int k) {
        long long left = 0,right = 0;
        long long zero = 0, ans = 0;

        while (right < nums.size()) {
            if (nums[right] == 0) zero++;

            while (zero > k) {
                if (nums[left] == 0) zero--;
                left++;
            }

            ans = max(ans, right - left + 1);
            right++;
        }
        return ans;
    }

int main() {
  IOS


  return 0;
}