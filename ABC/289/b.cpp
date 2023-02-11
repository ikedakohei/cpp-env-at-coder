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

  vector<int> a(M);
  rep(i, M) { cin >> a[i]; }

  vector<int> re(N + 1, 0);
  rep(i, M) { re[a[i]] = 1; }

  vector<int> ans;
  int L = 1;

  rep1(i, N) {
    if (re[i] == 0) {
      for (int j = i; j >= L; j--) {
        ans.push_back(j);
      }

      L = i + 1;
    }
  }

  rep(i, N) {
    if (i > 0) cout << " ";
    cout << ans[i];
  }

  cout << endl;
}
