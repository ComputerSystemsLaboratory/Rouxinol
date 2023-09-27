// from : http://judge.u-aizu.ac.jp/onlinejudge/review.jsp?rid=1811250#1
 
#include<iostream>
#include<vector>
#include<queue>
  
using namespace std;
 
#define DEBUG(x) cout<<(#x)<<": "<<(x)<<endl
  
int nowS = 0;
int x, y, n;
int mp[1000][1000] = {};
int k[4] = {1, -1, 0, 0};
int h[4] = {0, 0, 1, -1};
int cx[9] = {};
int cy[9] = {};
queue<int> bufX, bufY, bufD;
  
bool search(int xx, int yy, int dd) {
    bufX.pop();
    bufY.pop();
    bufD.pop();
  
    for (int i = 0; i < 4; i++) {
        int nx = xx+k[i];
        int ny = yy+h[i];
        if (nx < 0 || nx >= x || ny < 0 || ny >= y)//?????????
            continue;
        if (mp[ny][nx] == -1) {//?????
            continue;
        }
        if (cx[nowS] == nx && cy[nowS] == ny) {//??????
            nowS++;
            while (!bufX.empty()) {
                bufX.pop();
                bufY.pop();
                bufD.pop();
            }
            if (nowS == n) {//?????????????????????
                cout << dd + 1 << endl;
                return true;
            }
            else {//
                bufX.push(nx);
                bufY.push(ny);
                bufD.push(dd + 1);
                mp[ny][nx] = nowS + 1;
            }
            return false;
        }
        if(mp[ny][nx] >= 0 && mp[ny][nx] < nowS + 1){
            bufX.push(nx);
            bufY.push(ny);
            bufD.push(dd + 1);
            mp[ny][nx] = nowS + 1;
        }
    }
    return false;
}
  
int main() {
    int ch = 0;
    cin >> y >> x >> n;
    for (int i = 0; i < y; i++) {//??\???
        char c[1001];
        cin >> c;
        for (int j = 0; j < x; j++) {
            if(c[j] == 'X')
                mp[i][j] = -1;
            else if(c[j] == 'S'){
                bufX.push(j);
                bufY.push(i);
                bufD.push(0);
                mp[i][j] = 1;
            }   
            else {
                mp[i][j] = 0;
            }
            if (c[j] >= 48 && c[j] <= 57) {
                int m;
                m = c[j] - 49;
                cx[m] = j;
                cy[m] = i;      
                ch++;
            }
        }
    }
      
  
    while(!search(bufX.front(), bufY.front(), bufD.front())){}//????????????????§?????????
  
    return 0;
}