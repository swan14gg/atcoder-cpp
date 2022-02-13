#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;
  string ans = "Odd";
  if ((a * b) % 2 == 0) {
    ans = "Even";
  }
  cout << ans << endl;
}
