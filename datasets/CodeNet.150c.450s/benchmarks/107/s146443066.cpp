#include<bits/stdc++.h>
using namespace std;
 
int LevenshteinDistance(string s1, string s2){
    int d[s1.length() + 1][s2.length() + 1];
    for(int i = 0; i <= s1.length(); i++) d[i][0] = i;
    for(int i = 0; i <= s2.length(); i++) d[0][i] = i;
 
    for(int i = 1; i <= s1.length(); i++){
        for(int j = 1; j <= s2.length(); j++){
            int cost;
            if(s1[i - 1] == s2[j - 1]) cost = 0;
            else cost = 1;
            d[i][j] = min(d[i - 1][j] + 1, min(d[i][j - 1] + 1, d[i - 1][j - 1] + cost));
        }
    }
    return d[s1.length()][s2.length()];
}
 
int main(){
    string s1, s2;
    cin >> s1 >> s2;
    cout << LevenshteinDistance(s1, s2) << endl;
    return 0;
}