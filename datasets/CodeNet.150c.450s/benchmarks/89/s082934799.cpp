#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<bool> prm(1e6,true);
    prm[0] = prm[1] = 0;
    for(int i=2; i<=1e3; i++){
        if(prm[i]){
            for(int j=2; i*j<1e6; j++){
                prm[i*j] = false;
            }
        }
    }
    
    while(1){
        int a,d,n;
        cin >> a >> d >>n;
        if(a==0) break;
        
        int cnt=0;
        for(int i=0; a+i*d<1e6 ; i++){
            if(prm[a+i*d]) cnt++;
            if(cnt == n){
                cout << a+i*d << endl;
                break;
            }
        }
    }
    return 0;
}