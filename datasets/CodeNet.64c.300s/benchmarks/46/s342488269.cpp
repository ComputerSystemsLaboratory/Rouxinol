#include <iostream>
#include <cstring>

using namespace std;

bool isprime[1000001];

int main(){
    memset(isprime, true, sizeof(isprime));
    isprime[0] = false;
    isprime[1] = false;

    for(int i=2;i<1000001;i++){
        if(isprime[i]){
            for(int j=2;i*j<1000001;j++){
                isprime[i*j] = false;
            }
        }
    }

    int a,d,n;
    while(cin >> a >> d >> n){
        int pos=0;

        if(!(a|d|n)) break;

        while(n){
            if(isprime[a+d*pos]) n--;
            if(n == 0) break;
            pos++;
        }
        cout << a+d*pos << endl;
    }
}