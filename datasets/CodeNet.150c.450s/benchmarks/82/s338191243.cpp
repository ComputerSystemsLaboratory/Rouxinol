#include<iostream>
using namespace std;

int main(){
    int a,b,c,d,e,f;
    cin >> a >> b >> c >> d >> e >> f;
    
    int num;
    int g,h;
    cin >> num;
    for(int i=0; i<num; i++){
        cin >> g >> h;
        for(int i=0; !(a==g && b==h); i++){
            if(d==h || c==h){
                int tmp = a;
                a = d;
                d = f;
                f = c;
                c = tmp;
            }
            for(int i=0; b!=h; i++){
                int tmp=a;
                a = b;
                b = f;
                f = e;
                e = tmp;
            }
            for(int i=0; a!=g; i++){
                int tmp=a;
                a = d;
                d = f;
                f = c;
                c = tmp;
            }
        }
        cout << c << endl;
    }
}