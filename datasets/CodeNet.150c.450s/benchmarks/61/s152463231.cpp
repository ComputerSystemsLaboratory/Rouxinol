#include <iostream>
using namespace std;

int main(){
    int n,a,b,c,x;
    int rand[100];
    while(1){
        cin >> n >> a >> b >> c >> x;
        if(n==0) break;
        for(int i=0; i<n; i++){
            cin >> rand[i];
        }

        int idx=0;
        int frame;
        for(frame=0; frame<=10000; frame++){
            if(rand[idx]==x){
                idx++;
                if(idx==n){
                    break;
                }
            }
            x = (a*x + b)%c;
        }

        if(idx==n){
            cout << frame << endl;
        }else{
            cout << -1 << endl;
        }
        
    }
    return 0;
}