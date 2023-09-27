#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    string s1,s2;
    cin >> s1 >> s2;
    int s1len = (int)s1.size();
    int s2len = (int)s2.size();

    vector<vector<int> > D(s1len+1 ,vector<int>(s2len+1, 0));

    // ?¢?????????¶
    for(int i=0;i<=s1len;++i){
      D[i][0]=i;
    }
    for(int i=0;i<=s2len;++i){
      D[0][i]=i;
    }

    for(int i=1;i<=s1len;++i){
        for(int j=1;j<=s2len;++j){
            if(s1[i-1] == s2[j-1]){ // D??¨???index?????????????????¨?????¨??????
                D[i][j] = D[i-1][j-1];
            } else {
                D[i][j] = min(D[i-1][j-1]+1,min(D[i-1][j]+1,D[i][j-1]+1));
            }
        }
    }
    cout << D[s1len][s2len] << endl;
}