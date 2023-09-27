#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main(){
    int N;
    int A[100];
    cin >> N;
    for(int i=0;i<N;i++) cin >> A[i];

    int cnt = 0;
    for(int i=0;i<N;i++){
        int minj = i;
        for(int j=i;j<N;j++){
            if(A[j]<A[minj]) minj = j;
        }
        if(A[i] != A[minj]) cnt++;
        int tmp = A[i];
        A[i] = A[minj];
        A[minj] = tmp;
    }
    cout << A[0];
    for(int i=1;i<N;i++) cout << ' ' << A[i];
    cout << endl << cnt << endl;
    
    return 0;
}
