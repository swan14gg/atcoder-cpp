#include <bits/stdc++.h>
using namespace std;

int digit_sum(int n) {
  if (n < 10) return n;
  return digit_sum(n / 10) + n % 10;
}

int main() {
  int N, A, B;
  cin >> N >> A >> B;
  int ans = 0;
  for (int i = 1; i <= N; i++) {
    int sum = digit_sum(i);
    if (A <= sum && sum <= B) {
      ans += i;
    }
  }
  cout << ans << endl;
}
