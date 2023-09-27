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
TInt BubbleSort(TList& List)
{
    TInt Count = 0;
    bool Flag = true;
    while(Flag){
        Flag = false;
        for(std::size_t i = 0; i+1 < List.size(); ++i)
        {
            if(List[i] > List[i+1]){
                std::swap(List[i], List[i+1]);
                Flag = true;
                Count++;
            }
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
    TInt Count = BubbleSort(List);
    Output(List);
    std::cout << Count << std::endl;
    return 0;
}