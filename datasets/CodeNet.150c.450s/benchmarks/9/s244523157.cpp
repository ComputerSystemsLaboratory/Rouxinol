#include <iostream>
#include <string>
using namespace std;

int main() {
    string h;
    int m, n;
    while(cin >> h){
        if(h =="-") break;
        cin >> m;
        for(int i=0; i<m; i++){
            cin >> n;
            h+=h.substr(0,n);
            h=h.substr(n);
        }
        cout << h << endl;
    }
    return 0;
}