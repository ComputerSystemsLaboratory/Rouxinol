#include<iostream>

using namespace std;
int balls[11];
bool res;
int n;

bool dfs(int left, int right,int i){
        if(i==9) return balls[left]<balls[i] || balls[right] < balls[i];
        if(balls[i] > balls[left]) return dfs(i, right, i+1);
        else if(balls[i] > balls[right]) return dfs(left, i, i+1);
        else return false;
}

void solve(){
        for (int i = 0; i < 10; ++i) {
                cin >> balls[i];

        }
        balls[10] = -1;
        res = dfs(10,10,1);
        if(res){
                cout << "YES" << endl;
        }else{
                cout << "NO" << endl;
        }
}

int main(){
        ios_base::sync_with_stdio(false);
        cin >> n;
        for (int i = 0; i < n; ++i) {
                solve();
        }
        return 0;
}
