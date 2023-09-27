#include <iostream>
#include <string>


int main()
{
    int taro = 0;
    int hana = 0;
    int n;
    std::cin >> n;
    for(int i = 0; i < n; i++){
        std::string t;
        std::string h;
        std::cin >> t >> h;
        if(t < h){
            hana += 3;
        }else
        if(t > h){
            taro += 3;
        }else{
            hana += 1;
            taro += 1;
        }
    }
    std::cout << taro << " " << hana << std::endl;
    return 0;
}