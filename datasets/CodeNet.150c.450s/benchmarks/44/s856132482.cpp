#include <iostream>
#include <string>
using namespace std;
 
int main()
{
    int a[4],b[4],i,j,hit,blow;
    while(cin >> a[0]){
        for (i = 1 ; i < 4 ; i++){
            cin >> a[i];
        }
        for(i = 0 ; i < 4 ; i++){
            cin >> b[i];
        }
        hit = 0;
        blow = 0;
        for(i = 0 ; i < 4 ; i++){
            if(a[i] == b[i]){
                hit++;
            } else {
                for(j = 0 ; j < 4 ; j++){
                    if(a[i] == b[j]){
                        blow++;
                    }
                }
            }
             
        }
        cout << hit << " " << blow << endl;
    }
    return 0;
}