#include <bits/stdc++.h>

using namespace std;

void call(int n){
    int i = 1;

int run = 0;
do{
    run = 0;
    int x = i;
    if ( x % 3 == 0 ){
        cout << " " << i;
        if ( ++i <= n ){
            run = 1; continue;
        }else{
            break;
        }
    }
    
    do{
        if ( x % 10 == 3 ){
            cout << " " << i;
            break;
        }
        x /= 10;
    }while ( x );

    if ( ++i <= n ){
        run = 1; continue;
    }else{
        break;
    }

}while(run);
}

int main()
{
    int n;
    cin >> n;
    call(n);
    cout << endl;
}
