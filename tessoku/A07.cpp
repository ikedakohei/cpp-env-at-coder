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
  int D, N;
  cin >> D >> N;
  vector<int> numbers(D + 2, 0), L(N + 1, 0), R(N + 1, 0);
  rep1(i, N) cin >> L.at(i) >> R.at(i);

  rep1(i, N) {
    numbers[L.at(i)]++;
    numbers[R.at(i) + 1]--;
  }

  rep1(i, D) numbers.at(i) += numbers.at(i - 1);
  rep1(i, D) cout << numbers.at(i) << endl;
}
