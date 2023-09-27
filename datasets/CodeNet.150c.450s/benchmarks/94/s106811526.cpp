#include <iostream>
#include <vector>

void showVector(std::vector<int> &readVec){
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

int bubbleSort(std::vector<int> &readVec){
    int n = readVec.size();
    int temp, count = 0;
    bool flg = true;
    while(flg){
        flg = false;
        for(int i = n - 1; 0 < i; --i){
            if(readVec.at(i) < readVec.at(i - 1)){
                temp = readVec.at(i);
                readVec.at(i) = readVec.at(i - 1);
                readVec.at(i - 1) = temp;
                flg = true;
                ++count;
            }
        }
    }

    return count;
}

int main(){
    int n;
    std::cin >> n;

    std::vector<int> a(n);
    for(int i = 0; i < n; ++i){
        std::cin >> a.at(i);
    }

    int count = bubbleSort(a);
    showVector(a);    
    std::cout << count << std::endl;

    return 0;
}

