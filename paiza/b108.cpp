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
  vector<int> a(n), b(m), ans(n, 0);
  rep(i, n) cin >> a[i];
  rep(i, m) cin >> b[i];

  int i = 0, j = 0;
  while (j < m) {
    if (a[i] >= b[j]) {
      ans[i] += b[j];
      j++;
    } else {
      ans[i] += a[i];
      b[j] -= a[i];
    }

    i++;
    if (i == n) i = 0;
  }

  rep(i, n) cout << ans[i] << endl;
}
