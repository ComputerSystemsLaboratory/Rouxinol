#include <iostream>
#include <algorithm>
#include <vector>

int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    int n;
    std::cin >> n;
    std::vector<bool> s(13, true), h(13, true), c(13, true), d(13, true);
    for(int i=0; i<n; ++i){
        char suit;
        int rank;
        std::cin >> suit >> rank;
        switch(suit){
            case 'S': s[rank-1]=false; break;
            case 'H': h[rank-1]=false; break;
            case 'C': c[rank-1]=false; break;
            case 'D': d[rank-1]=false; break;
        }
    }
    for(int i=0; i<13; ++i) if(s[i]) std::cout << "S " << i+1 << "\n";
    for(int i=0; i<13; ++i) if(h[i]) std::cout << "H " << i+1 << "\n";
    for(int i=0; i<13; ++i) if(c[i]) std::cout << "C " << i+1 << "\n";
    for(int i=0; i<13; ++i) if(d[i]) std::cout << "D " << i+1 << "\n";
    return 0;
}