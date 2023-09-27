#include <iostream>

int main() {
    int co,b,f,r,v;
	int n[5][4][11]={0};
    std::cin >> co;
    for(int con=0;con<co;con++){
        std::cin >> b >> f >> r >> v;
        n[b][f][r]=v+n[b][f][r];
    }
    for(int bc=1;bc<5;bc++){
        for(int fc=1;fc<4;fc++){
            for(int rc=1;rc<11;rc++){
                std::cout << " " <<n[bc][fc][rc];
            }
            std::cout << std::endl;
        }
        if(bc<4)std::cout << "####################" << std::endl;
    }
	return 0;
}