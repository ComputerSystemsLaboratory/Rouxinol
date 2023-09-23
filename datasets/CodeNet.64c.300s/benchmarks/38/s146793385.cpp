/*
 * AOJ 0033: Ball
 * 题意：序号为1-10的10个球，按一定排列顺序进入2个队列之一，最终每队入队球的序号都为增序的方案是否存在。
 * 类型：贪心
 * 算法：对于每个球，若大于队列顶端元素，则可以记录该情况并继续递归。每次优先加入左边，可保证左边的顶端元素大于右边。
 */

#include <iostream>

using namespace std;

int balls[10];

int main() {
  //每次就先看左边能不能放，能放就放入，否则再看右边，右边也不能放，则不存在方案
  int n;
  cin >> n;
  while (n--) {
    for (int i = 0; i < 10; i++) cin >> balls[i];
    int l = 0, r = 0;
    bool flag = true;
    for (int i = 0; i < 10; i++) {
      if (balls[i] > l) {
        l = balls[i];
      } else if (balls[i] > r) {
        r = balls[i];
      } else {
        flag = false;
        break;
      }
    }
    if (flag) cout << "YES" << endl;
    else cout << "NO" << endl;
  }
}



// int a[10];


// int main() {
//   int T;
//   scanf("%d", &T);
//   while (T--) {
//     bool ans = true;
//     for (int i = 0; i < 10; ++i) {
//       scanf("%d", &a[i]);
//     }
//     int l, r;
//     l = r = 0;
//     for (int i = 0; i < 10; ++i) {
//       if (a[i] > l) {
//         l = a[i];
//       } else if (a[i] > r) {
//         r = a[i];
//       } else {
//         ans = false;
//         break;
//       }
//     }
//     printf("%s\n", ans ? "YES" : "NO");
//   }
//   return 0;
// }

