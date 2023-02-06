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
  string N;
  cin >> N;

  int answer = 0;
  rep(i, N.size()) {
    if (N.at(i) == '1') {
      answer += (1 << (N.size() - i - 1));
    }
  }
  cout << answer << endl;
}
