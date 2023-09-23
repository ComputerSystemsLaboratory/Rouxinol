#include <iostream>
using namespace std;

const int MAX = 1000000;
bool ifnprime[MAX+1];

void set(){
    ifnprime[0] = ifnprime[1] = true;
    for(int i = 2; i*i <= MAX; i++){
        if( !ifnprime[i] ){
            int j = i*i;
            while( j <= MAX ){
                ifnprime[j] = true;
                j += i;
            }
        }
    }
}


int main(){
    set();
    int a, d, n;
    while( cin>>a>>d>>n, a||d||n ){
        int c=0,m=a-d;
        while(c<n){
            m += d;
            if(!ifnprime[m]) c++;
        }
        cout << m << endl;
    }
    return 0;
}