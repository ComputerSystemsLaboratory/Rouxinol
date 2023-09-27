#include <bits/stdc++.h>
#define FOR(i, a, b) for(int i = (a); i < (b); ++i)
#define REP(i, n) for(int i = 0; i < (n); ++i)
#define SORT(v) sort(v.begin(), v.end());
#define pb(a) push_back(a)
using ll = long long;
using namespace std;

#define WHITE 1
#define GRAY 2
#define BLACK 3

int now, n, u, k, v, tree[102][102], timeTable[102][2], color[102], timeNow = 1;
stack<int> st;

void dfs(){
    while(1){
        if(st.empty()){
          	int l = 1;
          	while(1){
              	if(l == n + 1){
                	FOR(l, 1, n + 1){
                		cout << l << " " << timeTable[l][0] << " " << timeTable[l][1] << endl;
            		}
                  	break;
                }
            	if(color[l] == WHITE){
                	st.push(l);
                  	timeNow++;
                  	break;
                }
              	l++;
            }
          	if(l == n + 1){
            	break;
            }
        }else{
            now = st.top();
          	if(color[now] == WHITE){
            	timeTable[now][0] = timeNow;
            }
            color[now] = GRAY;
            int cnt = 1;
            while(1){
                if(cnt == n + 1){
                    st.pop();
                    color[now] = BLACK;
                    timeTable[now][1] = timeNow + 1;
                    break;
                }else if(tree[now][cnt] && color[cnt] == WHITE){
                    st.push(cnt);
                    break;
                }
                cnt++;
            }
            timeNow++;
        }
    }
}

int main(){
    cin >> n;
  	REP(i, 102){
    	REP(j, 102){
        	tree[i][j] = 0;
        }
    }
    REP(i, n){
        cin >> u >> k;
        color[i + 1] = WHITE;
        REP(j, k){
            cin >> v;
            tree[u][v] = 1;
        }
    }
    st.push(1);
    dfs();
  	return 0;
}