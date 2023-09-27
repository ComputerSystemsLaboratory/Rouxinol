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

typedef pair<int ,int> P;


int main()
{

// N A B C X
// Y1 Y2 ... YN
    int N,A,B,C,X;
    while(cin >> N >> A >> B >> C >> X )
    {
        if( N == 0 && A==0 && B==0 && C==0 && X==0 ) { break;}
        deque<int> deq;
        int tmp;
        rep(i,N) { cin >> tmp; deq.push_back(tmp); }

        int count = 0;

        int x = X;
        while ( !( deq.empty() ) )
        {
            if( x == deq.front() )
            {
                deq.pop_front();
            }
            x = (A*x + B)%C;
            count++;
            if(count > 10001){break;}
        }
        if(count >10001 ){ cout << -1 <<endl;}
        else { cout << count-1 << endl; }
    }
    return 0;
}