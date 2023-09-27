#include<iostream>
#include<fstream>
#include<cstdio>
#include<string>
#include<algorithm>
#include<cmath>
#include<vector>
#include<stack>
#include<climits>
#include<cstring>
#include<queue>
#include<map>
#include<set>
#include<complex>
using namespace std;

const int MAX_N = 100000;

struct BIT{
    int bit[MAX_N + 1];
    int n;

    BIT(const int n): n(n){
        for (int i=0;i<MAX_N;i++) bit[i] = 0;
    }

    void printBIT(){
        for (int i=0;i<n;i++){
            cout << bit[i] << " ";
        }
        cout << endl;
    }

    int sum(int i){
        int S = 0;
        while(i > 0){
            S += bit[i];
            i -= i & -i;
        }
        return S;
    }

    void add(int i, int x){
        while(i <= n){
            bit[i] += x;
            i += i & -i;
        }
    }

};

int main(){
    int n, q;
    cin >> n >> q;
    BIT bit(n);
    int c, x, y;
    for (int i=0;i<q;i++){
        cin >> c >> x >> y ;
        if(c == 0){
            bit.add(x, y);
        }else{
            cout << bit.sum(y) - bit.sum(x-1) << endl;
        }
    }
    return 0;
}