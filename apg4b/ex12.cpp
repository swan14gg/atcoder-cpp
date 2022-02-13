#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;
  int plus = 0, minus = 0;
  for (int i = 0; i < S.size(); i++) {
    char s = S.at(i);
    if (s == '1') continue;
    if (s == '+')
      plus++;
    else
      minus++;
  }
  cout << 1 + plus - minus << endl;
}
