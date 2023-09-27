#include<iostream>
using namespace std;

int main(){
    int i=0,x[3000],y[3000];
    
    while(1){
        cin >> x[i] >> y[i];
        if(x[i] == 0 && y[i] == 0) break;
        i++;
    }
    i = 0;
    while(1){
        if(x[i] == 0 && y[i] == 0) break;
        if(x[i] <= y[i]) cout << x[i] << " " << y[i] << endl;
        else cout << y[i] << " " << x[i] << endl;
        i++;
    }
    return 0;
}
