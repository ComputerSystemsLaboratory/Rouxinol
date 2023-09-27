#include <iostream>

using namespace std;

int main (void){
    int x,i=1;
    do{
        cin >> x;
        if(x!=0)
            cout << "Case " << i << ": "<< x << endl;
        i++;
    }while(x!=0);
}

