#include <iostream>
#include <string>
#include <map>

int main(){
    std::string inp;
    std::map<std::string, int> occ;
    std::string maxLen, maxOcc;
    while(std::cin >> inp){
        (occ[inp])++;
        if(occ[maxOcc] < occ[inp])
            maxOcc = inp;
        if(maxLen.size() < inp.size())
            maxLen = inp;
    }
    std::cout << maxOcc << ' ' << maxLen << std::endl;    
}