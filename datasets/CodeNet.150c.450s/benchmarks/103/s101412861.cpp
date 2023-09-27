#include <iostream>
using namespace std;

class Solve{
private:
    int n_     = 0;
    int s_     = 0;
    int result = 0;
    void dfs(int num, int sum, int cnt);
public:
    Solve(int num, int sum);
    int getSolve();
};

Solve::Solve(int num, int sum){
    n_ = num;
    s_ = sum;
    
    Solve::dfs(0,0,0);
}

void Solve::dfs(int num, int sum, int cnt){
    if(sum == s_ && cnt == n_){
        result++;
        return;
    }
    if(num == 10 || cnt == n_){
        return;
    }
    
    Solve::dfs(num+1, sum+num, cnt+1);
    Solve::dfs(num+1, sum, cnt);
}

int Solve::getSolve(){
    return result;
}


int main(){
    int n, s = 0;
    while(cin >> n >> s){
        if(n == 0 && s == 0){
            break;
        }else{
            Solve solve(n, s);
            cout << solve.getSolve() << endl;
        }
    }
    return 0;
}