#include <iostream>

using namespace std;

int main(){
    int n,a,b,c,x;

    while(cin >> n >> a >> b >> c >> x){
        if((n|a|b|c|x) == 0) break;

        int num[n];
        for(int i=0;i<n;i++){
            cin >> num[i];
        }

        int pos=0;
        int ret=-1;
        for(int i=0;i<10001;i++){
            if(x == num[pos]){
                pos++;
            }
            if(pos == n){
                ret = i;
                break;
            }
            x = (a*x+b)%c;
        }
        cout << ret << endl;
    }
}