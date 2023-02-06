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
  int A, B;
  cin >> A >> B;
  string answer = "No";

  for (int i = A; i <= B; i++) {
    if (100 % i == 0) {
      answer = "Yes";
    }
  }
  cout << answer << endl;
}
