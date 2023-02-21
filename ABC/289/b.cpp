#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
using ll = long long;
using P = pair<int, int>;
using Graph = vector<vector<int>>;
using mint = modint1000000007;

int main() {
  int n, m;
  cin >> n >> m;
  vector<bool> re(n + 1, false);

  rep(i, m) {
    int a;
    cin >> a;
    re[a] = true;
  }

  vector<int> b;
  rep(i, n + 1) if (!re[i]) b.push_back(i);

  vector<int> ans(n);
  rep(i, n) ans[i] = i + 1;
  rep(i, b.size() - 1) reverse(ans.begin() + b[i], ans.begin() + b[i + 1]);

  rep(i, n) {
    if (i != 0) cout << ' ';
    cout << ans[i];
  }

  cout << endl;
}
