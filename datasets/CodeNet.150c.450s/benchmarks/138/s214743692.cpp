#include <cmath>
#include <iostream>
#include <algorithm>
#include <vector>
typedef long long int TInt;
typedef std::vector<TInt> TList;
TList GetDivisor(TInt X)
{
    TList Divisor;
    TInt Max = std::sqrt(X);
    for(TInt i = 1; i <= Max; ++i){
        if(X % i == 0){
            Divisor.push_back(i);
            if(i != Max){
                Divisor.push_back(X / i);
            }
        }
    }
    return Divisor;
}
template<typename T>
std::vector<T> Unite(const std::vector<T>& A, const std::vector<T>& B)
{
    std::vector<T> Temp = A;
    Temp.insert(Temp.end(), B.begin(), B.end());
    return Temp;
}
template<typename T>
T GetGreatestCommon(const std::vector<T>& A, const std::vector<T>& B)
{
    std::vector<T> Temp = Unite(A, B);
    std::sort(Temp.begin(), Temp.end());
    return *(std::adjacent_find(Temp.rbegin(), Temp.rend()));
}
int main()
{
    TInt x, y;
    std::cin >> x;
    std::cin >> y;
    if(x < y) std::swap(x, y);
    x = x % y;
    if(x == 0){
        std::cout << y << std::endl;
        return 0;
    }
    
    TList DivisorX = GetDivisor(x);
    TList DivisorY = GetDivisor(y);
    TInt A = GetGreatestCommon(DivisorX, DivisorY);
    std::cout << A << std::endl;
    
    return 0;
}