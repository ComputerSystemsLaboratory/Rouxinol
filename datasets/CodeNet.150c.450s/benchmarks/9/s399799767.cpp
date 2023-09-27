#include <iostream>
#include <algorithm>
#include <string>

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    while(true){
        std::string str;
        std::cin >> str;
        if(str=="-") break;
        int m;
        std::cin >> m;
        int cnt = 0;
        for(int i=0; i<m; ++i){
            int suffle;
            std::cin >> suffle;
            cnt += suffle;
        }
        int strSize = str.size();
        cnt %= strSize;
        str+=str;
        std::cout << str.substr(cnt, strSize) << "\n";
    }
    return 0;
}