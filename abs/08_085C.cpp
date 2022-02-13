#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, Y;
  cin >> N >> Y;
  bool ok = false;
  int x = -1;
  int y = -1;
  int z = -1;
  for (int i = 0; i <= N; i++) {
    for (int j = 0; j <= N; j++) {
      if (i + j > N) break;
      if (Y == (10000 * i + 5000 * j + 1000 * (N - i - j))) {
        ok = true;
        x = i;
        y = j;
        z = N - i - j;
      }
    }
    if (ok) break;
  }
  cout << x << " " << y << " " << z << endl;
}
