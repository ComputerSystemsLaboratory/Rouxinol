#include <iostream>
using namespace std;

int main(){
    int i=0,j=0,k=0,tmp=0;
    while(cin >> tmp){
        if (tmp > i)
        {
            k = j;
            j = i;
            i = tmp;
        }
        else if (tmp > j)
        {
            k = j;
            j = tmp;
        }
        else if (tmp > k)
        {
            k = tmp;
        }
    }
    cout << i << endl << j << endl << k << endl;
    return 0;
}