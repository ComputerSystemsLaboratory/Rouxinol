#include <iostream>
#include <string>
#include <map>
std::map<std::string,int> t;
int main(){
    int n;std::cin>>n;
    while(n--){
        std::string s;std::cin>>s;
        ++t[s];
    }
    std::cout<<"AC x "<<t["AC"]<<'\n'<<"WA x "<<t["WA"]<<'\n'<<"TLE x "<<t["TLE"]<<'\n'<<"RE x "<<t["RE"]<<'\n';
    return 0;
}