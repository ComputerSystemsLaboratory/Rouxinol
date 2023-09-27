#include<cstdio>
#include<iostream>
#include<algorithm>
#include<utility>
#include<vector>
#include<queue>
#include<functional>
#include<map>
#include<set>
#include<cstring>
#include<string>
#include<stack>
#include<math.h>
#include<stdlib.h>
using namespace std;
//#define int long long
typedef pair<int, int> pii;
typedef pair<double, double> pdd;
typedef pair<int, char> pic;
typedef priority_queue<pii, vector<pii>, greater<pii> > RPQ;
#define mk make_pair
#define INF (1 << 30)
#define INFL (1ll << 60ll)
#define mod 1000000007

int A[4000100];
int N;
char q[20];

void Delete(int v){
    if(v > N)return;
    int l = v * 2;
    int r = v * 2 + 1;
    if(A[l] > A[r]){
        A[v] = A[l];
        Delete(l);
    }
    else {
        A[v] = A[r];
        Delete(r);
    }
}

void extract(){
    printf("%d\n", A[1]);
    Delete(1);
}

void insert(int v){
    int par = v / 2;
    if(par < 1)return;
    if(A[par] < A[v]){
        swap(A[par], A[v]);
        insert(par);
    }
}

signed main(){
    memset(A, -1, sizeof(A));
    while(1){
        cin >> q;
        if(q[0] == 'i'){
           int val;
            cin >> val;
            N++;
            A[N] = val;
            insert(N);
        }
        else if(q[1] == 'x'){
            extract();
        }
        else {
            break;
        }
    }


    return 0;
}

/*

*/
