#include <iostream>
#include <vector>
using namespace std;

int main(void){
    int D, cbuf, sbuf, tbuf;
    vector<int> c;
    cin >> D;
    vector<vector<int>> s(D, vector<int>(26, 0));
    vector<int> t;
    for(int i=0; i<26; i++){
        cin >> cbuf;
        c.push_back(cbuf);
    }
    for(int i=0; i<D; i++){
        for(int j=0; j<26; j++){
            cin >> sbuf;
            s[i][j] = sbuf;
        }
    }
    for(int i=0; i<D; i++){
        cin >> tbuf;
        tbuf--;
        t.push_back(tbuf);
    }
    int satisfaction = 0;
    vector<int> last(26, -1);
    for(int i=0; i<D; i++){
        satisfaction += s[i][t[i]];
        last[t[i]] = i;
        for(int j=0; j<26; j++){
            satisfaction -= c[j]*(i-last[j]);
        }
        cout << satisfaction << endl;
    }
    return 0;
}