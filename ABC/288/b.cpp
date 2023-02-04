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
  vector<string> S(K);
  rep(i, K) { cin >> S.at(i); }
  sort(S.begin(), S.end());
  rep(i, K) { cout << S.at(i) << endl; }

  return 0;
}
