#include <iostream>
#include <list>

typedef std::list<int> TList;
TList Input()
{
    TList List;
    int Count;
    std::cin >> Count;
    for(int i = 0; i < Count; ++i){
        int t;
        std::cin >> t;
        List.push_back(t);
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
void InsertSort(TList& List)
{
    typedef TList::iterator TIt;
    TIt i = List.begin();
    while(i != List.end()){
        TIt l = std::lower_bound(List.begin(), i, *i);
        List.insert(l, *i);
        i = List.erase(i);
        Output(List);
    }
}
int main()
{
    TList List = Input();
    InsertSort(List);
}