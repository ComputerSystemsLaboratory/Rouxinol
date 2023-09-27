#include<iostream>

int main(){
    int m,f,r;
    std::string c;
    while(1){
        std::cin >> m >> f >> r;
        if(m==-1 && f==-1 && r==-1) break;
        if(m==-1 || f==-1){
            c= "F";
        }else if(m+f>=80) {
            c="A";
        }else if(m+f>=65) {
            c="B";
        }else if(m+f>=50) {
            c="C";
        }else if(m+f>=30) {
            if(r>=50) c="C";
            else c="D";
        }else {
            c="F";
        }
        std::cout << c << std::endl;
    }
    return 0;
}