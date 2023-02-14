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
  vector<int> A(N + 1);
  rep1(i, N) cin >> A[i];

  int L = 1, R = N;

  while (true) {
    int M = (L + R) / 2;

    if (X > A[M]) L = M + 1;
    if (X < A[M]) R = M - 1;

    if (X == A[M]) {
      cout << M << endl;
      break;
    }
  }
}
