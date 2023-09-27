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
        ^            ^.              ^ 1                00   ^0000^     ^               01
     1 0             ^.               00.0^              ^00000   1.00.1              11
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
// Virtual_Judge —— Selection Sort Aizu - ALDS1_2_B .cpp created by VB_KoKing on 2019,04,28,18.
/* Procedural objectives：

 Variables required by the program:

 Procedural thinking：

 Functions required by the program:

*/
/* My dear Max said：
"I like you,
So the first bunch of sunshine I saw in the morning is you,
The first hurricane that passed through your ear is you,
The first star you see is also you.
The world I see is all your shadow."

FIGHTING FOR OUR FUTURE！！！
*/
#include <iostream>
#include <cstring>

using namespace std;
int ans = 0, array[100],mini;

void BubbleSort(int A[], int n) {
    for (int i = 0; i < n; i++) {
        mini=i;
        for (int j = i; j < n; j++) {
            if (A[j]<A[mini])
                mini = j;
        }
        swap(A[i],A[mini]);
        if (i!=mini) ans++;
    }
}

int main() {
    int n;
    cin >> n;
    memset(array, 0, sizeof(array));
    for (int i = 0; i < n; i++)
        cin >> array[i];
    BubbleSort(array, n);
    for (int i = 0; i < n; i++) {
        cout << array[i];
        if (i != n - 1) cout << ' ';
    }
    cout << endl << ans << endl;
    return 0;
}
