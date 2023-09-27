#include <iostream>
#include <vector>

void showVector(std::vector<int> readVec){
    int length = readVec.size();
    for(int i = 0; i < length; ++i){
        if(length - 1 != i){
            std::cout << readVec.at(i) << " ";
        }else{
            std::cout << readVec.at(i);
        }
    }
    
    std::cout << std::endl;
}

int main(){
    int n;
    std::cin >> n;

    std::vector<int> a(n);
    for(int i = 0; i < n; ++i){
        std::cin >> a.at(i);
    }

    bool flg = true;
    int i = 0;
    int j, tmp;
    int count = 0;
    while(flg){
        flg = 0;
        for(j = n - 1; i < j; --j){
            if(a.at(j) < a.at(j - 1)){
                a.at(j) += a.at(j - 1);
                a.at(j - 1) = a.at(j) - a.at(j - 1);
                a.at(j) = a.at(j) - a.at(j - 1);
                flg = true;
                ++count;
            }
        }
    }
    
    showVector(a);    
    std::cout << count << std::endl;

    return 0;
}

