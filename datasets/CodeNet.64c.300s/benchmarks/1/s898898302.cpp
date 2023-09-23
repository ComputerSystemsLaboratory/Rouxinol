#include <iostream>
#include <algorithm>
#include <stack>
#include <utility>
#include <queue>
#include <set>
#include <cmath>
#include <string>
#include <cstdio>
#include <vector>

#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define RFOR(i,a,b) for(int i=(b) - 1;i>=(a);i--)
#define REP(i,n) for(int i=0;i<(n);i++)
#define RREP(i,n) for(int i=n-1;i>=0;i--)

#define PB pash_back
#define INF INT_MAX/3
#define ALL(a) (a).begin(),(a).end()
#define CLR(a) memset(a,0,sizeof(a))

typedef long long int ll;

using namespace std;

int Partition(int A[],int p,int r){
    int x = A[r];
    int i = p-1;
    FOR(j,p,r){
	if( A[j] <= x){
	    i++;
	    swap(A[i],A[j]);
	}
    }
    swap(A[i+1],A[r]);
    return i + 1;
}

int main(){

    int N;
    int arr[100000];
    scanf("%d",&N);
    REP(i,N) scanf("%d",&arr[i]);
    int p = Partition(arr,0,N-1);
    cout << arr[0];
    FOR(i,1,p) cout << " "<<arr[i]; 
    cout << " ["<<arr[p] <<"] ";
    FOR(i,p+1,N-1) cout << arr[i] << " " ;
    cout << arr[N-1] << endl;

    return 0;
}