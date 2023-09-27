#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {

    string Ta,Tb;
    int num,Pa=0,Pb=0;

    cin >> num;

    for(int i=0;i<num;i++){
        cin>>Ta >> Tb;

        if (Ta>Tb) Pa+=3;
        else if (Ta<Tb) Pb+=3;
        else
        {
            Pa++;
            Pb++;
        }
    }
    cout << Pa << " " << Pb << endl;
    return 0;
}