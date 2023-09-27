#include <iostream>

void Game(int round, std::istream& in, std::ostream& out)
{
    int scoreA = 0;
    int scoreB = 0;
    for(int i = 0; i < round; ++i){
        int a, b;
        in >> a >> b;
        if(a > b){
            scoreA += a + b;
        }else
        if(a < b){
            scoreB += a + b;
        }else{
            scoreA += a;
            scoreB += b;
        }
    }
    out << scoreA << " " << scoreB << std::endl;
}

int main()
{
    int n;
    std::cin >> n;
    while(n){
        Game(n, std::cin, std::cout);
        std::cin >> n;
    }
    return 0;
}