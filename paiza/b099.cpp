#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
using ll = long long;
using P = pair<int, int>;
using Graph = vector<vector<int>>;

int main() {
  int n, m;
  cin >> n >> m;
  vector<vector<int>> a(n, vector<int>(n, 0));
  vector<int> ans;

  rep(i, n) { rep(j, n) cin >> a[i][j]; }

  rep(i, n) {
    bool is_ok = true;
    rep(j, n) {
      if (a[j][i] >= m) is_ok = false;
    }
    if (is_ok) ans.push_back(i + 1);
  }

  rep(i, ans.size()) {
    if (i != 0) cout << ' ';
    cout << ans[i];
  }

  if (ans.size() == 0) cout << "wait";

  cout << endl;
}
