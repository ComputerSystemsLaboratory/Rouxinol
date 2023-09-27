#include<iostream>
#include<numeric>

using namespace std;

#define REP(i, n) for(int i=0; i<n; i++)

int hlen[1500];
int wlen[1500];
int hcount[1500*1000+1];
int wcount[1500*1000+1];

void lencount(int n, int count[], int len[]){
    REP(i, n){
        for(int j=1; j<=n-i; j++){
            count[accumulate(len+i, len+i+j, 0)] += 1;
        }
    }
}

int main(){
    while(1){
        int n, m;
        cin >> n >> m;
        if(n==0) break;

        REP(i, n){
            int h;
            cin >> h;
            hlen[i] = h;
        }
        REP(j, m){
            int w;
            cin >> w;
            wlen[j] = w;
        }

        REP(i, 1500*1000+1){
            hcount[i] = 0;
            wcount[i] = 0;
        }
        lencount(n, hcount, hlen);
        lencount(m, wcount, wlen);

        int sum = 0;
        REP(i, 1500*1000+1){
            sum += hcount[i] * wcount[i];
        }
        cout << sum << endl;
    }
}