#include <iostream>
using namespace std;

int main(){
        int a,b;
        cin >> a;
        b = a;
        for(int i=1;i < 3;i++){
                b = b * a;
        }
        cout << b << endl;
        return 0;
}