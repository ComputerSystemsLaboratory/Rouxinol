#include <iostream>
#include <algorithm>
 
int main(int argc, const char * argv[]) {
    std::string w, t;
    std::cin >> w;
    std::transform(w.begin(), w.end(), w.begin(), toupper);
    int cnt = 0;
    for ( ; std::cin >> t && t != "END_OF_TEXT"; ) {
        std::transform(t.begin(), t.end(), t.begin(), toupper);
        if (w == t) {
            cnt++;
        }
    }
    std::cout << cnt << std::endl;
    return 0;
}