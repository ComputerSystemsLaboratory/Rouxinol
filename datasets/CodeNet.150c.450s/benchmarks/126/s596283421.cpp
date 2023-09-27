#include <iostream>
#include <vector>

int main(){
    int a,b;
    int x,y;
    int n;
    
    while(std::cin >> a >> b){
        
        if(a == 0 && b == 0)
            break;
        
        std::cin >> n;
        
        std::vector<std::vector<int>> cor(b+1,std::vector<int>(a+1,0));
        std::vector<std::vector<int>> pro(b+1,std::vector<int>(a+1,0));
        
        while(n > 0 && std::cin >> x >> y){
            pro[y][x] = 1;
            --n;
        }
        
        if(pro[2][1] != 1)
            cor[2][1] = 1;
        
        if(pro[1][2] != 1)
            cor[1][2] = 1;
        
        for(int i = 1;i <= b;++i)
            for(int j = 1;j <= a;++j){
                if(pro[i][j] != 1)
                    cor[i][j] += cor[i-1][j] + cor[i][j-1];
            }
        std::cout << cor[b][a] << std::endl;
    }
}

