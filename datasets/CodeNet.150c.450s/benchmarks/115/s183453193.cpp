#include <iostream>
#include <string>

using namespace std;

int lcs(string s1, string s2) {
    int c[1005][1005];
    int m = s1.length();
    int n = s2.length();
    s1 = " " + s1;
    s2 = " " + s2;
    int max1=0;
    for (int i = 0; i <= m; i++) {
        c[i][0] = 0;
    }
    for (int i = 0; i <= n; i++) {
        c[0][i] = 0;
    }
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            if(s1[i]==s2[j]){
                c[i][j]=c[i-1][j-1]+1;
            }else{
                c[i][j]=max(c[i-1][j],c[i][j-1]);
            }
            max1=max(max1,c[i][j]);
        }
    }
    return max1;
}

int main() {
    int q;
    cin >> q;
    string s1, s2;
    for (int k = 0; k < q; k++) {
        cin >> s1;
        cin >> s2;
        cout<<lcs(s1,s2)<<endl;
    }

    return 0;
}