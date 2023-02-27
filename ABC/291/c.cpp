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
  int n;
  cin >> n;
  string s;
  cin >> s;

  int x = 0, y = 0;
  set<P> st;
  st.insert(P(x, y));

  rep(i, n) {
    if (s[i] == 'R') x++;
    if (s[i] == 'L') x--;
    if (s[i] == 'U') y++;
    if (s[i] == 'D') y--;

    st.insert(P(x, y));
  }

  if (st.size() == n + 1)
    cout << "No" << endl;
  else
    cout << "Yes" << endl;
}
