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
    int diff = int('a') - int('A');
    if (ascii >= int('A') && ascii <= int('Z')) {
        ascii += diff;
    } else if (ascii >= ('a') && ascii <= ('z')) {
        ascii -= int('a') - int('A');
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