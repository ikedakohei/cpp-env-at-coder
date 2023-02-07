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
  int N, Q;
  cin >> N;
  vector<int> X(N + 1), Y(N + 1);
  rep1(i, N) cin >> X.at(i) >> Y.at(i);
  cin >> Q;
  vector<int> a(Q + 1), b(Q + 1), c(Q + 1), d(Q + 1);
  rep1(i, Q) cin >> a.at(i) >> b.at(i) >> c.at(i) >> d.at(i);

  vector<vector<int>> XY(1501, vector<int>(1501, 0));

  rep1(i, N) { XY.at(X.at(i)).at(Y.at(i))++; }

  rep1(i, 1500) {
    rep1(j, 1500) { XY.at(i).at(j) += XY.at(i).at(j - 1); }
  }
  rep1(i, 1500) {
    rep1(j, 1500) { XY.at(i).at(j) += XY.at(i - 1).at(j); }
  }

  rep1(i, Q) {
    cout << XY.at(c.at(i)).at(d.at(i)) + XY.at(a.at(i) - 1).at(b.at(i) - 1) -
                XY.at(a.at(i) - 1).at(d.at(i)) - XY.at(c.at(i)).at(b.at(i) - 1)
         << endl;
  }
}
