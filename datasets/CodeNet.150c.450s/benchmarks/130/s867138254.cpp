
#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    int a[n][m];
    int b[m];
    int e;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }
    int answer;
    for (int i = 0; i < n; i++) {
        answer = 0;
        for (int j = 0; j < m; j++) {
            answer += a[i][j] * b[j];
        }
        cout << answer << endl;
    }
    return 0;
}