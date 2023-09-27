#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <cctype>

#include <iostream>
#include <vector>
#include <deque>
#include <queue>
#include <map>
#include <algorithm>

using namespace std;

#define rep(i, n) for(int i = 0; i < n; i++)
#define repi(i,l,n) for(int (i)=(int)(l);(i)<(int)(n);(i)++)
#define d_arr(arr, h, w) rep(i,(h) ){ cout << "["; rep(j,(w) ) { cout << (arr)[i][j] << ", "; } cout << "]" << endl;}

typedef pair<int ,int> P;

/*
1: . , ! ? (スペース)
2: a b c
3: d e f
4: g h i
5: j k l
6: m n o
7: p q r s
8: t u v
9: w x y z
0: 確定ボタン
 */

string a[]   = {".,!? ",
                "abc",
                "def",
                "ghi",
                "jkl",
                "mno",
                "pqrs",
                "tuv",
                "wxyz"};


int main()
{
    int n;
    int index;
    int count=0;
    string s;
    int loop;
    cin >> loop;
    rep(i, loop)
    {
        string s;
        cin >> s;
        rep(j, s.size() )
        {
            string st;
            st[0] = s[j];
            n = atoi( &st[0] );
            if( n == 0 && count == 0) { continue; }
            else if( n == 0 ) 
            { 
                cout << a[index - 1][(count - 1) % a[index - 1].size() ];  
                count = 0;
            }
            else
            {
                index = n;
                count++;
            }
        }
        cout << endl;
    }
    //if ( count > 0 ) { cout << a[index - 1][(count - 1) % 9]; count = 0; }
}