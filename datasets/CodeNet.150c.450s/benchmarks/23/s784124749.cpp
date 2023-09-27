// DP(???????¨??????? Dynamic Programing)
// ????????±???????????¢???
// ?????£??????????????°???
// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_10_A

#include <iostream>
using namespace std;

#define MAX_N 44

struct memo{
    int num;
    bool flg;
}Memo[MAX_N+1];

int n;
int fib(int);

int main()
{
    cin >> n;
    for(int i=0;i<MAX_N+1;++i)
        Memo[i].flg=false;
    cout << fib(n) << endl;
    return 0;
}

int fib(int m){
    if(m == 0){
        if(!Memo[0].flg){
        Memo[0].num=1;
        Memo[0].flg=true;
        }
        return 1;
    }
    if(m == 1){
        if(!Memo[1].flg){
        Memo[1].num=2;
        Memo[1].flg=true;
        }
        return 1;
    }

    if(Memo[m].flg){
        return Memo[m].num;
    }
    else{
        Memo[m].num=fib(m-1) + fib(m-2);
        Memo[m].flg=true;
        return fib(m-1) + fib(m-2);
    }
}