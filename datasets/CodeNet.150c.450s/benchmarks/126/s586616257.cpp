#include <iostream>
#include <vector>
#include <algorithm>

int main(){
    while(1){
        int way[20][20];
        std::vector<std::pair<int, int>> underConst;
        for(int i = 0; i < 20; i++){
            std::fill(way[i], way[i]+20, 0);
        }
        int a, b, n;
        std::cin >> a >> b;
        if(!a) break;
        std::cin >> n;
        for(int i = 0; i < n; i++){
            int t1, t2;
            std::cin >> t1 >> t2;
            underConst.push_back(std::make_pair(t1, t2));
        }
        way[1][1] = 1;
        for(int i = 1; i <= a; i++){
            for(int j = 1; j <= b; j++){
                if(std::find(underConst.begin(), underConst.end(), std::make_pair(i-1, j)) == underConst.end()){
                    way[i][j] += way[i-1][j];
                }
                if(std::find(underConst.begin(), underConst.end(), std::make_pair(i, j-1)) == underConst.end()){
                    way[i][j] += way[i][j-1];
                }
            }
        }
        std::cout << way[a][b] << std::endl;
    }
}

