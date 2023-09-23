#include <iostream>
using namespace std;

int r, c;
int s[10][10000];

int rec(int step)
{

    int ret = 0;
    if(step == r) {
        for(int j = 0; j < c; j++) {
            int t = 0;
            for(int i = 0; i < r; i++) 
                t += s[i][j];
            ret += max(t, r - t);
        }
    } else {
        ret = max(ret, rec(step + 1));
        for(int j = 0; j < c; j++)
            s[step][j] = (s[step][j] + 1) % 2;
        ret = max(ret, rec(step + 1));
        
        for(int j = 0; j < c; j++)
            s[step][j] = (s[step][j] + 1) % 2;
    }

    return ret;
}

int main()
{
    while(cin >> r >> c && r && c) {
        for(int i = 0; i < r; i++) 
            for(int j = 0; j < c; j++) 
                cin >> s[i][j];

        cout << rec(0) << endl;
    }
}