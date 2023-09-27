#include<iostream>
#include<cstdio>
#include<queue>
#include<stack>
#include<map>
#include<set>
#include<cstring>
#include<string>
#include<cmath>
#include<list>
#include<algorithm>
using namespace std;
#define inf 0x3f3f3f3f
typedef long long ll;
const int maxn = 100000 + 8;

int n,a[maxn];
int Partition(int a[],int p,int r)
{
    int last_element = a[r];
    int i = p-1;
    for(int j = p; j < r; ++j)
    {
        if(a[j] <= last_element)
        {
            i++;
            swap(a[i],a[j]);
        }
    }
    swap(a[i+1],a[r]);
    return i+1;
}
int main()
{
    scanf("%d",&n);
    fill(a,a+n,0);
    for(int i = 0; i < n; ++i)
    {
        scanf("%d",&a[i]);
    }
    int pos = Partition(a,0,n-1);
    for(int i = 0;i < n; ++i){
        if(i == pos) printf("");
        printf("%s%s%d%s", i==0?"":" ",i == pos?"[":"",a[i],i == pos?"]":"");
    }
    printf("\n");
    return 0;
}



















///*
//const int maxn = 1e5 + 8;
//
//int n,k,w[maxn];
//
//int check(ll P)
//{
//    for(int i = 0; i < n; ++i){
//
//    }
//}
//ll BinarySearch()
//{
//    ll left = 0;
//    ll right = maxn * maxn;
//    while(left <= right)
//    {
//        ll mid = (left + right) / 2;
//        int r = check(mid);
//        if(r >= n)  ;
//        else ;
//    }
//    return right;
//}
//int main()
//{
//    scanf("%d%d",&n,&k);
//    fill(w,w+n,0);
//    for(int i = 0; i < n; ++i) scanf("%d",&w[i]);
//    ll ans = BinarySearch();
//}
//
/*
#include <iostream>
#include <deque>
#include <string>
#include <vector>
#include <queue>
#include <cstdio>
#include <stack>
#include <algorithm>
#include <cstring>
#include <cctype>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <iomanip>

using namespace std;

int tile = 0;
int Board[8][8];

void ChessBoard(int tr,int tc,int dr,int dc,int size){
    if(size == 1)return ;
    int t = tile++;
    int s = size / 2;
    if(dr < tr + s && dc < tc + s){
        ChessBoard(tr,tc,dr,dc,s);
    }
    else{
        Board[tr + s - 1][tc + s - 1] = t;
        ChessBoard(tr,tc,tr + s - 1, tc + s - 1,s);
    }

    if(dr < tr + s && dc >= tc + s){
        ChessBoard(tr,tc + s,dr,dc,s);
    }
    else{
        Board[tr + s - 1][tc + s] = t;
        ChessBoard(tr,tc+s,tr + s - 1, tc + s,s);
    }

    if(dr >= tr + s && dc < tc + s){
        ChessBoard(tr+s,tc,dr,dc,s);
    }
    else{
        Board[tr + s][tc + s - 1] = t;
        ChessBoard(tr+s,tc,tr + s, tc + s - 1,s);
    }

    if(dr >= tr + s && dc >= tc + s){
        ChessBoard(tr+s,tc+s,dr,dc,s);
    }
    else{
        Board[tr + s][tc + s] = t;
        ChessBoard(tr+s,tc+s,tr + s, tc + s,s);
    }

}

void Print(){
    for (int i = 0; i < 8; ++i) {
        for (int j = 0; j < 8; ++j) {
            cout << setw(3) << Board[i][j];
        }
        cout << endl;
    }
    cout << endl;
}

int main(){
    memset(Board,0,sizeof Board);
    ChessBoard(0,0,0,1,8);
    Print();
}
*/