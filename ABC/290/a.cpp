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
  int N, M;
  cin >> N >> M;
  vector<int> A(N + 1), B(M + 1);
  rep1(i, N) cin >> A[i];
  rep1(i, M) cin >> B[i];

  int S = 0;
  rep1(i, M) { S += A[B[i]]; }

  cout << S << endl;
}
