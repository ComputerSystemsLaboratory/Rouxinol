#include <iostream>
#include <algorithm>
using namespace std;

bool ok(int P,int k,int w[], int n){
    int wn = 0, tn = 1;
    //cout << "P: " << P << endl;
    for(int i = 0; i < n; i++){
        if(w[i] > P)
            return false;
        if(wn + w[i] <= P){
            wn = wn + w[i];
            //cout << "<wn: " << wn << endl;
        }else{
            tn += 1;
            wn = w[i];
            //cout << ">wn: " << wn << endl;
        }
    }
    //cout << "tn: " << tn << endl;
    if(tn <= k){
        return true;
    }else{
        return false;
    }
}

int main(){
    int n,k;
    cin >> n >> k;
    int w[n];
    for(int i = 0; i < n; i++){
        cin >> w[i];
    }
    int l = 0, h = n*10000+1;
    while(l+1 < h){
        int m = (l+h)/2;
        if(ok(m,k,w,n)){
            h = m;
            //cout << "h: " << h << endl;
        }else{
            l = m;
            //cout << "l: " << l << endl;
        }
    }
    cout << h << endl;
}