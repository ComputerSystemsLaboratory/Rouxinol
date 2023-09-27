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
void Output(const TList& List)
{
    TList::const_iterator It = List.begin();
    std::cout << *(It++);
    for(; It != List.end(); ++It){
        std::cout << " " << *It;
    }
    std::cout << std::endl;
}
void InsertSort(TList& Input)
{
    typedef TList::iterator TIt;
    TList Sorted;
    for(TIt i = Input.begin(); i != Input.end(); ++i){
        TIt l = std::lower_bound(Sorted.begin(), Sorted.end(), *i);
        Sorted.insert(l, *i);
        {
            TList Temp = Sorted;
            Temp.insert(Temp.end(), i+1, Input.end());
            Output(Temp);
        }
    }
    std::swap(Input, Sorted);
}
int main()
{
    TList List = Input();
    InsertSort(List);
}