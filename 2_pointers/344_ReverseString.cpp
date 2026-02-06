#include <bits/stdc++.h>
using namespace std;

#define IOS \
  ios::sync_with_stdio(0); \
  cin.tie(0); \
  cout.tie(0);

void reverseString(vector<char>& s) {
        long long left=0,right=s.size()-1;
        while(left<right){
            swap(s[left],s[right]);
            left++;
            right--;
        }
    }

int main() {
  IOS


  return 0;
}