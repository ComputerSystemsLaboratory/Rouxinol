#include <cstdio>
#include <cstdlib>
#include <queue>

int main()
{
    char Line[19];
    int Value;

    std::priority_queue<int> S;
    while(1){
        std::fgets(Line, 19, stdin);
        if(Line[0] == 'i'){
            S.push(std::atoi(&Line[7]));
        }else
        if(Line[1] == 'x'){
            std::printf("%d\n", S.top());
            S.pop();
        }else{
            break;
        }
    }
    return 0;
}