#include <iostream>
#include <string>

int main(){
    int m;
    int ap=0;
    int bp=0;
    std::string a,b;
    std::cin >> m;
    for(int n=0;n<m;n++){
        std::cin >> a >> b;
        if(a>b)ap+=3;
        if(a<b)bp+=3;
        if(a==b){ap+=1;bp+=1;}
    }
    std::cout << ap << " " << bp << std::endl;
    return 0;
}