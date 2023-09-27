#include <iostream>
#include <map>


int main()
{
    int n;
    char d1, d2;
    std::map<char, char> data;
    while(std::cin >> n){
        data.clear();
        if(n == 0){
            break; 
        }
        for(int i = 0; i < n; ++i){
            std::cin >> d1 >> d2;
            data.insert(std::map<char, char>::value_type(d1, d2));
        }

        std::string out;
        std::cin >> n;
        std::map<char, char>::iterator it;
        for(int i = 0; i < n; ++i){
            std::cin >> d1;
            it = data.find(d1);
            if(it == data.end()){
                out += d1; 
            }
            else {
                out += data[d1];
            }
        }
        std::cout << out << std::endl;
    }
}