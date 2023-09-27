#include <iostream>
#include <vector>
 
int main(){
    u_int a, b;
    while(std::cin >> a >> b){
        if(a == 0 && b == 0){
            return 0;
        }
		
        std::vector<std::vector<u_int>> path(a+1);
        for(int i = 0; i < a+1; ++i){
            path[i].resize(b+1, 1);
        }
         
        u_int n;
        std::cin >> n;
        for(int i = 0; i < n; ++i){
            int x, y;
            std::cin >> x >> y;
            path[x][y] = 0;
        }
         
        for(int i = 0; i <= a; ++i) path[i][0] = 0;
        for(int i = 0; i <= b; ++i) path[0][i] = 0;
         
        for(int x = 1; x <= a; ++x){
            for(int y = 1; y <= b; ++y){
                if( path[x][y] != 0 && (x != 1 || y != 1) ){
                    path[x][y] = path[x-1][y] + path[x][y-1];
                }
            }
        }
         
        std::cout << path[a][b] << std::endl;
         
    }
    return 0;
}