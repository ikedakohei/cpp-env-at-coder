#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
using ll = long long;
using P = pair<int, int>;
using Graph = vector<vector<int>>;

int main() {
  int n, h, w, p, q, mnh = 0;
  bool is_break = false;
  cin >> n >> h >> w >> p >> q;
  vector<vector<int>> a(h, vector<int>(w, 0));

  rep(i, n) {
    int y, x;
    cin >> y >> x;
    a[y][x] += 1;
  }

  int max_y = max(h - 1 - p, p);
  int max_x = max(w - 1 - q, q);
  int max_mnh = max_y + max_x;

  rep(i, max_mnh) {
    if (is_break) break;
    rep(j, h) {
      if (is_break) break;
      rep(k, w) {
        if (a[j][k] == 0 && abs(p - j) + abs(q - k) == i) {
          mnh = i;
          is_break = true;
          break;
        }
      }
    }
  }

  rep(j, h) {
    rep(k, w) {
      if (a[j][k] == 0 && abs(p - j) + abs(q - k) == mnh) {
        cout << j << ' ' << k << endl;
      }
    }
  }
}
