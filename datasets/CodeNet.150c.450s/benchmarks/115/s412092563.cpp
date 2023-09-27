#include <iostream>
#include <string>

int solve(std::string &x, std::string &y){
    int c[1001][1001] = {};
    int m = x.length();
    int n = y.length();

    //for(int i = 1; i <= m; ++i) c[i][0] = 0;                                                                                                                                                                                      
    //for(int i = 1; i <= n; ++i) c[0][i] = 0;                                                                                                                                                                                      
    int maxval = 0;
    x = ' ' + x;
    y = ' ' + y;
    for(int i =  1; i <= m; ++i){
        for(int j = 1; j <= n; ++j){
            if(x[i] == y[j]){
                c[i][j] = c[i - 1][j - 1] + 1;
            } else {
                c[i][j] = std::max(c[i][j - 1], c[i - 1][j]);
            }
            maxval = std::max(maxval, c[i][j]);
        }
    }
    return maxval;
}

int main(){
    int q;
    std::cin >> q;
    for(int i = 0; i < q; ++i){
        std::string x;
        std::string y;
        std::cin >> x;
        std::cin >> y;
        int res = solve(x, y);
        std::cout << res << "\n";
    }
    return 0;
}

