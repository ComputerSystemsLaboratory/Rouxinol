#include<bits/stdc++.h>
#define rep(i,n) for(int i=0; i<n; i++)
#define INF 1000000
using namespace std;
int main(){
    //木曜日を０とする
    int table[12][31];
    int cnt=0,day;
    for(int i=1; i<=12; i++){
        if(i == 4 || i == 6 || i == 9 || i == 11) day = 30;
        else if(i == 2) day = 29;
        else day = 31;
        for(int j=1; j<=day; j++) {
            if(cnt == 7) cnt = 0;
            table[i-1][j-1] = cnt;
            cnt++;
        }
    }
    int a,b;
    while(cin >> a >> b){
        if(a == 0 && b == 0) break;
        if(table[a-1][b-1] == 0) cout << "Thursday" << endl;
        if(table[a-1][b-1] == 1) cout << "Friday" << endl;
        if(table[a-1][b-1] == 2) cout << "Saturday" << endl;
        if(table[a-1][b-1] == 3) cout << "Sunday" << endl;
        if(table[a-1][b-1] == 4) cout << "Monday" << endl;
        if(table[a-1][b-1] == 5) cout << "Tuesday" << endl;
        if(table[a-1][b-1] == 6) cout << "Wednesday" << endl;
    }
    return 0;
}
