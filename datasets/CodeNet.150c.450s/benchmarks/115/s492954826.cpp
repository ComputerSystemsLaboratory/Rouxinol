#include <iostream>
#include <string>

using namespace std;

int solve(string s1, string s2){
    int L[s1.size()+1][s2.size()+1];
    for(int i=0;i<=s1.size();i++){
        for(int j=0;j<=s2.size();j++){
            if(i<=0 || j<=0){
                L[i][j]=0;
            }
            else if(s1[i-1] == s2[j-1]){
                L[i][j] = 1 + L[i-1][j-1];
            }
            else{
                L[i][j] = max(L[i][j-1],L[i-1][j]);
            }
        }
    }
    return L[s1.size()][s2.size()];
}

int main(){
    int n ; cin >> n;
    for(int i=0;i<n;i++){
        string s1,s2; cin>> s1 >> s2;
        cout << solve(s1,s2) << endl;
    }
}