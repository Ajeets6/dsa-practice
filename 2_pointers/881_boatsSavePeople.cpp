#include <bits/stdc++.h>
using namespace std;

#define IOS \
  ios::sync_with_stdio(0); \
  cin.tie(0); \
  cout.tie(0);

int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(), people.end());
        int left = 0, right = people.size() - 1;
        int count = 0;
        while (left <= right) {
            if (people[left] + people[right] <= limit) {

                left++;
            }

            right--;
            count++;
        }
        return count;
    }

int main() {
  IOS


  return 0;
}