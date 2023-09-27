#include <iostream>
#include <string>
#include <queue>

struct TProcess
{
    std::string Name;
    int Time;
};
typedef std::queue<TProcess> TProcessList;
TProcessList InputProcessList(std::istream& Input, int N)
{
    TProcessList List;
    for(int i = 0; i < N; ++i){
        TProcess P;
        Input >> P.Name >> P.Time;
        List.push(P);
    }
    return List;
}
int main()
{
    int N, Q;
    std::cin >> N >> Q;
    int Time = 0;
    TProcessList List = InputProcessList(std::cin, N);
    while(List.empty() == false){
        TProcess P = List.front(); List.pop();
        if(P.Time <= Q){
            Time += P.Time;
            std::cout << P.Name << " " << Time << std::endl;            
        }else{
            Time += Q;
            P.Time -= Q;
            List.push(P);
        }
    }
}