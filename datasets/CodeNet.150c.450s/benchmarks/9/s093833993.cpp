#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main()
{
    while(true){
        string S;
        cin >> S;
        if( S == "-" ){
            break;
        }
        int m{0};
        cin >> m;
        int h;
        for(int i=0; i<m ;++i){
            cin >> h;
            string sub;
            sub = S.substr(0, h);
            S.erase(0,h);
            S = S+sub;
        }

        cout << S << endl;
    }

    return 0;
}
