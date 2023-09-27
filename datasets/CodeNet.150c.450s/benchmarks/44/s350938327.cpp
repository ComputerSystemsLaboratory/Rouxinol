#include <iostream>
#include <array>
//ヒットの数を数え上げる
int checkNumOfHit(std :: array<int, 4> x, std :: array<int, 4> y){
    int num = 0;
    for(int i = 0;i < 4;i++){
        if(x.at(i) == y.at(i)) num++;
    }
    return num;
}

//ブローの数を数え上げる
int checkNumOfBlow(std :: array<int, 4> x, std :: array<int, 4> y){
    int num = 0;
    for(int i = 0;i < x.size();i++){
        for(int j = 0;j < y.size();j++){
            if((i != j) && (x.at(i) == y.at(j))) num++;
        }
    }
    return num;
}
int main(){
    std :: array<int, 4> a, b;
    while(std :: cin >> a.at(0) >> a.at(1) >> a.at(2) >> a.at(3)>> b.at(0) >> b.at(1) >> b.at(2) >> b.at(3)){  
        std :: cout << checkNumOfHit(a, b) << " " << checkNumOfBlow(a, b) << std :: endl;
    }
}
