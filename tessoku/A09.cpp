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
  int H, W, N;
  cin >> H >> W >> N;
  vector<int> A(N + 2), B(N + 2), C(N + 2), D(N + 2);
  rep1(i, N) { cin >> A.at(i) >> B.at(i) >> C.at(i) >> D.at(i); }

  vector<vector<int>> HW(H + 2, vector<int>(W + 2, 0));

  rep1(i, N) {
    HW.at(A.at(i)).at(B.at(i))++;
    HW.at(C.at(i) + 1).at(D.at(i) + 1)++;
    HW.at(A.at(i)).at(D.at(i) + 1)--;
    HW.at(C.at(i) + 1).at(B.at(i))--;
  }

  rep1(i, H) {
    rep1(j, W) { HW.at(i).at(j) += HW.at(i).at(j - 1); }
  }
  rep1(j, W) {
    rep1(i, H) { HW.at(i).at(j) += HW.at(i - 1).at(j); }
  }

  rep1(i, H) {
    rep1(j, W) {
      if (j > 1) cout << " ";
      cout << HW.at(i).at(j);
    }
    cout << endl;
  }
}
