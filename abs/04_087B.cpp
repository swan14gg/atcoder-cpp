#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, c, x;
  cin >> a >> b >> c >> x;
  int ans = 0;
  int f;
  for (int i = 0; i <= a; i++) {
    for (int j = 0; j <= b; j++) {
      f = x - 500 * i - 100 * j;
      if (0 <= f && f <= 50 * c && f % 50 == 0) {
        ans += 1;
      }
    }
  }
  cout << ans << endl;
}
