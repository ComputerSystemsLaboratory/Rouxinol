#include<iostream>
#include<cstdio>
#include<string>
#include<queue>
#include<algorithm>

using namespace std;

queue<int> Q;
int N;
bool PATH[101][101] = {false};
int len[101];

void BFS(int id){
    Q.pop();
    for (int i = 1; i <= N; i++) {
        if (PATH[id][i]) {
            if (len[i] > len[id] + 1) {
                len[i] = len[id] + 1;
                Q.push(i);
            }
        }
    }
}

void BFS_m(){
    while (!Q.empty()) {
        BFS(Q.front());
    }
}

int main(){
    Q.push(1);
    cin >> N;
    for (int i = 1; i <= N; i++) {
        int bb;
        int n;
        cin >> bb;
        cin >> n;
        for (int k = 0; k < n; k++) {
            int s;
            cin >> s;
            PATH[i][s] = true;
        }
    }
    for (int i = 1; i <= N; i++) len[i] = 2000000000;
    len[1] = 0;
    
    BFS_m();
    
    for (int i = 1; i <= N; i++) {
        if (len[i] == 2000000000) len[i] = -1;
        printf("%d %d\n",i,len[i]);
    }
    
    return 0;
}