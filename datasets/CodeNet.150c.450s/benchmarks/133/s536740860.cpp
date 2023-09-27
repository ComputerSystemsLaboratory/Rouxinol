#include <iostream>
using namespace std;

int main()
{
    int D; cin >> D;
    int c[27];
    for(int i=1; i<27; i++) cin >> c[i];
    int s[D+1][27];
    for(int i=1; i<=D; i++){
        for(int j=1; j<27; j++) cin >> s[i][j];
    }
    int t[D+1];
    for(int i=1; i<=D; i++) cin >> t[i];
    int last[D+1][27];
    for(int i=1; i<=D; i++){
        for(int j=1; j<27; j++) last[i][j] = 0;
    }

    long long int sat = 0;
    
    for(int d=1; d<=D; d++){
        
        //得られる満足度
        sat += s[d][t[d]];
        for(int dd = d; dd<=D; dd++)
            last[dd][t[d]] = d;
        //失われる満足度
        for(int i=1; i<=26; i++){
            sat -= c[i]*(d-last[d][i]);
        }
        cout << sat << endl;
    }

    return 0;






}