#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, A;
  cin >> N >> A;
  for (int i = 0; i < N; i++) {
    string op;
    int B;
    cin >> op >> B;
    if (op == "+") {
      A += B;
    } else if (op == "-") {
      A -= B;
    } else if (op == "*") {
      A *= B;
    } else {
      if (B == 0) {
        cout << "error" << endl;
        break;
      } else {
        A /= B;
      }
    }
    cout << to_string(i + 1) + ":" + to_string(A) << endl;
  }
}
