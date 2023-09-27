#include <iostream>
using namespace std;
int s,t,a;
int main(){
        for(int i = 0; i < 4; i++){
                cin >> a;
                s += a;
        }   
        for(int i = 0; i < 4; i++){
                cin >> a;
                t += a;
        }   
        cout << max(s,t) << endl;
}