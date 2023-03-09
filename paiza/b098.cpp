#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
using ll = long long;
using P = pair<int, int>;
using Graph = vector<vector<int>>;

int main() {
  int n, m, t, k;
  cin >> n >> m >> t >> k;
  vector<vector<int>> a(n, vector<int>(m, 0));

  rep(i, m) { rep(j, n) cin >> a[j][i]; }

  rep(i, n) {
    string s = "no";
    int time = 0;

    for (int j = 0; j <= m - t; j++) {
      bool is_break = false;
      int count = 0;

      for (int l = j; l < j + t; l++) {
        count += a[i][l];

        if (count >= k) {
          s = "yes";
          time = l + 1;
          is_break = true;
          break;
        }
      }

      if (is_break) break;
    }

    cout << s << " " << time << endl;
  }
}
