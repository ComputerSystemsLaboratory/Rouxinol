#include <iostream>
#include <algorithm>
#include <vector>

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    while(true){
        int m, f, r;
        std::cin >> m >> f >> r;
        if(m==-1 && f==-1 && r==-1) break;
        char rank;
        if(m==-1 || f==-1) rank = 'F';
        else if(m+f>=80)   rank = 'A';
        else if(m+f>=65)   rank = 'B';
        else if(m+f>=50)   rank = 'C';
        else if(m+f>=30){
            if(r>=50)      rank = 'C';
            else           rank = 'D';
        }
        else               rank = 'F';
        std::cout << rank << "\n";
    }
    return 0;
}