#include <cmath>
#include <cstdio>
#include <string>
#include <vector>
 
using namespace std;
 
#define MAX_LETTERS  12
 
const char Alphabet[5] = "ACGT";

const int power[MAX_LETTERS + 1] = { 1, 4, 16, 64, 256, 1024, 4096, 16384, 65536, 262144, 1048576, 4194304, 16777216 };
 
int cipher(string S)
{
    int Ans = 0;
    
    unsigned size_ = S.size();
 
    for (unsigned i = 0; i < size_; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (Alphabet[j] == S[i])
            {
                Ans += power[size_ - i - 1] * j;
            }
        }
    }
 
    return Ans;
}
 
int main()
{
    vector<vector<bool> > D;
 
    unsigned n;
 
    for (int i = 0; i <= MAX_LETTERS; i++)
    {
        D.push_back(vector<bool>(power[i], false));
    }
 
    scanf("%d", &n);
 
    vector<string> W;
 
    vector<bool> F(n);
 
    for (unsigned i = 0; i < n; i++)
    {
        char S1[20], S2[20];
 
        scanf("%s%s", &S1, &S2);
 
        if (S1[0] == 'f')
        {
            F[i] = true;
        }
 
        W.push_back(S2);
    }
 
    for (unsigned i = 0; i < n; i++)
    {
        if (F[i] == false)
        {
            D[W[i].size()][cipher(W[i])] = true;
        }
        else
        {
            printf("%s\n", (D[W[i].size()][cipher(W[i])] ? "yes" : "no"));
        }
    }
 
    return 0;
}