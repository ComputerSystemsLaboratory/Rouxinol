#include <iostream>
#include <string>

int compare(std::string a, std::string b)
{
    for(int i = 0; i < a.size() && b.size(); ++i){
        if(a[i] > b[i]) return 1;
        if(a[i] < b[i]) return -1;
    }
    if(a.size() == b.size()) return 0;
    if(a.size() >  b.size()) return 1;
    return -1;
}

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
        if(compare(t,h) < 0){
            hana += 3;
        }else
        if(compare(t,h) > 0){
            taro += 3;
        }else{
            hana += 1;
            taro += 1;
        }
    }
    std::cout << taro << " " << hana << std::endl;
    return 0;
}