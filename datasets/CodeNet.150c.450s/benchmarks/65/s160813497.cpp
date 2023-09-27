#include <iostream>
#include <algorithm>
#include <vector>
struct TCard
{
    char Suit;
    int  Num;
    bool operator==(const TCard& C)const
    {
        return Suit == C.Suit && Num == C.Num;
    }
};
typedef std::vector<TCard> TList;
TList Input()
{
    int Count;
    std::cin >> Count;
    TList List(Count);
    for(int i = 0; i < Count; ++i){
        std::cin >> List[i].Suit;
        std::cin >> List[i].Num;
    }
    return List;
}
bool Compare(const TCard& Left, const TCard& Right)
{
    return Left.Num < Right.Num;
}

int BubbleSort(TList& List)
{
    int Count = 0;
    bool Flag = true;
    while(Flag){
        Flag = false;
        for(std::size_t i = 0; i+1 < List.size(); ++i)
        {
            if(List[i].Num > List[i+1].Num){
                std::swap(List[i], List[i+1]);
                Flag = true;
                Count++;
            }
        }
    }
    return Count;
}

int SelectionSort(TList& List)
{
    typedef TList::iterator TIt;
    int Count = 0;
    for(TIt It = List.begin(); It != List.end(); ++It){
        TIt Min = std::min_element(It, List.end(), Compare);
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
    std::cout << It->Suit << It->Num;
    for(++It; It != List.end(); ++It){
        std::cout << " " << It->Suit << It->Num;
    }
    std::cout << std::endl;
}
void Check(const TList& List, const TList& Stable)
{
    if(std::equal(List.begin(), List.end(), Stable.begin())){
        std::cout << "Stable" << std::endl;
    }else{
        std::cout << "Not stable" << std::endl;
    }
}
int main()
{
    const TList List = Input();
    TList StableList = List;
    std::stable_sort(StableList.begin(), StableList.end(), Compare);

    TList BubbleList = List;
    BubbleSort(BubbleList);
    Output(BubbleList);
    Check(BubbleList, StableList);
    
    TList SelectionList = List;
    SelectionSort(SelectionList);
    Output(SelectionList);
    Check(SelectionList, StableList);
    return 0;
}