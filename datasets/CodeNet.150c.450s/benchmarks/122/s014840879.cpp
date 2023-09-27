#include <iostream>
#include <set>

int main()
{
    std::cin.tie(0);
    std::ios::sync_with_stdio(false);
    std::multiset<int> S;
    while(1){
        std::string Command;
        std::cin >> Command;
        if(Command[0] == 'i'){
            int Value;
            std::cin >> Value;
            S.insert(Value);
        }else
        if(Command[1] == 'x'){
            std::set<int>::reverse_iterator It = S.rbegin();
            std::cout << *It << std::endl;
            S.erase(--(It.base()));
        }else{
            break;
        }
    }
    return 0;
}