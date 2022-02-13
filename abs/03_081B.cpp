#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  vector<int> A(N);
  cin >> N;
  for (int i = 0; i < N; i++) {
    cin >> A.at(i);
  }
  int ans = 0;
  bool ok = true;
  while (ok) {
    for (int i = 0; i < N; i++) {
      if (A.at(i) % 2 != 0) {
        ok = false;
        break;
      } else {
        A.at(i) /= 2;
      }
    }
    if (ok) {
      ans++;
    }
  }
  cout << ans << endl;
}
