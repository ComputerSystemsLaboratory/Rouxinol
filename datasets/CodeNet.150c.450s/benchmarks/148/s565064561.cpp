#include <iostream>
#include <string.h>

int main(){

    int num = 0;
    std::cin >> num;
    if (num <= 0) return 0;
  
    std::string *array;
    array = new std::string[num];
    for(int i = 0; i < num; i++){
        std::cin >> array[i];
    }

    int ac = 0;
    int wa = 0;
    int tle = 0;
    int re = 0;
    
    for(int i = 0; i < num; i++){
        if(array[i] == "AC"){
            ac++;
        }else if(array[i] == "WA"){
            wa++;
        }else if(array[i] == "TLE"){
            tle++;
        }else if(array[i] == "RE"){
            re++;
        }
    }
  
    std::cout << "AC x " << ac << std::endl;
    std::cout << "WA x " << wa << std::endl;
    std::cout << "TLE x " << tle << std::endl;
    std::cout << "RE x " << re << std::endl;
  
    delete[] array;
}
