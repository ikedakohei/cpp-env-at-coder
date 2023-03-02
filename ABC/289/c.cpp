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
  vector<int> s(m);
  rep(i, m) {
    int c;
    cin >> c;
    rep(j, c) {
      int a;
      cin >> a;
      a--;
      s[i] |= 1 << a;
    }
  }

  int ans = 0;
  rep(i, 1 << m) {
    int t = 0;
    rep(j, m) if (i >> j & 1) t |= s[j];
    if (t == (1 << n) - 1) ans++;
  }

  cout << ans << endl;
}
