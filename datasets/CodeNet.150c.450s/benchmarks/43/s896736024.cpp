#include <iostream>
using namespace std;
int main(){
    int n;
    while (cin >> n){
        if(n==0)
            break;
        int x,y;
        int a=0;
        int b=0;
        for(int i=0;i<n;i++){
            cin >> x >> y;
            if(x>y)
                a+=x+y;
            if(x<y)
                b+=x+y;
            if(x==y){
                a+=x;
                b+=y;
            }
        }
        cout << a << " " << b << endl;
    }
}