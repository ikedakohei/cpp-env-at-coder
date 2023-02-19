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
  int N, K;
  cin >> N >> K;
  vector<int> A(N);
  rep(i, N) cin >> A[i];

  sort(A.begin(), A.end());
  vector<int> B(K, 0);

  rep(i, K) {
    if (binary_search(A.begin(), A.end(), i)) {
      B[i]++;
    }
  }

  rep(i, K + 1) {
    if (B[i] == 0) {
      cout << i << endl;
      break;
    }
  }
}
