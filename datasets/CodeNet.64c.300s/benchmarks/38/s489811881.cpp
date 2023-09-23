#include<iostream>
using namespace std;

int N;
int order[10];
int l[11];
int r[11];

bool dfs(int i, int b, int c){
    
    if(i == 10)
        return true;
    
    if(order[i] > l[b-1]){
        l[b] = order[i];
        return dfs(i+1, b+1, c);
    }
        
    if(order[i] > r[c-1]){
        r[c] = order[i];
        return dfs(i+1, b, c+1);
    }  
    
    return false;
}

int main(){
    cin >> N;
    while(N--){
        
        for(int i = 0; i < 10; i++){
            cin >> order[i];
            l[i] = -1;
            r[i] = -1;
        }
        
        if(dfs(0, 1, 1))
            cout << "YES\n";
 
        else
            cout << "NO\n";
    }
    return 0;
}
