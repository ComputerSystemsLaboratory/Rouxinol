#include<iostream>
#include<algorithm>
#include<cstdio>

using namespace std;

#define N 100000

int A[N];
int n,k;

int K_search(int P){
    int TR[N]={0};
    int tr = 0;
    int count = 0;
    
    for (int i = 0; i < n; i++) {
        if (TR[tr]+A[i]<=P) {
            TR[tr] += A[i];
            count++;
        }else if(tr+1<k && A[i]<=P){
            tr++;
            TR[tr] += A[i];
            count++;
        }else{
            break;
        }
    }
    return count;
}

int solve(){
    int Right=0,Left=0;
    for (int i = 0; i < n; i++) {
        Right += A[i];
    }
    int mid;
    
    
    while ( Right-Left > 1 ) {
        mid = (Right+Left)/2;
        
        int v = K_search(mid);
        if (v >= n) {
            Right = mid;
        }else{
            Left = mid;
        }
    }
    return Right;
}


int main(){
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        scanf("%d",&A[i]);
    }
    
    cout << solve() << endl;
    
    return 0;
}