#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;
  S = regex_replace(S, regex("eraser"), "");
  S = regex_replace(S, regex("erase"), "");
  S = regex_replace(S, regex("dreamer"), "");
  S = regex_replace(S, regex("dream"), "");
  string ans = "NO";
  if (S == "") ans = "YES";
  cout << ans << endl;
}
