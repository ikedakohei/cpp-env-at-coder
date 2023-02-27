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
  vector<int> x(n * 5);
  rep(i, n * 5) cin >> x[i];
  sort(x.begin(), x.end());
  int sum = 0;
  for (int i = n; i < n * 4; i++) sum += x[i];
  double ans = (double)sum / (n * 3);
  printf("%.10f\n", ans);
}
