#include <iostream>
#include <string>
using namespace std;

int main(){
    int Q;
    string str_x, str_y;
    int memo[1001][1001];
    cin >> Q;
    
    for(int q = 0;q < Q;q++){
        cin >> str_x >> str_y;
        
        for(unsigned int i = 0;i < str_x.size();i++){
            for(unsigned int j = 0;j < str_y.size();j++){
                if(str_x.at(i) == str_y.at(j)){
                    memo[i+1][j+1] = memo[i][j] + 1;
                }else{
                    memo[i+1][j+1] = max(memo[i][j+1], memo[i+1][j]);
                }
            }
        }
        
        printf("%d\n", memo[str_x.size()][str_y.size()]);
    }
    
    return 0;
}