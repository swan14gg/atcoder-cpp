#include <bits/stdc++.h>
using namespace std;

int main() {
  int x, a, b;
  cin >> x >> a >> b;

  // 1.の出力
  x++;
  cout << x << endl;

  // ここにプログラムを追記
  int a2 = x * (a + b);
  int a3 = a2 * a2;
  int a4 = a3 - 1;
  cout << a2 << endl << a3 << endl << a4 << endl;
}
