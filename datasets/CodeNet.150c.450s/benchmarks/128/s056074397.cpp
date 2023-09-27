#include <iostream>
using namespace std;
int main(void){
    std::string s;
    std::string::iterator iterator_s;
    cin >> s;
    for(std::string::reverse_iterator it=s.rbegin();it != s.rend(); ++it) 
        std::cout << *it ;
    std::cout << "\n";
    return 0;
}