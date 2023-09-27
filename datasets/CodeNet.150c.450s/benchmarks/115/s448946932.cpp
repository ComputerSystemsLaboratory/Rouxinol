#include <cstdio>
#include <cstring>
#include <algorithm>

#define SIZE 1010
class TLcsSolver
{
    int FTable[SIZE][SIZE];
    const char* FArray1;
    const char* FArray2;
    const int Fn1;
    const int Fn2;

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
        for(std::size_t i = 1; i < Fn1; ++i){
            for(std::size_t j = 1; j < Fn2; ++j){
                FTable[i][j] = Count(i, j);
            }
        }
    }
    void Print()const
    {
        for(std::size_t i = 0; i < Fn1; ++i){
            for(std::size_t j = 0; j < Fn2; ++j){
                printf("%d\t", FTable[i][j]);
            }
            printf("\n");
        }
    } 
public:
    TLcsSolver(const char* a, const char* b)
     : FArray1(a), FArray2(b)
     , Fn1(std::strlen(a)), Fn2(std::strlen(b))
    {
        Solve();
        // Print();
    }
    int Answer()const
    {
        return FTable[Fn1-1][Fn2-1];
    }
};

int main()
{
    int n;
    std::scanf("%d\n", &n);
    char a[SIZE];
    char b[SIZE];
    for(int i = 0; i < n; ++i){
        std::fgets(a, SIZE, stdin);
        std::fgets(b, SIZE, stdin);
        std::printf("%d\n", TLcsSolver(a, b).Answer());
    }
    return 0;
}