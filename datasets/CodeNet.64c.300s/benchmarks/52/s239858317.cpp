#include <iostream>
using namespace std;

int n, s;
int COUNT = 0;
int A[10];

void dfs(int cur, int sum){
    if(cur == n){
        if(sum == s){
            COUNT++;
        }
    }
    else{
        if(cur == 0) {
            for(int i = 0; i < 10; i++){
                A[cur] = i;
                dfs(cur+1, sum+i);
            }
        }
        else {
            for(int i = A[cur-1] + 1; i < 10; i++){
                A[cur] = i;
                dfs(cur+1, sum+i);
            }
        }
    }
}

int main(void){
    while(cin >> n >> s){
        if(n == 0 && s == 0)
            break;
        COUNT = 0;
        dfs(0, 0);
        cout << COUNT << endl;
    }
}

