#include <bits/stdc++.h>
using namespace std;

#define IOS                \
  ios::sync_with_stdio(0); \
  cin.tie(0);              \
  cout.tie(0);

int main() {
  IOS
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> a(n);
        for(int &x : a) cin>>x;
        int left=0,right=0;
        int sum=0;
        int count=0;
        while(right<n){
            sum+=a[right];
           while(sum>k){

            sum-=a[left];
             left++;

        }
        if(sum<=k){
        count+=(right-left+1);}
        right++;


    }

    cout<<count<<endl;

    }
  return 0;
}