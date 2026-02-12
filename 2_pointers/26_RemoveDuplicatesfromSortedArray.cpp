#include <bits/stdc++.h>
using namespace std;

// just place th first occurence to the front
int removeDuplicates(vector<int>& nums) {
        int l=0;
        for(int r=1;r<nums.size();r++){
            if(nums[r]!=nums[l]){
                nums[++l]=nums[r];
            }
        }
        return l+1;
    }

#define IOS \
  ios::sync_with_stdio(0); \
  cin.tie(0); \
  cout.tie(0);

int main() {
  IOS


  return 0;
}
