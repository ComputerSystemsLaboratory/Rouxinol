#include <iostream>
#include <cstdlib>
#include <string>

void alphabetCase(char &moji); 
void change(std::string &str); 

int main(void) {
    std::string target;
    std::getline(std::cin, target);
    change(target);
    std::cout << target << std::endl;

    return EXIT_SUCCESS;
}

void alphabetCase(char &c) {
    int ascii = (int)(c);
    if (ascii >= 65 && ascii <= 90) {
        ascii += 32;
    } else if (ascii >= 97 && ascii <= 122) {
        ascii -= 32;
    }
    c = (char)(ascii);
    return; 
}

void change(std::string &str) {
    int size = (int)(str.size());
    for (int loop = 0; loop < size; loop++) {
        alphabetCase(str[loop]);     
    }
    return;
}