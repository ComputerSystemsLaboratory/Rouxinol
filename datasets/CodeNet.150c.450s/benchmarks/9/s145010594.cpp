#include <iostream>
#include <string>
#include <algorithm>

int main(){
    int m,n;
    std::string str,tes;
    while(true){
    std::cin >> str >> m;
    if(str=="-")break;
    for(int a=0;a<m;a++){
        std::cin >> n;
        tes=str.substr(0,n);
        str.erase(str.begin(), str.begin()+n);
        str += tes;

    }
    std::cout << str << std::endl;
    }
    return 0;
}