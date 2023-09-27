#include <iostream>
#include <string>


using namespace std;
int main() {
    string w;
    int a;
    int b;
    while(1){
    cin >> w;
    if(w=="-") break;
    cin >> a;
    for (int i=0; i<a; i++) {
        cin >>b;
        w += w.substr(0,b);
        w.erase(0,b);
    }
        cout << w << endl;
    }
    }
