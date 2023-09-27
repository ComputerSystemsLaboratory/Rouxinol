#include <iostream>

void checkTringle(int a,int b,int c){
    if(a * a == b * b + c * c){
        std::cout << "YES" << std::endl;
    }else{
        std::cout << "NO" << std::endl;
    }
}

int main(int argc, char *argv[])
{
    int dataSize;
    std::cin >> dataSize;

    int side[3];

    for(int i=0; i<dataSize; i++){
        for(int a=0; a<3;a++){
            std::cin >> side[a];
        }

        for(int b = 0; b< 3; b++){
            for(int j=b+1; j<3;j++){
                if(side[b] > side[j]){
                    int tmp = side[b];
                    side[b] = side[j];
                    side[j] = tmp;
                }
            }
        }

        
        checkTringle(side[2],side[1],side[0]);
    }
}