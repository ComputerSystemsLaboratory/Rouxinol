#include <iostream>
using namespace std;
int main(void){
    int a;
    cin >> a;
    for (int i = 1; i <= a; ++i){
        if ( i % 3 == 0 ){
            cout << " " << i;
        }else{
            for(int t = i; t!=0 ; t = t/10){
                if( t % 10 == 3){
                    cout << " " << i;
                    t=0;
                }
            }
        }
    }
    cout << endl;
}

