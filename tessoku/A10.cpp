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
  int N, D;
  cin >> N;
  vector<int> A(N + 2, 0), Q(N + 2, 0), P(N + 2, 0);
  rep1(i, N) { cin >> A.at(i); }
  cin >> D;
  vector<int> L(D + 2, 0), R(D + 2, 0);
  rep(i, D) { cin >> L.at(i) >> R.at(i); }

  for (int i = 1; i <= N; i++) {
    Q.at(i) = max(Q.at(i - 1), A.at(i));
  }

  for (int i = N; i >= 1; i--) {
    P.at(i) = max(P.at(i + 1), A.at(i));
  }

  rep(i, D) { cout << max(Q.at(L.at(i) - 1), P.at(R.at(i) + 1)) << endl; }
}
