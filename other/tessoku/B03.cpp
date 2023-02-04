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
  int N;
  cin >> N;
  vector<int> A(N);

  rep(i, N) { cin >> A.at(i); }

  string answer = "No";

  rep(i, N) {
    rep(j, N) {
      rep(k, N) {
        if (i == j || i == k || j == k) {
          continue;
        }

        if (A.at(i) + A.at(j) + A.at(k) == 1000) {
          answer = "Yes";
          break;
        }
      }
    }
  }

  cout << answer << endl;
}
