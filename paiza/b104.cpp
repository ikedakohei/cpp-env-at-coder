#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
using ll = long long;
using P = pair<int, int>;
using Graph = vector<vector<int>>;

bool isNumeric(std::string const &str) {
  auto it = std::find_if(str.begin(), str.end(), [](char const &c) { return !std::isdigit(c); });

  return !str.empty() && it == str.end();
}

int main() {
  int n, m;
  cin >> n >> m;
  vector<vector<int>> a(n, vector<int>(m, -1));
  vector<int> ans;

  rep(i, n) {
    rep(j, m) {
      string s;
      cin >> s;
      if (isNumeric(s)) a[i][j] = atoi(s.c_str());
    }
  }

  rep(j, m) {
    int num = 0;
    int sum = 0;
    rep(i, n) {
      if (0 <= a[i][j] && a[i][j] <= 100) {
        num++;
        sum += a[i][j];
      }
    }
    if (sum == 0)
      cout << 0 << endl;
    else
      cout << sum / num << endl;
  }
}
