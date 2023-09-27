#include <iostream>
using namespace std;
int main(void){
    int a,b,c;
    string str;
    std::cin >> a>>b>>c;
    
    if(b<c){
        if(a<b)
        str="Yes";
        else
        str="No";
    }
    else 
    str="No";
    std::cout << str << std::endl;
}
