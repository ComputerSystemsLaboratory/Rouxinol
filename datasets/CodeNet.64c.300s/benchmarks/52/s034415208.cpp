#include <iostream>
using namespace std;
int n,s,c;
void f(int m,int a,int t){
        if(a == n){
                if(t == s) ++c;
        }
        else {
                for(int i = m;i < 10;++i){
                        f(i + 1,a + 1,t + i);
                }
        }
        return;
}
int main(){
        while(cin >> n >> s && (n != 0 || s != 0)){
                c = 0;
                f(0,0,0);
                cout << c << endl;
        }
        return 0;
}
 