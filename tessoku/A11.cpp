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
  int N, X;
  cin >> N >> X;
  vector<int> A(N);
  rep(i, N) cin >> A.at(i);

  auto it = lower_bound(A.begin(), A.end(), X);
  int index = it - A.begin();
  if (A[index] == X) cout << index + 1 << endl;
}
