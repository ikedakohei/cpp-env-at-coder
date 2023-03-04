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
  int n, q;
  cin >> n >> q;

  vector<int> a(n + 1, 0);

  rep(i, q) {
    int x, b;
    cin >> b >> x;
    if (b == 1) a[x] += 1;
    if (b == 2) a[x] += 2;
    if (b == 3) {
      if (a[x] >= 2)
        cout << "Yes" << endl;
      else
        cout << "No" << endl;
    }
  }
}
