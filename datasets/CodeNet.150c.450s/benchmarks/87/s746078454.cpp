#include <iostream>
#include <vector>
#define FOR(i,k,n) for (int (i)=(k); (i)<(n); ++(i))
#define RFOR(i,k,n) for (int (i)=(n)-1;(i)>=(k);--(i))
#define REP(i,n) FOR(i,0,n)
#define RREP(i,n) FOR(i,0,n)
#define pb push_back
using namespace std;

int clearnum;

int scoreplus(int *a, int b, int e){
    int scoreplus = 0;
    REP(i,e-b+1){
        scoreplus += *(a + b + i);
    }
    return scoreplus;
}

void clear(int *a,int b,int e){
    REP(i,e-b+1){
        *(a + b + i) = 0;
    }
    clearnum++;
}

int main(){
    int h;
    while(cin >> h && h > 0){
        int a[h][5], score = 0;
        REP(i,h){
            REP(j,5){
                cin >> a[i][j];
            }
        }
        while(1){
            clearnum = 0;
            REP(i,h){
                if(a[i][0] > 0 && a[i][0] == a[i][1] && a[i][0] == a[i][2]){
                    if(a[i][0] == a[i][3]){
                        if(a[i][0] == a[i][4]){
                           score += scoreplus(a[i],0,4);
                            clear(a[i],0,4);
                        }
                        else{
                            score += scoreplus(a[i],0,3);
                            clear(a[i],0,3);
                        }
                    }
                    else{
                        score += scoreplus(a[i],0,2);
                        clear(a[i],0,2);
                    }
                }
                else if(a[i][1] > 0  && a[i][1] == a[i][2] && a[i][1] == a[i][3]){
                    if(a[i][1] == a[i][4]){
                        score += scoreplus(a[i],1,4);
                        clear(a[i],1,4);
                    }
                    else{
                        score += scoreplus(a[i],1,3);
                        clear(a[i],1,3);
                    }
                }
                else if(a[i][2] > 0 && a[i][2] == a[i][3] && a[i][2] == a[i][4]){
                    score += scoreplus(a[i],2,4);
                    clear(a[i],2,4);
                }
            }

            if(clearnum == 0) break;
            REP(j,5){
                vector<int> V(0,0);
                REP(i,h){
                    if(a[i][j]) V.pb(a[i][j]);
                }
                REP(i,h){
                    a[i][j] = 0;
                }
                FOR(i,h-V.size(),h){
                    a[i][j] = V[i-(h-V.size())];
                }
            }
        }
        cout << score << endl;
    }
    return 0;
}