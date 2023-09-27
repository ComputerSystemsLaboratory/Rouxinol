#include <iostream>
#include <algorithm>
#include <cctype>

int main() {
        std::string w, t;
        int count = 0;

        std::cin >> w;
        transform (w.begin(), w.end(), w.begin(), tolower);

        while(true){
                std::cin >> t;
                if(t == "END_OF_TEXT") break;
                transform (t.begin(), t.end(), t.begin(), tolower);
                if(w == t) count++;
        }

        std::cout << count << std::endl;
}