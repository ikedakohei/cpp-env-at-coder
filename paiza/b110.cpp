#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
using ll = long long;
using P = pair<int, int>;
using Graph = vector<vector<int>>;

int main() {
  int h, w;
  cin >> h >> w;
  vector<vector<int>> a1(h * 2, vector<int>(w * 2, 0));
  vector<vector<int>> a2(h * 2, vector<int>(w * 2, 0));
  vector<vector<int>> a3(h * 2, vector<int>(w * 2, 0));

  rep(i, h) {
    rep(j, w) {
      int x;
      cin >> x;
      a1[i * 2][j * 2] = x;
      a1[i * 2][j * 2 + 1] = x;
      a1[i * 2 + 1][j * 2] = x;
      a1[i * 2 + 1][j * 2 + 1] = x;
    }
  }
  rep(i, h) {
    rep(j, w) {
      int x;
      cin >> x;
      a2[i * 2][j * 2] = x;
      a2[i * 2][j * 2 + 1] = x;
      a2[i * 2 + 1][j * 2] = x;
      a2[i * 2 + 1][j * 2 + 1] = x;
    }
  }

  rep(i, h * 2 - 1) {
    rep(j, w * 2 - 1) { a3[i][j] = (a1[i + 1][j + 1] + a2[i][j]) / 2; }
  }

  rep(i, h * 2 - 1) {
    rep(j, w * 2 - 1) {
      if (j != 0) cout << " ";
      cout << a3[i][j];
    }
    cout << endl;
  }
}
