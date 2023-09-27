#include <iostream>
#include <algorithm>
#include <vector>
typedef std::vector<int> TList;

TList Input()
{
    int Count;
    std::cin >> Count;
    TList List(Count);
    for(int i = 0; i < Count; ++i){
        std::cin >> List[i];
    }
    return List;
}
int Count(const TList& S, const TList& T)
{
    int Sum = 0;
    for(TList::const_iterator It = T.begin(); It != T.end(); ++It){
        Sum += std::find(S.begin(), S.end(), *It) != S.end() ? 1 : 0;
    }
    return Sum;
}
int main()
{
    TList S = Input();
    TList T = Input();
    std::cout << Count(S, T) << std::endl;
}