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
  vector<int> A(N + 1, 0), wins(N + 1, 0), loses(N + 1, 0);
  rep1(i, N) cin >> A.at(i);
  cin >> Q;
  vector<int> L(Q + 1, 0), R(Q + 1, 0);
  rep1(i, Q) cin >> L.at(i) >> R.at(i);

  rep1(i, N) {
    wins.at(i) = wins.at(i - 1);
    if (A.at(i) == 1) wins.at(i)++;
    loses.at(i) = loses[i - 1];
    if (A.at(i) == 0) loses.at(i)++;
  }

  rep1(i, Q) {
    int win_count = wins.at(R.at(i)) - wins.at(L.at(i) - 1);
    int lose_count = loses.at(R.at(i)) - loses.at(L.at(i) - 1);

    if (win_count > lose_count)
      cout << "win" << endl;
    else if (win_count == lose_count)
      cout << "draw" << endl;
    else
      cout << "lose" << endl;
  }
}
