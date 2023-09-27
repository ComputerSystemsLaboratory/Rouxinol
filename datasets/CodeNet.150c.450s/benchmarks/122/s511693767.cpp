#include <cstdio>
#include <queue>

int main()
{
    char Command[8];
    int Value;

    std::priority_queue<int> S;
    while(1){
        std::scanf("%s", Command);
        if(Command[0] == 'i'){
            std::scanf("%d", &Value);
            S.push(Value);
        }else
        if(Command[1] == 'x'){
            std::printf("%d\n", S.top());
            S.pop();
        }else{
            break;
        }
    }
    return 0;
}