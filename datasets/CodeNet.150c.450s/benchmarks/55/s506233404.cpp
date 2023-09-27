#include <string>
#include <iostream>

using namespace std;

int main()
{
    string S;
    
    cin >> S;
    
    if(S != "0")
    {
        int A = 0;
        
        for(int i = 0; i < S.size(); i++)
        {
            A += S[i] - 48;
        }
        
        cout << A << endl;
        
        main();
    }
    
    return 0;
}