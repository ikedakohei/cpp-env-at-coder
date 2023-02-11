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
  // 入力
  int N, K;
  cin >> N >> K;
  vector<int> A(N + 1);
  rep1(i, N) { cin >> A[i]; }

  // 二分探索
  // L は探索範囲の左端を、R は探索範囲の右端を表す
  int L = 1, R = 1000000000;
  while (L < R) {
    ll S = 0;
    int M = (L + R) / 2;

    // M 秒の時に、チラシが印刷される枚数 S を求めている
    rep1(i, N) S += M / A[i];

    if (S >= K)   // チラシが印刷される枚数 S が K 枚以上の場合
      R = M;      // 答えが M 秒以下であることが分かる
    else          // チラシが印刷される枚数 S が K 枚より少ない場合
      L = M + 1;  // 答えが M + 1 秒以上であることが分かる
  }

  cout << L << endl;
}
