#include<iostream>
#include<map>
#include<vector>

int main(void){
    std::vector<int> ns(1500), ms(1500);
    std::map<int, int> nc, mc;
    while(1){
        int nl, ml;
        std::cin >> nl >> ml;
        if(nl == 0 || ml == 0) break;
        for(int i = 0; i != nl; i++) std::cin >> ns[i];
        for(int i = 0; i != ml; i++) std::cin >> ms[i];
        nc.clear(); mc.clear();
        for(int i = 0; i != nl; i++)
            for(int acc = 0, j = i; j != nl; j++){
                acc+=ns[j];
                nc[acc]++;
            }
        for(int i = 0; i != ml; i++)
            for(int acc = 0, j = i; j != ml; j++){
                acc+=ms[j];
                mc[acc]++;
            }
        int r = 0;
        for(std::map<int, int>::iterator it = nc.begin(); it != nc.end(); it++)
            r += (*it).second * mc[(*it).first];
        std::cout << r << std::endl;
    }
    return 0;
}