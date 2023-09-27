#include<iostream>
#include<string>
#include<algorithm>
#define MAX 1001
using namespace std;

int main() {
    int n,mat[MAX][MAX];
    string s1,s2;
    cin >> n;
    for(int k=0;k<n;k++) {
        cin >> s1 >> s2;
        for(int i = 0; i < s1.size(); i++) {
            for(int j = 0; j < s2.size(); j++) {
                mat[i + 1][j + 1] = (s1[i] == s2[j] ? mat[i][j] + 1 : max(mat[i][j + 1], mat[i + 1][j]));
            }
        }
        cout << mat[s1.size()][s2.size()] << endl;
    }
}