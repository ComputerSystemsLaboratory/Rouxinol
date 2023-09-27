#include <iostream>
#include <string>
#include <algorithm>
#define MAX 10000
using namespace std;
int n,m,a[MAX],b[MAX];
string S;

int main(){
    while (1) {
        int p;
        cin >> p;
        if (p!=0) {
            int suma=0,sumb=0;
            for (int i = 0; i<p; i++){
                cin >> n >> m;
                if (n>m) {
                    suma += (n+m);
                }
                if (n<m){
                    sumb += (n+m);
                }
                if (n==m) {
                    suma += n;
                    sumb += m;
                }
            }
            cout << suma << " "<<sumb <<"\n";
        }else{
            break;
        }
    }
    
}