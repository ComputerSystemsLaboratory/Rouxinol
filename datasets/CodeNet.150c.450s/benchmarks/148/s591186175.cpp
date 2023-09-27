#include <iostream>

using namespace std;

int main()
{
    int N = 0 , AC = 0 , WA = 0 , TLE = 0 , RE = 0;
    cin >> N;
    string S ;
    for(int i = 0 ; i < N ; ++i)
    {
        cin >> S ;
        if(S == "AC")
            AC++ ;
        else if (S == "WA")
            WA++;
        else if (S == "TLE")
            TLE ++ ;
        else
            RE++ ;
    }
    cout << "AC x " << AC << "\n"
         << "WA x " << WA << "\n"
         << "TLE x "<< TLE<< "\n"
         << "RE x " << RE << "\n" ;
    return 0;
}
