#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> t(N + 1);
  vector<int> x(N + 1);
  vector<int> y(N + 1);
  t.at(0) = 0;
  x.at(0) = 0;
  y.at(0) = 0;
  for (int i = 1; i < N + 1; i++) {
    cin >> t.at(i) >> x.at(i) >> y.at(i);
  }
  string ans = "Yes";
  for (int i = 0; i < N + 1; i++) {
    if (i == 0) continue;
    int sum_b = x.at(i - 1) + y.at(i - 1);
    int sum_n = x.at(i) + y.at(i);
    int diff = t.at(i) - t.at(i - 1) - abs(sum_b - sum_n);
    if (diff < 0 || diff % 2 != 0) {
      ans = "No";
      break;
    }
  }
  cout << ans << endl;
}
