#include <set>
#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    string S; int n;
    
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++)
    {
        cin >> S;
        
        set<string> T;
        
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
    
    return 0;
}