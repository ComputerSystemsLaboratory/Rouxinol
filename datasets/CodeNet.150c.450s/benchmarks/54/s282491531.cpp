#include <iostream>
#include <string>
#include <vector>

int main()
{
    std::string neoword,word,x,y;
    std::cin >> word;
    int counter = 0;
    for(char z : word){
        char neoz = toupper(z);
        neoword.push_back(neoz);
    }
    while(std::cin >> x){
        if(x == "END_OF_TEXT")break;
        y.clear();
        for(char a :x){
            char b = toupper(a);
            y.push_back(b);
        }
        if(y == neoword){
            counter++;
        }
    }
        std::cout <<counter<<std::endl;
    return 0;
}