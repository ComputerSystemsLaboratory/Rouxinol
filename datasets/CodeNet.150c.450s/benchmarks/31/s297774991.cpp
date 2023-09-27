/*
                                ^....0
                               ^ .1 ^1^
                               ..     01
                              1.^     1.0
                             ^ 1  ^    ^0.1
                             1 ^        ^..^
                             0.           ^ 0^
                             .0            1 .^
                             .1             ^0 .........001^
                             .1               1. .111100....01^
                             00             ^   11^        ^1. .1^
                             1.^                              ^0  0^
                               .^                                 ^0..1
                               .1                                   1..^
                             1 .0                                     ^  ^
                            ^ 00.                                     ^^0.^
                             1 ^ 0                                     ^^110.^
                           0.   0 ^                                    ^^^10.01
                   ^^     010^   1 1                                   ^^^1110.1
                   0001  10 0   ^ 1.1                                   ^^^1111110
                   0^ 10 . 01   ^^  ^^                                   ^^^1111^1.^           ^^^
                   10  10^ 0^                                             ^^111^^^0.1^       1....^
                    11     0                                               ^^11^^^ 0..  ....1^   ^ ^
                    1.     0^                                               ^11^^^ ^ 1 111^     ^ 0.
                   10   00 11                                               ^^^^^   1 0           1.
                   0^  ^0  ^0                                                ^^^^    0            0.
                   0^  1.0  .^                                               ^^^^    1 1          .0
                   ^.^  ^^  0^                             ^1                ^^^^     0.         ^.1
                   1 ^      11                             1.                ^^^     ^ ^        ..^
                  ^..^      ^1                             ^.^               ^^^       .0       ^.0
                  0..^      ^0                              01               ^^^       ..      0..^
                 1 ..        .1                             ^.^              ^^^       1 ^  ^0001
                ^  1.        00                              0.             ^^^        ^.0 ^.1
                . 0^.        ^.^                             ^.^            ^^^         ..0.0
               1 .^^.         .^                  1001        ^^            ^^^         . 1^
               . ^ ^.         11                0.    1         ^           ^^          0.
                0  ^.          0              ^0       1                   ^^^          0.
              0.^  1.          0^             0       .1                   ^^^          ..
              .1   1.          00            .        .1                  ^^^           ..
             1      1.         ^.           0         .^                  ^^            ..
             0.     1.          .^          .         0                                  .
             .1     1.          01          .        .                                 ^ 0
            ^.^     00          ^0          1.       ^                                 1 1
            .0      00           .            ^^^^^^                                   .
            .^      00           01                                                    ..
           1.       00           10                                                   1 ^
          ^.1       00           ^.                                            ^^^    .1
          ..        00            .1                                        1..01    ..
         1.1         00           1.                                       ..^      10
        ^ 1^         00           ^.1                                      0 1      1
        .1           00            00                                       ^  1   ^
         .           00            ^.^                                        10^  ^^
       1.1           00             00                                              10^
       ..^           1.             ^.                                               1.
      0 1            ^.              00                 00                            .^
        ^            ^.              ^ 1                00   ^0000^     0               01
     1 0             ^.               00.0^              ^1.0.1   1.00.1              11
     . 1              0               1^^0.01                      ^^^                01
      .^              ^                1   1^^                                       ^.^
    1 1                                                                              0.
    ..                                                                              1 ^
     1                                                                               1
   ^ ^                                                                             .0
   1                                                                             ^ 1
   ..                                                          1.1            ^0.0
  ^ 0                                                           1..01^^100000..0^
  1 1                                                            ^ 1 ^^1111^ ^^
  0 ^                                                             ^ 1      1000^
  .1                                                               ^.^     .   00
  ..                                                                1.1    0.   0
  1.                                                                  .    1.   .^
  1.                                                                 1    1.   ^0
 ^ .                                                                 ^.1 00    01
 ^.0                                                                  001.     .^
 */
// Virtual_Judge —— Maximum Profit Aizu - ALDS1_1_D.cpp created by VB_KoKing on 2019,04,24,19.
/* Procedural objectives：

 Procedural thinking：
 在下标自增的过程中，将现阶段rt最小值保存下来。
 Functions required by the program:

 Variables required by the program:

*/
/* My dear Max said：
"I like you,
So the first bunch of sunshine I saw in the morning is you,
The first hurricane that passed through your ear is you,
The first star you see is also you.
The world I see is all your shadow."

FIGHTING FOR OUR FUTURE！！！
*/
#include <set>
#include <map>
#include <list>
#include <deque>
#include <stack>
#include <queue>
#include <cmath>
#include <cstdio>
#include <string>
#include <vector>
#include <cctype>
#include <sstream>
#include <complex>
#include <cstring>
#include <cstdlib>
#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int rt[200000];
    memset(rt,0, sizeof(rt));

    for (int i = 0; i < n; ++i) {
        cin >> rt[i];
    }

    int maxv=-2000000000,minv=rt[0];
    for (int i = 1; i < n; i++) {       
        maxv=max(maxv,rt[i]-minv);      //更新最大值
        minv=min(minv,rt[i]);           //暂存现阶段的最小值
    }
    
    cout<<maxv<<endl;

    return 0;
}
