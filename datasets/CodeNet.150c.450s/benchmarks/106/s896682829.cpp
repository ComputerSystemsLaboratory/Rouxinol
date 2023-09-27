#include<iostream>
using namespace std;

int main(){
    int a,b,c,i;

    cin >> a >> b >> c;
    while(1){
        if(c % a == 0) i++;
        if(a == b) break;
        a++;
    }
    cout << i << endl;
    return 0;
}

