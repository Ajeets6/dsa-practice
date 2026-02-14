#include <bits/stdc++.h>
using namespace std;

#define IOS \
  ios::sync_with_stdio(0); \
  cin.tie(0); \
  cout.tie(0);

void reverse(vector<int>& nums, int left, int right){
    while(left<right){
        swap(nums[left],nums[right]);
        left++;
        right--;
    }
}
void rotate(vector<int>& nums, int k) {
    k%=nums.size();
    reverse(nums,0,nums.size()-1);
    reverse(nums,0,k-1);
    reverse(nums,k,nums.size()-1);

}

int main() {
IOS


return 0;
}