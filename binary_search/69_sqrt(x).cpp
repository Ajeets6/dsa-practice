#include <bits/stdc++.h>
using namespace std;

#define IOS \
  ios::sync_with_stdio(0); \
  cin.tie(0); \
  cout.tie(0);


int mySqrt(int x) {
        if (x < 2) return x;
        long long low=1,high=x/2;
        while(low<=high){
            long long mid=low+(high-low)/2;
            long long square=(long long) mid*mid;
            if(x==square) return mid;
            else if(x>square) low=mid+1;
            else high=mid-1;
        }
        return high;
    }

int main() {
  IOS


  return 0;
}