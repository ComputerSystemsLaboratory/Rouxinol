#include <set>
#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    string S; int n;
    
    set<string> T;
    
    scanf("%d", &n);
    
    while(n--)
    {
        cin >> S;
        
        int c = 0;
        
        for(int i = 1; i < S.size(); i++)
        {
            c += (S[i - 1] == S[i] ? 1 : 0);
        }
        
        if(c + 1 == S.size())
        {
            printf("1\n");
        }
        else
        {
            T.clear();
            
            for(int j = 1; j < S.size(); j++)
            {
                string A = S.substr(0, j);
                string B = S.substr(j, S.size() - j);
                
                string C = A; reverse(C.begin(), C.end());
                string D = B; reverse(D.begin(), D.end());
                
                T.insert(A + B);
                T.insert(B + A);
                T.insert(A + D);
                T.insert(D + A);
                T.insert(C + B);
                T.insert(B + C);
                T.insert(C + D);
                T.insert(D + C);
            }
            
            printf("%d\n", T.size());
        }
    }
    
    return 0;
}