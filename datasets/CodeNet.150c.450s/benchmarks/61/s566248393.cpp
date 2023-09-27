#include <iostream>
using namespace std;
 
int main() {
    int n,a,b,c,x,y[102] = {},count,flag,j;
    while(1){
        count = 0;
        flag = 0;
        cin >> n >> a >> b >> c >> x;
        if(n == 0)break;
        for(int i = 0;i < n;i++)cin >> y[i];
        for(int i = 0;i < n && count < 10001;i++){
            while(count < 10001 && y[i] != x){
                x = ((a * x) + b)%c;
                count++;
            }
        if(i < n-1){
            x = ((a * x) + b)%c;
            count++;
        }
        }
        if(count >= 10001)cout << -1 <<endl;
        else cout << count <<endl;
    }
    return 0;
}