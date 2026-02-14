#include <bits/stdc++.h>
using namespace std;

#define IOS \
  ios::sync_with_stdio(0); \
  cin.tie(0); \
  cout.tie(0);

int missingNumber(vector<int>& nums) {
    long long n=(nums.size()*(nums.size()+1))/2;
    long long sum=0;
    for(int x:nums) sum+=x;
    return n-sum;
}

int main() {
  IOS


  return 0;
}