#include <bits/stdc++.h>
using namespace std;

#define IOS \
  ios::sync_with_stdio(0); \
  cin.tie(0); \
  cout.tie(0);

int maxProfit(vector<int>& prices) {
        int buy=prices[0];
        int sell=-1;

        for(int i=0;i<prices.size();i++){
            sell=max(sell,prices[i]-buy);
            buy=min(prices[i],buy);


        }
        return sell;
    }

int main() {
  IOS


  return 0;
}