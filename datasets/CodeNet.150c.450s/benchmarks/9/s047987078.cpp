#include <iostream>
#include <string>
using namespace std;
 
int main(){
    string s;
    while(true){
        cin >> s;
        if(s=="-") break;
        int m,h;
        cin >> m;
        for(int i=0;i<m;i++){
            cin >> h;
            s = s.substr(h, s.size()-h) + s.substr(0,h);
        }
        cout << s << endl;
    }
}
