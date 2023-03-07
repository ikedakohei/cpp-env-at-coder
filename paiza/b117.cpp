#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
using ll = long long;
using P = pair<int, int>;
using Graph = vector<vector<int>>;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];

  int ans = 0;

  int min_a_index = min_element(a.begin(), a.end()) - a.begin();
  int max_a_index = max_element(a.begin(), a.end()) - a.begin();

  if (min_a_index == max_a_index) {
    cout << 0 << endl;
    return 0;
  }

  while (a.size() >= 2) {
    if (min_a_index == 0) {
      a.erase(a.begin() + min_a_index);
      min_a_index = min_element(a.begin(), a.end()) - a.begin();
      max_a_index = max_element(a.begin(), a.end()) - a.begin();
      continue;
    }

    if (max_a_index == 0) {
      ans++;
    }

    vector<int> c = a;
    a[0] = c[1];
    a[a.size() - 1] = c[0];

    for (int i = 1; i < a.size() - 1; i++) {
      a[i] = c[i + 1];
    }

    min_a_index = min_element(a.begin(), a.end()) - a.begin();
    max_a_index = max_element(a.begin(), a.end()) - a.begin();
  }

  cout << ans << endl;
}
