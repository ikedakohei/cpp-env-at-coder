#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
using ll = long long;
using P = pair<int, int>;
using Graph = vector<vector<int>>;

int main() {
  int n, m, h, w;
  cin >> n >> m >> h >> w;
  vector<vector<int>> x(n, vector<int>(5, 0));
  vector<vector<int>> y(h, vector<int>(w, 0));
  vector<int> z(m + 1, 0);
  rep(i, n) rep(j, 5) cin >> x[i][j];

  rep(i, n) {
    int a = x[i][0] - 1;
    int b = x[i][1] - 1;
    int c = x[i][2] - 1;
    int d = x[i][3] - 1;
    int e = x[i][4];

    for (int i = a; i <= b; i++) {
      for (int j = c; j <= d; j++) {
        if (y[i][j] != 0) {
          z[y[i][j]]++;
        }
        y[i][j] = e;
      }
    }
  }

  rep1(i, m) cout << z[i] << endl;

  rep(i, h) {
    rep(j, w) {
      if (y[i][j] != 0)
        cout << y[i][j];
      else
        cout << '.';
    }
    cout << endl;
  }
}
