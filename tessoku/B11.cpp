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
  vector<int> A(N, 0);
  rep(i, N) cin >> A.at(i);
  cin >> Q;
  vector<int> X(Q, 0);
  rep(i, Q) cin >> X.at(i);

  sort(A.begin(), A.end());

  rep(i, Q) {
    auto it = lower_bound(A.begin(), A.end(), X.at(i));
    int answer = it - A.begin();

    cout << answer << endl;
  }
}
