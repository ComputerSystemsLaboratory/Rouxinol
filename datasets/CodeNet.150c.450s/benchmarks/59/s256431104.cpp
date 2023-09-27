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
        rep(i, n){
            int num = A[i];
            int j = i - 1;
            while(j >= 0 && A[j] > num){
                A[j + 1] = A[j];
                j--;
            }
            A[j + 1] = num;
            rep(i, n){
                if(i == 0){
                    cout << A[i];
                }else{
                    cout << ' ' << A[i];
                }
            }
            cout << endl;
        }
    }
}