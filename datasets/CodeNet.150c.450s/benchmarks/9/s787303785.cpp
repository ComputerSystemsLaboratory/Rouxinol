#include <iostream>
#include <string>

std::string Shuffle(const std::string& s, int h)
{
    int l = s.length();
    return s.substr(h, l - h) + s.substr(0, h);
}
std::string Shuffle(std::string s, std::istream& in)
{
    int m;
    in >> m;
    for(int i = 0; i < m; ++i){
        int h;
        in >> h;
        s = Shuffle(s, h);
    }
    return s;
}

int main()
{
    std::string s;
    std::cin >> s;
    for(; s != "-"; std::cin >> s){
        std::cout << Shuffle(s, std::cin) << std::endl;
    }
    return 0;
}