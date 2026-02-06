#include <bits/stdc++.h>
using namespace std;

#define IOS                \
  ios::sync_with_stdio(0); \
  cin.tie(0);              \
  cout.tie(0);

bool isValid(string s) {
        stack<char> br;
        for (char p : s) {
            if (p == ')' || p == '}' || p == ']') {

                if (br.empty())
                    return false;
                if ((p == ')' && br.top() != '(') ||
                    (p == '}' && br.top() != '{') ||
                    (p == ']' && br.top() != '['))
                    return false;

                br.pop();
                continue;
            }
            br.push(p);
        }
        return br.empty();
    }
int main() {
  IOS
   string s="[(])";
   if(isValid(s)) cout<<"Yes";
   else cout<<"No";

  return 0;
}