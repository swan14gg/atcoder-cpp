#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;
  int count = 0;
  for (char s : S) {
    if (s == '1') {
      count++;
    }
  }
  cout << count << endl;
}
