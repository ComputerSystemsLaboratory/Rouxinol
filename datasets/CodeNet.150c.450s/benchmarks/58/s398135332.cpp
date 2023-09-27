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
// Virtual_Judge —— Stack Aizu - ALDS1_3_A.cpp created by VB_KoKing on 2019,04,28,22.
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
#include <cstdio>
#include <cstdlib>
#include <cstring>
using namespace std;

int top=0,S[1000];

void push(int x)
{
    //top+1之后将元素插入top所指的位置
    S[++top]=x;
}

int pop()
{
    //返回top所指的元素
    top--;
    return S[top+1];
}

int main()
{
    int a,b;
    char s[100];

    while (scanf("%s",s)!=EOF)
    {
//        if (s[0]=='+')
//        {
//            a=pop();b=pop();
//            push(a+b);
//        }
//        else if (s[0]=='-')
//        {
//            b=pop();a=pop();
//            push(a-b);
//        }
//        else if (s[0]=='*')
//        {
//            a=pop();b=pop();
//            push(a*b);
//        }
//        else push(atoi(s));
        switch (s[0])
        {
            case '+':a=pop();b=pop();push(a+b);break;
            case '-':b=pop();a=pop();push(a-b);break;
            case '*':a=pop();b=pop();push(a*b);break;
            default:push(atoi(s));break;
        }
    }
    printf("%d\n",pop());
    return 0;
}
