#include <iostream>

using namespace std;

#define LN 1000001
 
int main()
{
    int n;
    static int pn[LN];
    
    for (int i = 0; i < LN; i++){
        pn[i] = 1;
    }
    
    pn[0] = pn[1] = 0;
     
    for (int i = 2; i * i < LN; i++){
        if (pn[i] == 1){
            for (int j = i * i; j < LN; j += i){
                pn[j] = 0;
            }
        }
    }
     
    for (int i = 1; i < LN - 1; i++){
        pn[i + 1] += pn[i];
    }
     
    while (cin >> n){
        cout << pn[n] << endl;
    }
     
    return (0);
}