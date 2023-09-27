#include <iostream>
#include <map>
#include <string>

int main(){
    int n;
    std::cin >> n;
    while(n != 0){
        std::map<char,char>map;
        for(int i=0;i<n;i++){
            char a,b;
            std::cin >> a >> b;
            map[a] = b;
        }
        int temp;
        std::cin >> temp;
        std::string s;
        for(int i=0;i<temp;i++){
            char a;
            std::cin >> a;
            if(map.find(a) == map.end()){
                s += a;
            }else{
                s += map[a];
            }
        }
        std::cout << s << std::endl;
        std::cin >> n;
    }
}