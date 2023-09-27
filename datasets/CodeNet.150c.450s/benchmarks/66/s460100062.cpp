#include <cstdio>
#include <iostream>
#include <cmath>
#include <ctype.h>
#include <string> 
#include <sstream>
#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <map>
#include <queue>
#include <utility>
#include <vector>
#include <set>
 
using namespace std;

int main()
{
    int n, m;
    string pass[256];
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> pass[i];
    }
    cin >> m;
    string input;
    bool isopen = false;
    for(int i = 0; i < m; i++){
        cin >> input;
        bool isfound = false;
        for(int j = 0; j < n; j++){
            if(pass[j] == input){
                isfound = true;
                break;
            }
        }
        if(isfound){
            if(!isopen) cout << "Opened by " << input << endl;
            else cout << "Closed by " << input << endl;
            isopen = !isopen;
        } else cout << "Unknown " << input << endl;
    }
    return 0;
}