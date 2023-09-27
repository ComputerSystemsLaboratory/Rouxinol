#include <iostream>
#include <ctype.h>
 
int main(int argc, const char * argv[]) {
    std::string line;
    getline(std::cin, line);
    for (size_t i = 0; i < line.length(); i++) {
        if (islower(line[i])) {
            line[i] = toupper(line[i]);
        } else if (isupper(line[i])) {
            line[i] = tolower(line[i]);
        }
    }
    std::cout << line.c_str() << std::endl;
    return 0;
}