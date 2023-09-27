#include <iostream>
#include <string>
using namespace std;

int main(void){
    while(true){
        string str;
        cin >> str;
        if(str == "-") break;
        
        int m;
        cin >> m;
        for(int i = 0; i < m; i++){
            int h;
            cin >> h;
            str = str.substr(h, str.size() - h) + str.substr(0, h);
        }
        cout << str << endl;
    }

    return 0;
}

