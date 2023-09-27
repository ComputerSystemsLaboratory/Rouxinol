#include <cassert>
#include <algorithm>
#include <iostream>
#include <vector>
#include <string>

class TLcsSolver
{
    typedef std::vector<std::vector<int> > TTable;
    TTable FTable;
    std::string FArray1;
    std::string FArray2;

    int Count(int i, int j)
    {
        if(i == 0 || j == 0) return 0;
        if(FArray1[i-1] == FArray2[j-1]){
            return FTable[i-1][j-1] + 1;
        }
        return std::max(FTable[i-1][j], FTable[i][j-1]);
    }
    void Solve()
    {
        for(std::size_t i = 1; i < FTable.size(); ++i){
            for(std::size_t j = 1; j < FTable[i].size(); ++j){
                FTable[i][j] = Count(i, j);
            }
        }
    }
public:
    TLcsSolver(const std::string& a, const std::string& b)
     : FArray1(a), FArray2(b)
     , FTable(a.size()+1, std::vector<int>(b.size()+1, 0))
    {
        Solve();
        // Print();
    }
    int Answer()const
    {
        return FTable[FArray1.size()][FArray2.size()];
    }
    void Print()const
    {
        for(std::size_t i = 0; i < FTable.size(); ++i){
            for(std::size_t j = 0; j < FTable[i].size(); ++j){
                std::cout << FTable[i][j] << '\t';
            }
            std::cout << '\n';
        }
    } 
};

int main()
{
    int n;
    std::cin >> n;
    for(int i = 0; i < n; ++i){
        std::string a, b;
        std::cin >> a >> b;
        std::cout << TLcsSolver(a, b).Answer() << std::endl;
    }
    return 0;
}