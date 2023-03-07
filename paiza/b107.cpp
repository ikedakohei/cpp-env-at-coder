#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
using ll = long long;
using P = pair<int, int>;
using Graph = vector<vector<int>>;

int main() {
  int n, m, k, x;
  cin >> n >> m >> k;
  vector<int> a(n + 1, 0);
  rep(i, n) a[i] = i + 1;

  if (n % m == 0)
    x = n / m;
  else
    x = (n / m) + 1;

  vector<vector<int>> b(x, vector<int>(m, 0));

  rep(i, k) {
    rep(i, b.size()) {
      rep(j, m) {
        if (i * m + j < n)
          b[i][j] = a[i * m + j];
        else
          b[i][j] = 0;
      }
    }

    reverse(b.begin(), b.end());

    int k = 0;
    rep(i, b.size()) {
      rep(j, m) {
        if (b[i][j] != 0) {
          a[k] = b[i][j];
          k++;
        }
      }
    }
  }

  rep(i, n) cout << a[i] << endl;
}
