#include <iostream>
#include <algorithm>

int tax(int x, int r){
    return x*(100+r)/100;
}

using namespace std;
int toff(int v, int r){
    for(int i=v*100/(100+r); ; i++){
        if(tax(i,r) > v){
            if(tax(i-1,r) == v){
                return i-1;
            }else{
                break;
            }
        }
    }
    return -1;
}

int main(){
    int x,y,s;
    while(1){
        cin >> x >> y >> s;
        if(x==0) break;

        int maxval=0;
        for(int i=1; i<=s/2; i++){
            int max0x=toff(i,x);
            int max0y=toff(s-i,x);
            if(max0x==-1 || max0y==-1){
                continue;
            }
            maxval = max( tax(max0x, y) +tax(max0y, y), maxval);
        }
        cout << maxval << endl;
    }
    return 0;
}