#include <iostream>
#include <algorithm>
#include <vector>
typedef int TInt;
typedef std::vector<TInt> TList;
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
TInt SelectionSort(TList& List)
{
    typedef TList::iterator TIt;
    TInt Count = 0;
    for(TIt It = List.begin(); It != List.end(); ++It){
        TIt Min = std::min_element(It, List.end());
        if(It != Min){
            std::swap(*It, *Min);
            ++Count;
        }
    }
    return Count;
}

void Output(const TList& List)
{
    TList::const_iterator It = List.begin();
    std::cout << *(It++);
    for(; It != List.end(); ++It){
        std::cout << " " << *It;
    }
    std::cout << std::endl;
}
int main()
{
    TList List = Input();
    TInt Count = SelectionSort(List);
    Output(List);
    std::cout << Count << std::endl;
    return 0;
}