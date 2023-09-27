#include <iostream>
using namespace std;
 
int main() {
    int n,p,q,i,j = 0;;
    int a[51];
    while(1){
        cin >> n >> p;
        if(n+p == 0)break;
        q = p;
        for(i = 0;i < 51;i++)a[i] = 0;
        while(1){
            for(i = 0;i < n;i++){
                if(p > 0){
                    a[i]++;
                    p--;
                }
                else if(p == 0 && a[i] > 0){
                    p = a[i];
                    a[i] = 0;
                }
            if(a[i] == q)break;
            }
            if(a[i] == q)break;
        }
        cout << i <<endl;
    }
    return 0;
}
 