
#include <iostream>

using namespace std;

int ab(int a,int b){
    if (a<b) {
        return b-a;
    }else{
        return a-b;
    }
}

int main() {
    for (; ;) {
        int n ,m;
        cin >>n >>m;
        if (n==0&&m==0) {
            break;
        }
        int taro[n],hanako[m];
        int sumt=0,sumh=0;
        for (int i=0; i<n;i++) {
            cin >> taro[i];
            sumt += taro[i];
        }
        for (int i=0; i<m; i++) {
            cin >> hanako[i];
            sumh+=hanako[i];
        }
        int dis = sumt-sumh;
        int ans=0;
        int wa=100000007;
        int I =0,J=0;
        for (int i=0; i<n; i++) {
            for (int j=0; j<m; j++) {
                if (2*(taro[i]-hanako[j])==dis) {
                    ans++;
                    if (wa>=taro[i]+hanako[j]) {
                        I=i;
                        J=j;
                    }
                    wa=min(wa,taro[i]+hanako[j]);
                    }
            }
        }
        if (ans==0) {
            cout << -1 <<endl;
        }else{
            cout << taro[I] << " "<< hanako[J] << endl;
        }
    }
}