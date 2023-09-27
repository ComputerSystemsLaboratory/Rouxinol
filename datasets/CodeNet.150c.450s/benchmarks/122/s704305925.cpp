#include <cstdio>
#include <set>

int main()
{
    char Command[8];
    int Value;

    std::multiset<int> S;
    while(1){
        std::scanf("%s", Command);
        if(Command[0] == 'i'){
            std::scanf("%d", &Value);
            S.insert(Value);
        }else
        if(Command[1] == 'x'){
            std::set<int>::reverse_iterator It = S.rbegin();
            std::printf("%d\n", *It);
            S.erase(--(It.base()));
        }else{
            break;
        }
    }
    return 0;
}