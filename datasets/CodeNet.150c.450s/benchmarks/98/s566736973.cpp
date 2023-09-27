#include<iostream>

using namespace std;

int n, m, C1[100], C2[100], sum1, sum2, d1, d2, c1, c2;

int main(){
    while(cin >> n >> m && n*m!=0){
        sum1 = 0;
        sum2 = 0;
        for (int i = 0; i < n; i++) {
            cin >> C1[i];
            sum1 += C1[i];
        }
        for (int i = 0; i < m; i++) {
            cin >> C2[i];
            sum2 += C2[i];
        }
        c1 = 101;
        c2 = 101;
        if((sum1 + sum2) % 2 == 1){
            cout << -1 << endl;
        } else {
            for (int i = 0; i < n; i++){
                
                for (int j = 0; j < m; j++){
                    d1 = C2[j]-C1[i];
                    d2 = C1[i]-C2[j];
                    if((sum1+d1) == (sum2+d2)){
                        if((C1[i] + C2[j]) < (c1 + c2)){
                            c1 = C1[i];
                            c2 = C2[j];
                        }
                    }
                }
            }
            if (c1 * c2 <= 10000){
                cout << c1 << " " << c2 << endl;
            } else {
                cout << -1 << endl;
            }
        }
    }
}