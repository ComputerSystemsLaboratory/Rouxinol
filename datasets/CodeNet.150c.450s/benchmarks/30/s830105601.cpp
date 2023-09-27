#include <iostream>
#include <vector>
#include <algorithm>

void showVector(std::vector<int> readVec){
    int size = readVec.size();
    for(int i = 0; i < size; ++i){
        std::cout << readVec.at(i);
        if(size - 1 != i){
            std::cout << " ";
        }else{
            std::cout << std::endl;
        }
    }
}

int main(){
    int n;
    std::cin >> n;

    std::vector<int> a(n);
    for(int i = 0; i < n; ++i){
        std::cin >> a.at(i);
    }

//    showVector(a);

    int count = 0;

    for(int i = 0; i < n; ++i){
        int temp = i;
        for(int j = i; j < n; ++j){
            if(a.at(j) < a.at(temp)){
                temp = j;
            }
        }

        if(temp != i){
            a.at(i) += a.at(temp);
            a.at(temp) = a.at(i) - a.at(temp);
            a.at(i) = a.at(i) - a.at(temp);

            ++count;
        }
    }

    showVector(a);
    std::cout << count << std::endl;

    return 0;
}

