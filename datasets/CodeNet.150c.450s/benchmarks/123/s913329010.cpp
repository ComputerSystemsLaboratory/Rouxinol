#include <cmath>
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
// ?????????????????°??????????????????
struct TIsDivisibility
{
    const TInt FValue;
    TIsDivisibility(const TInt& Value)
     : FValue(Value){}
    bool operator()(TInt Prime)
    {
        return FValue % Prime == 0;
    }
};
bool IsPrime(TInt Value, const TList& Prime)
{
    TInt Max = std::sqrt(Value);
    for(TList::const_iterator It = Prime.begin();
        It != Prime.end() && *It <= Max;
        ++It)
    {
        if(Value % (*It) == 0) return false;
    }
    return true;
}
TList GetPrimeList(TInt Max)
{
    TList Prime;
    Prime.reserve(Max);
    Prime.push_back(2);
    for(TInt i = 3; i <= Max; i += 2){
        if(IsPrime(i, Prime)){
            Prime.push_back(i);
        }
    }
    return Prime;
}
struct TIsPrimeFullList
{
    const TList& FPrime;
    TIsPrimeFullList(const TList& PrimeFullList)
     : FPrime(PrimeFullList){}
    bool operator()(const TInt& Value)
    {
        return std::binary_search(FPrime.begin(), FPrime.end(), Value);
    }
};
struct TIsPrimeRootList
{
    const TList& FPrime;
    TIsPrimeRootList(const TList& PrimeRootList)
     : FPrime(PrimeRootList){}
    bool operator ()(const TInt& Value)
    {
        return IsPrime(Value, FPrime);
    }
};
void Output(const TList& List)
{
    for(TList::const_iterator It = List.begin();
        It != List.end();
        ++It)
    {
        std::cout << *It << std::endl;
    }
}
int main()
{
    TList Values = Input();
    std::sort(Values.begin(), Values.end());
    TInt Max = *Values.rbegin();
    // std::cout << "Max:" << Max << std::endl;
    TList::iterator Root = std::lower_bound(Values.begin(), Values.end(), std::sqrt(Max));
    // std::cout << "Root" << *Root << std::endl;
    TList Prime = GetPrimeList(*Root);
    // Output(Prime);
    // std::cout << "Size:" << Prime.size() << std::endl;
    int Count = std::count_if(Values.begin(), Root, TIsPrimeFullList(Prime));
    Count += std::count_if(Root, Values.end(), TIsPrimeRootList(Prime));
    std::cout << Count << std::endl;
    return 0;
}