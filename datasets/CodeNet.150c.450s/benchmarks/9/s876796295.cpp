#include <iostream>
#include <string>
#include <sstream>
using namespace std;
 
int main(){
    string s;
    ostringstream oss;
    int m, h;
    while (cin >> s, s != "-"){
        cin >> m;
        for (int i = 0; i < m; i++){
            cin >> h;
            s = s.substr(h) + s.substr(0, h);
        }
        oss << s << endl;
    }
    cout << oss.str() << flush;
}
