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
  int H, W, Q;
  cin >> H >> W;
  vector<vector<int>> X(H + 2, vector<int>(W + 2, 0));

  rep1(i, H) {
    rep1(j, W) { cin >> X.at(i).at(j); }
  }

  cin >> Q;
  vector<int> A(Q + 1), B(Q + 1), C(Q + 1), D(Q + 1);
  rep1(i, Q) cin >> A.at(i) >> B.at(i) >> C.at(i) >> D.at(i);

  rep1(i, H) {
    rep1(j, W) { X.at(i).at(j) += X.at(i).at(j - 1); }
  }

  rep1(j, W) {
    rep1(i, H) { X.at(i).at(j) += X.at(i - 1).at(j); }
  }

  rep1(i, Q) {
    cout << X.at(C.at(i)).at(D.at(i)) + X.at(A.at(i) - 1).at(B.at(i) - 1) -
                X.at(C.at(i)).at(B.at(i) - 1) - X.at(A.at(i) - 1).at(D.at(i))
         << endl;
  }
}
