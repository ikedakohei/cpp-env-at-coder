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
  int n;
  cin >> n;
  vector<int> a(n - 1), b(n - 2), db(n);
  rep(i, n - 1) cin >> a[i];
  rep(i, n - 2) cin >> b[i];

  db[0] = 0;
  db[1] = a[0];
  for (int i = 2; i < n; i++) {
    db[i] = min(db[i - 1] + a[i - 1], db[i - 2] + b[i - 2]);
  }

  cout << db[n - 1] << endl;
}
