#include <iostream>
using namespace std;

int main() {
  int N, L[10], R[10];
  int D, B[10];
  int Answer[10];
  // 入力
  cin >> D >> N;
  for (int i = 1; i <= N; i++) cin >> L[i] >> R[i];

  // 前日比に加算
  for (int i = 1; i <= N; i++) {
    B[L[i]] += 1;
    B[R[i] + 1] -= 1;
  }

  // 累積和をとる → 出力
  Answer[0] = 0;
  for (int d = 1; d <= D; d++) Answer[d] = Answer[d - 1] + B[d];
  for (int d = 1; d <= D; d++) cout << Answer[d] << endl;
  return 0;
}
