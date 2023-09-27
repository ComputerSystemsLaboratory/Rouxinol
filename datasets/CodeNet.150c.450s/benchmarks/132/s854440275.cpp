#include <iostream>
#include <cmath>
#include <algorithm>
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define REP(i,k,n) for(int i = k; i < (int)(n); i++)
using namespace std;

int main(){
        int n,p;
        int a[50];
        while(true) {
                rep(i,50) a[i]=0;
                cin >> n >> p;
                int cup = p;
                if(n==0) break;
                bool flag = false;
                while(true) {
                        rep(i,n){
                                if (cup==0) {
                                        cup=a[i];
                                        a[i]=0;
                                        continue;
                                }
                                a[i]++;
                                cup--;
                                if(a[i]==p) {
                                        cout << i << endl;
                                        flag = true;
                                        break;
                                }
                        }
                        if(flag == true) break;
                }
        }

        return 0;
}

