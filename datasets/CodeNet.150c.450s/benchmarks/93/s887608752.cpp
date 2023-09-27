#include <cstdio>
#include <algorithm>
#include <iostream>
#include <vector>
#include <climits>
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define RFOR(i,a,b) for(int i=(b) - 1;i>=(a);i--)
#define REP(i,n) for(int i=0;i<(n);i++)
#define RREP(i,n) for(int i=n-1;i>=0;i--)

#define PB push_back
#define MP make_pair
#define ALL(a) (a).begin(),(a).end()
#define RALL(a) (a).rbegin(),(a).rend()
#define CLR(a) memset(a,0,sizeof(a))
#define SET(a,c) memset(a,c,sizeof(a))

#define DEBUG(x) cout<<"#x"<<": "<<x<<endl

using namespace std;

int Partition(int A[],char B[],int p,int r){
    int x = A[r];
    int i = p-1;
    FOR(j,p,r){
        if(A[j] <= x){
            i = i+1;
            swap(A[i],A[j]);
            swap(B[i],B[j]);
        }
    }
    swap(A[i+1],A[r]);
    swap(B[i+1],B[r]);
    return i+1;
}

void Quicksort(int A[100001],char B[100001],int p,int r){
    if( p < r){
        int q = Partition(A,B,p,r);
        Quicksort(A,B,p,q-1);
        Quicksort(A,B,q+1,r);
    }
}

void insertionSort(int A[100001],char B[100001],int n){
    FOR(i,1,n){
        int pos = i;
        while(A[pos-1] > A[pos] && pos > 0){
            swap(A[pos-1],A[pos]);
            swap(B[pos-1],B[pos]);
            pos--;
        }
    }
}

bool isStable(char A[100001],char B[100001],int n){
    REP(i,n){
        if(A[i] != B[i]) return false;
    }
    return true;
}

int temp[100001];
char ctemp[100001];
void merge(int A[100001],char B[100001],int l,int r){
    if(l >= r ) return;

    int i,j,k;
    int m = (l+r)/2;
    merge(A,B,l,m);
    merge(A,B,m+1,r);

    for(i = l;i <= m ;i++){
        temp[i] = A[i];
        ctemp[i] = B[i];
    }
    for(i=m+1,j=r;i<=r;i++,j--){
        temp[i] = A[j];
        ctemp[i] = B[j];
    }
    i = l;
    j = r;
    for(k=l;k<=r;k++){
        if(temp[i]<=temp[j] && i <= m) {
            A[k] = temp[i];
            B[k] = ctemp[i];
            i++;
        }else{
            A[k] = temp[j];
            B[k] = ctemp[j];
            j--;
        }
    }

}

int main(){
    int n ;
    int A[100001],AA[100001];
    char B[100001],BB[100001];
    cin.tie(0);
    ios::sync_with_stdio(false);
    cin >> n;
    REP(i,n){
        cin >> B[i] >> A[i];
        AA[i] = A[i];
        BB[i] = B[i];
    }
    A[n] = 2000000000;
    AA[n] = 2000000000;
    B[n] = 'Z';
    BB[n] = 'Z';

    Quicksort(A,B,0,n);
    merge(AA,BB,0,n);

    if(isStable(B,BB,n)) cout << "Stable" << endl;
    else cout << "Not stable" << endl;
    REP(i,n){
        cout << B[i] << " " << A[i]<<endl;
    }

    // cout << "====steble====" << endl;
    //
    // REP(i,n){
    //     cout << BB[i] << " " << AA[i]<<endl;
    // }

    return 0;
}