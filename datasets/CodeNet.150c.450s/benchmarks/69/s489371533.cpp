#include <iostream>
using namespace std;

int b[10], l, r;

void check(){
    l = r = 0;
    int i;
    for(i = 0; i < 10; i++){
        if( b[i] < l && b[i] < r ) break;
        else if( b[i] < l ){
            r = b[i];
        }else if( b[i] < r ){
            l = b[i];
        }else if( l < r ){
            r = b[i];
        }else{
            l = b[i];
        }
    }
    if( i == 10 ){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
}

int main(){
    int n;
    cin >> n;
    while(n-- > 0){
        for(int i = 0; i < 10; i++){
            cin >> b[i];
        }
        check();
    }
    return 0;
}