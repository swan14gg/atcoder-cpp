#include <bits/stdc++.h>
using namespace std;

vector<string> island(10);
vector<vector<bool>> memo(10, vector<bool>(10, true));

vector<string> provide_island(vector<string> island, int x, int y) {
  island.at(x).at(y) = 'o';
  return island;
}

vector<vector<bool>> provide_memo(vector<vector<bool>> memo, int x, int y) {
  memo.at(x).at(y) = false;
  return memo;
}

void search(vector<string> &island, vector<vector<bool>> &memo, int x, int y) {
  if (x < 0 || y < 0 || x > 9 || y > 9) return;
  if (island.at(x).at(y) == 'x') return;
  if (memo.at(x).at(y)) return;
  memo.at(x).at(y) = true;
  search(island, memo, x - 1, y);
  search(island, memo, x + 1, y);
  search(island, memo, x, y + 1);
  search(island, memo, x, y - 1);
}

bool is_valid_island(int x, int y) {
  vector<string> provided_island = provide_island(island, x, y);
  vector<vector<bool>> provided_memo = provide_memo(memo, x, y);
  search(provided_island, provided_memo, x, y);
  bool is_valid = true;
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      if (!provided_memo.at(i).at(j)) {
        is_valid = false;
        break;
      }
    }
    if (!is_valid) break;
  }
  return is_valid;
}

int main() {
  for (int i = 0; i < 10; i++) {
    cin >> island.at(i);
  }
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      if (island.at(i).at(j) == 'o') {
        memo.at(i).at(j) = false;
      }
    }
  }
  bool ok = false;
  string ans = "NO";
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      if (island.at(i).at(j) == 'x' && is_valid_island(i, j)) {
        ok = true;
        ans = "YES";
        break;
      }
    }
    if (ok) break;
  }
  cout << ans << endl;
}
