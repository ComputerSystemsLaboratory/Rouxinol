#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <string>
#include <vector>
#include <list>
#include <map>
#include <algorithm>
#include <typeinfo>
#define _USE_MATH_DEFINES
#include <cmath>

using namespace std;

int main(){

    string s;
    int m;

    while(true){
        cin >> s;
        if(s=="-"){
            break;
        }
        cin >> m;
        vector<int> h(m);

        for(int i=0; i<m; i++){
            cin >> h[i];
        }

        for(int i=0; i<m; i++){
            string tmp = s.substr(0,h[i]);
            s.erase(0,h[i]);
            s += tmp;
        }

        cout << s << endl;
    }

    return 0;
}

