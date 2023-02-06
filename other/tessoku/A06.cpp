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
  cin >> N >> Q;
  vector<int> A(N + 1, 0), L(Q + 1, 0), R(Q + 1, 0);

  rep1(i, N) cin >> A.at(i);
  rep1(i, Q) cin >> L.at(i) >> R.at(i);

  rep1(i, N) A.at(i) += A.at(i - 1);

  rep1(i, Q) cout << A.at(R.at(i)) - A.at(L.at(i) - 1) << endl;
}
