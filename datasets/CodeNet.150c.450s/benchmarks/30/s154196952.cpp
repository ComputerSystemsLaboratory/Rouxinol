#include<stdio.h>
#include<iostream>
#include<list>
#include<map>
#include<math.h>
#include<vector>
#include<algorithm>
#include<string.h>
#include<iomanip>
#define range(i,a,b) for(int i = (a); i < (b); i++)
#define rep(i,b) range(i,0,b)
#define debug(x) cout << "debug" << x << endl;
using namespace std;

int main(){
    int n;
    while(cin >> n){
        int A[101];
        rep(i, n){
            cin >> A[i];
        }
        int minj;
        int ans = 0;
        rep(i, n){
            minj = i;
            range(j, i ,n){
                if(A[j] < A[minj]){
                    minj = j;
                }
            }
            int num = A[i];
            A[i] = A[minj];
            A[minj] = num;
            if(i != minj) ans++;
        }
        rep(i, n){
            if(!i) cout << A[i];
            else cout << ' ' << A[i];
        }
        cout << endl << ans << endl;
    }
}