#include <iostream>
int main(){
    int b,f,r,v,n;
    int x[4][3][10] = {0};
    std::cin >> n;
    for(int a = 0;a < n;a++){
        std::cin >> b >> f >> r >> v;
        x[b - 1][f - 1][r - 1] = x[b - 1][f - 1][r - 1] + v;
    }
    for(int amatukaze = 0;amatukaze < 3;amatukaze++){
        for(int kagerou = 0;kagerou < 10;kagerou++){
            std::cout <<" ";
            std::cout << x[0][amatukaze][kagerou];
        }
        std::cout << std::endl;
    }
    std::cout <<"####################"<<std::endl;
    for(int yukikaze = 0;yukikaze < 3;yukikaze++){
        for(int siranui = 0;siranui < 10;siranui++){
            std::cout <<" ";
            std::cout << x[1][yukikaze][siranui];
        }
        std::cout << std::endl;
    }
    std::cout <<"####################"<<std::endl;
    for(int nowaki = 0;nowaki < 3;nowaki++){
        for(int kurosio = 0;kurosio < 10;kurosio++){
            std::cout <<" ";
            std::cout <<x[2][nowaki][kurosio];
        }
        std::cout << std::endl;
    }
    std::cout <<"####################"<<std::endl;
    for(int isokaze = 0;isokaze < 3;isokaze++){
        for(int arasi = 0;arasi < 10;arasi++){
            std::cout <<" ";
            std::cout <<x[3][isokaze][arasi];
        }
        std::cout << std::endl;
    }
}