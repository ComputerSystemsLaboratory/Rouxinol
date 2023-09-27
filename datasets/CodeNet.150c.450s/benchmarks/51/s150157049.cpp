#include <iostream>

using namespace std;

int main()
{
    int S[31]={0};
    int tmp;

    for(int i=0; i<28; ++i) {
        cin >> tmp;
        S[tmp]=1;
    }
    for(int i=1; i<=30; ++i) {
        if(S[i]==0) {
            cout << i << endl;
        }
    }
    return 0;
}