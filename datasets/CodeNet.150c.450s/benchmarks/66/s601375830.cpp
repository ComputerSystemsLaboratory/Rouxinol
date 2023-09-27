#include <iostream>
#include <unordered_map>

std::unordered_map<std::string, int> m;

int main(){
    int N;
    std::cin >> N;

    for(int i=0;i<N;i++){
        std::string key;
        std::cin >> key;

        ++m[key];
    }

    int M;
    std::cin >> M;

    bool locked = true;
    for(int i=0;i<M;i++){
        std::string id;
        std::cin >> id;

        if(m[id] > 0){
            if(locked){
                std::cout << "Opened by " << id << std::endl;
            }else{
                std::cout << "Closed by " << id << std::endl;
            }
            locked ^= 1;
        }else{
            std::cout << "Unknown " << id << std::endl;
        }
    }
}