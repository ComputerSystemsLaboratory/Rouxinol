#include<iostream>
#include<vector>
#include<algorithm>

#define REP(i,n) for(int i=0;i<(n);i++)

using namespace std;

bool field[21][21];

void initialize(){
    REP(i,21){
        REP(j,21){
            field[i][j] = false;
        }
    }
}

int main(){
    int n;
    while(cin >> n){
        if(n==0) break;
        initialize();
        REP(k,n){
            int x,y;
            cin >> x >> y;
            field[y][x] = true;
        }

        int m;
        int i=10, j=10, cnt=0;
        cin >> m;
        REP(k,m){
            char direct;
            int dist;
            cin >> direct >> dist;
            REP(l,dist){
                switch(direct){
                    case 'E':
                        j++;
                        break;
                    case 'W':
                        j--;
                        break;
                    case 'N':
                        i++;
                        break;
                    case 'S':
                        i--;
                        break;
                }
                if(field[i][j]){
                    cnt++;
                    field[i][j] = false;
                }
            }
        }
        if(cnt == n){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
    }
    return 0;
}