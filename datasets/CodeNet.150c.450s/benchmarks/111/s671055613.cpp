#include <iostream>
#include <vector>

int main(){
    int N;
    std::cin >> N;
    int x,ans;
    int i = 0;
    std::vector<std::vector<long int>> num(N,std::vector<long int>(21,0));
    
    while(N > 0 && std::cin >> x){
        if(N == 1){
            ans = x;
            break;
        }
        
        if(i == 0){
            ++num[i][x];
            ++i;
            --N;
        }
        else{
            for(int j = 0;j < 21;++j){
                if(num[i-1][j] > 0){
                    if(j+x <= 20){
                        num[i][j+x] += num[i-1][j];
                    }
                    if(j-x >= 0){
                        num[i][j-x] += num[i-1][j];
                    }
                }
            }
            ++i;
            --N;
        }
    }
    
    for(int j = 0;j < 21;++j)
        if(ans == j)
            std::cout << num[i-1][j] << std::endl;
}
