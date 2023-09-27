#include <cstdio>
#include <cstring>
#include <algorithm>

#define SIZE 1002
int Table[SIZE][SIZE];
char a[SIZE];
char b[SIZE];
int n1;
int n2;

int Count(int i, int j)
{
    if(i == 0 || j == 0) return 0;
    if(a[i-1] == b[j-1]){
        return Table[i-1][j-1] + 1;
    }
    return std::max(Table[i-1][j], Table[i][j-1]);
}
int Solve()
{
    n1 = std::strlen(a);
    n2 = std::strlen(b);
    for(std::size_t i = 1; i < n1; ++i){
        for(std::size_t j = 1; j < n2; ++j){
            Table[i][j] = Count(i, j);
        }
    }
    return Table[n1-1][n2-1];
    
}

int main()
{
    int n;
    std::scanf("%d\n", &n);
    for(int i = 0; i < n; ++i){
        std::fgets(a, SIZE, stdin);
        std::fgets(b, SIZE, stdin);
        std::printf("%d\n", Solve());
    }
    return 0;
}