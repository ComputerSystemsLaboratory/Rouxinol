#include <iostream>

int ball[10];
bool ans;

void solve();

void dfs(int i, int right, int left);

int main(){
    int n;
    std::cin >> n;
    
    while(n--){
        for(int i = 0; i < 10; ++i)
            std::cin >> ball[i];
        solve();
        if(ans)
            std::cout << "YES" << std::endl;
        else
            std::cout << "NO" << std::endl;
    }
    
    return 0;
}

void solve(){
    ans = false;
    dfs(0, 0, 0);
    return;
}

void dfs(int i, int right, int left){
    if(i == 10){
        ans = true;
        return;
    }
    
    if(ball[i] < right && ball[i] < left)
        return;
    
    if(ball[i] > right)
        dfs(i + 1, ball[i], left);
    else
        dfs(i + 1, right, ball[i]);
    
    if(ans)
        return;
    
    return;
}