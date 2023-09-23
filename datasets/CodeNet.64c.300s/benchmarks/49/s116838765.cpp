
#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

int main(){
    int a,b;
    
    while(cin >> a >> b){
        int cnt=1;
        int c=10;
        for(int i=0;i<8;i++){
            //cout << c << ' ' << cnt << endl;
            if((a+b)-c<0)break;
            //cout << a << ' ' << b << '=' << a+b << endl;
            cnt++;
            c*=10;
        }
        cout << cnt << endl;
    }
    
    
    return 0;
}
 