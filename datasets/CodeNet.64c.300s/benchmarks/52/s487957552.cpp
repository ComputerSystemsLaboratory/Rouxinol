#include <iostream>
using namespace std;

int dfs(int x, int y, int z){
    int count =0;
    if(x==0 && y==0) return 1;
    if(x>0){
        for(int i =z; i<10; i++){
            if(y-i>=0) count+=dfs(x-1, y-i, i+1);
        }
    }
    return count;
}

int main(void){
    int n, s;
    while(cin >> n >> s, n||s){
       cout << dfs(n, s, 0) << endl;
    }
    return 0;
}
