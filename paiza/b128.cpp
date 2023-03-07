#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
using ll = long long;
using P = pair<int, int>;
using Graph = vector<vector<int>>;

int main() {
  string n;
  cin >> n;
  vector<vector<char>> a0(3, vector<char>(3, '.'));
  vector<vector<char>> a1(3, vector<char>(3, '.'));
  vector<vector<char>> a2(3, vector<char>(3, '.'));
  vector<vector<char>> a3(3, vector<char>(3, '.'));
  vector<vector<char>> a4(3, vector<char>(3, '.'));
  vector<vector<char>> a5(3, vector<char>(3, '.'));
  vector<vector<char>> a6(3, vector<char>(3, '.'));
  vector<vector<char>> a7(3, vector<char>(3, '.'));
  vector<vector<char>> a8(3, vector<char>(3, '.'));
  vector<vector<char>> a9(3, vector<char>(3, '#'));

  a1[0][0] = '#';
  a2[0][0] = '#';
  a2[0][1] = '#';
  a4[1][0] = '#';
  a5[1][0] = '#';
  a5[1][1] = '#';
  a7[2][0] = '#';
  a8[2][0] = '#';
  a8[2][1] = '#';

  rep(i, 3) {
    a3[0][i] = '#';
    a4[0][i] = '#';
    a5[0][i] = '#';
    a6[0][i] = '#';
    a7[0][i] = '#';
    a8[0][i] = '#';

    a6[1][i] = '#';
    a7[1][i] = '#';
    a8[1][i] = '#';
  }

  rep(i, n.size()) {
    rep(j, 3) {
      rep(k, 3) {
        if (n[(i / 3) * 3 + j] == '0') cout << a0[i % 3][k];
        if (n[(i / 3) * 3 + j] == '1') cout << a1[i % 3][k];
        if (n[(i / 3) * 3 + j] == '2') cout << a2[i % 3][k];
        if (n[(i / 3) * 3 + j] == '3') cout << a3[i % 3][k];
        if (n[(i / 3) * 3 + j] == '4') cout << a4[i % 3][k];
        if (n[(i / 3) * 3 + j] == '5') cout << a5[i % 3][k];
        if (n[(i / 3) * 3 + j] == '6') cout << a6[i % 3][k];
        if (n[(i / 3) * 3 + j] == '7') cout << a7[i % 3][k];
        if (n[(i / 3) * 3 + j] == '8') cout << a8[i % 3][k];
        if (n[(i / 3) * 3 + j] == '9') cout << a9[i % 3][k];
      }
    }
    cout << endl;
  }
}
