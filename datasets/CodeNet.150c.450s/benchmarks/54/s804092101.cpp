#include <iostream>
#include <string>
#include <algorithm>

int main(){
    int tes=0;
    std::string str,g,h;
    std::cin >> g;
    while(true){
        std::cin >> h;
        if(h=="END_OF_TEXT")break;
        std::transform(h.begin(), h.end(), h.begin(), ::tolower);
        if(g==h)tes++;
    }
    std::cout << tes << std::endl;
    return 0;
}