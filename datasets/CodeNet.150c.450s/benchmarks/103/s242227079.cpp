#include<iostream>
using namespace std;

int s;
bool used[10];

int countup( int n, int sum, int pre ){
    if( n == 0 ){
        if( sum == s ){
            return 1;
        }
        return 0;
    }
    int ret = 0;
    for( int i=pre; i<10; i++ ){
        if( !used[i] ){
            used[i] = true;
            ret += countup( n-1, sum+i, i+1 );
            used[i] = false;
        }
    }
    return ret;
}

int main(){
    int n;
    while( cin >> n >> s, n||s ){
        for( int i=0; i<10; i++ )
            used[i] = false;
        cout << countup(n, 0, 0) << endl;
    }
    return 0;
}