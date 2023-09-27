#include <iostream>
using namespace std;

int main()
{
    int iNumA = 0;
    int iNumB = 0;
    int iNumC = 0;
    
    cin >> iNumA >> iNumB >> iNumC;
    
    if ((iNumA < iNumB) && (iNumB < iNumC))
    {
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
    
    return 0;
}

