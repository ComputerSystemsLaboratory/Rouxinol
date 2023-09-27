#include <iostream>
#include <vector>

int main(){
    int d;
    std::cin >> d;
    std::vector<int> c(26);
    for(int i = 0; i < 26; i++){
        std::cin >> c[i];
    }
    std::vector<std::vector<int>> s(d, std::vector<int>(26));
    for(int j = 0; j < d; j++){
        for(int i = 0; i < 26; i++){
            std::cin >> s[j][i];
        }
    }
    std::vector<int> t(d);
    for(int j = 0; j < d; j++){
        std::cin >> t[j];
    }


    std::vector<int> l(26);
    for(int i = 0; i < 26; i++){
        l[i] = 0;
    }

    int v = 0;
    for(int j = 0; j < d; j++){
        for(int i = 0; i < 26; i++){
            if(i == t[j] - 1){
                v = v + s[j][i];
                l[i] = j + 1;
            }
            else{
                v = v - c[i]*(j + 1 - l[i]);
            }
        }
        std::cout << v << std::endl;
    }
}