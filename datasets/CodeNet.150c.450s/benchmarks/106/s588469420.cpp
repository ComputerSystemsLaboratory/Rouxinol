#include <iostream>

using namespace std;

int main(){
    int first, last, trgt;
    cin >> first >> last >> trgt;

    int count = 0;
    for(int i=first; i<=last && i<=trgt; ++i)
    {
        if(trgt%i==0) count++;
    }

    cout << count << endl;
    
    return 0;
}
