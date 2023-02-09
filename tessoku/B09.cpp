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
  int N;
  cin >> N;
  vector<int> A(N + 2), B(N + 2), C(N + 2), D(N + 2);
  rep1(i, N) cin >> A.at(i) >> B.at(i) >> C.at(i) >> D.at(i);

  vector<vector<int>> XY(1502, vector<int>(1502, 0));

  rep1(i, N) {
    XY.at(A.at(i)).at(B.at(i))++;
    XY.at(C.at(i)).at(D.at(i))++;
    XY.at(A.at(i)).at(D.at(i))--;
    XY.at(C.at(i)).at(B.at(i))--;
  }

  rep(i, 1500) {
    rep(j, 1500) { XY.at(i).at(j + 1) += XY.at(i).at(j); }
  }

  rep(j, 1500) {
    rep(i, 1500) { XY.at(i + 1).at(j) += XY.at(i).at(j); }
  }

  int area = 0;
  rep(i, 1500) {
    rep(j, 1500) {
      if (XY.at(i).at(j) >= 1) area++;
    }
  }

  cout << area << endl;
}
