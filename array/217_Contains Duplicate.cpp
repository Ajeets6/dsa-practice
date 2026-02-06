#include <bits/stdc++.h>
using namespace std;

#define IOS                \
  ios::sync_with_stdio(0); \
  cin.tie(0);              \
  cout.tie(0);

 /*bool containsDuplicate(vector<int>& nums) {
        set<int> s(nums.begin(),nums.end());
        return s.size()<nums.size();
    }
*/
bool containsDuplicate(vector<int>& nums) {
       sort(nums.begin(),nums.end());
       for(int i=0;i<nums.size()-1;i++){
        if(nums[i]==nums[i+1]) return true;
       }
       return false;
    }
int main() {
  IOS
  vector<int> s={1,2,1};
  cout<<containsDuplicate(s);


  return 0;
}