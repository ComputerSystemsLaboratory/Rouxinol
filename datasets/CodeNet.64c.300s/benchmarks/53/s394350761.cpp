#include<iostream>
using namespace std;
int main(){
    int a,b,c,n;
    cin >> a >> b >> c;
    n = 0;
    for(int i = a;i <= b;i++){
        if (c%i != 0)continue;
        else n++;
    }
    cout << n << endl;
    return 0;
}
