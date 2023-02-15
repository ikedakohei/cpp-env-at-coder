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
  vector<int> A(N + 1);
  rep1(i, N) cin >> A[i];
  cin >> Q;
  vector<int> X(Q + 1);
  rep1(i, Q) cin >> X[i];

  sort(A.begin() + 1, A.end());

  rep1(i, Q) {
    int L = 1, R = N;

    while (L <= R) {
      int M = (L + R) / 2;

      if (X[i] > A[M]) L = M + 1;
      if (X[i] < A[M]) R = M - 1;

      if (X[i] == A[M]) {
        cout << M - 1 << endl;
        break;
      }

      if (L > R) {
        cout << L - 1 << endl;
        break;
      }
    }
  }
}
