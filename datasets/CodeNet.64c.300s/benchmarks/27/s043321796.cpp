#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>
#include<cmath>
#include<vector>
#include<stack>
#include<climits>
#include<cstring>
#include<queue>
#include<complex>
using namespace std;

int howManyWays(int n, int x){
    int S = 0;
    for (int i=1;i<=n;i++){
        for (int j=i+1;j<=n;j++){
            for (int k=j+1;k<=n;k++){
                if(i+j+k == x){
                S++;
                }
            }
        }
    }
    return S;
}

int main(){
    int n, x;
    cin >> n >> x;
    while(n!=0 || x!=0){
        cout << howManyWays(n,x) <<endl;
        cin >> n >> x;
    }
    return 0;
}