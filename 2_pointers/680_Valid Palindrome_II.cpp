#include <bits/stdc++.h>
using namespace std;

#define IOS                \
  ios::sync_with_stdio(0); \
  cin.tie(0);              \
  cout.tie(0);


// Check both cases
bool pali(string s,long long left,long long right){
  while(left<right){
    if(s[left]!=s[right]) return false;
    left++;
    right--;

  }
  return true;
}
bool validPalindrome(string s) {
        long long left=0,right=s.size()-1;
        while(left<right){
            if(s[left]!=s[right]){
                return pali(s,left+1,right) || pali(s,left,right-1);
        }

        left++;
        right--;
      }
    return true;
  }
int main() {
  IOS
  string s="abc";
  if(validPalindrome(s)) cout<<"True";
  else cout<<"False";

  return 0;
}