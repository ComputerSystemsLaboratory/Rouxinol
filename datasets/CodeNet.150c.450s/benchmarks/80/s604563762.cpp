#include <iostream>
using namespace std;

int main(){
    int a[4];
    int b[4];

    cin >> a[0] >> a[1] >> a[2] >> a[3] >> b[0] >> b[1] >> b[2] >> b[3];

    for(int i=1; i<=3; i++){
        a[0] += a[i];
        b[0] += b[i];
    }

    if(a[0] > b[0]){
        cout << a[0] << endl;
    }else{
        cout << b[0] << endl;
    }

    return 0;
}