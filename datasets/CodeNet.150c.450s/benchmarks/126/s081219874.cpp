#include <iostream>
#include <vector>
 
int main(){
    u_int a;	// width
    u_int b;	// height
    while(std::cin >> a >> b){
        if(a == 0 && b == 0){
            break;
        }
		
		// initialization
        std::vector<std::vector<u_int>> path(a+1, std::vector<u_int>(b+1, 1));
        //for(u_int i = 0; i < a+1; ++i){
        //    path[i].resize(b+1, 1);
        //}
        
        // construction
        u_int n;
        std::cin >> n;
        for(u_int i = 0; i < n; ++i){
            u_int x, y;
            std::cin >> x >> y;
            path[x][y] = 0;
        }
        
        // out path
        for(u_int i = 0; i < a+1; ++i) path[i][0] = 0;
        for(u_int i = 0; i < b+1; ++i) path[0][i] = 0;
        
        
        for(u_int x = 1; x <= a; ++x){
            for(u_int y = 1; y <= b; ++y){
                if(path[x][y] != 0 && !(x == 1 && y == 1)){
                    path[x][y] = path[x-1][y] + path[x][y-1];
                }
            }
        }
         
        std::cout << path[a][b] << std::endl;
         
    }
    return 0;
}