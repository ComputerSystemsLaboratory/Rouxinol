#include <string>
#include <iostream>

using namespace std;

int main()
{
    string S, P;
    
    cin >> S >> P;
    
    S += S;
    
    cout << (S.find(P) != string::npos ? "Yes" : "No") << endl;
    
    return 0;
}