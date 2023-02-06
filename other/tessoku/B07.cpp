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
  int T, N;
  cin >> T >> N;
  vector<int> L(N + 2, 0), R(N + 2, 0), answer(T + 2, 0);
  rep(i, N) cin >> L.at(i) >> R.at(i);

  rep(i, N) {
    answer.at(L.at(i))++;
    answer.at(R.at(i))--;
  }

  for (int i = 1; i < T; i++) {
    answer.at(i) += answer.at(i - 1);
  }
  rep(i, T) cout << answer.at(i) << endl;
}
