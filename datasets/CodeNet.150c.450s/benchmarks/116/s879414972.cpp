#include <iostream>

using namespace std;
int main()
{
    while(true){
        int i, k;
        cin >> i;
        cin >> k;
        if( i == 0 && k == 0)
            break;
        int a[i], b[i];
        
        for(int j = 0 ; j < i ; j++)
            cin >> a[j];
        
        b[0] = a[0];
        for(int j = 0 ; j < i-1 ; j++)
            b[j+1] = b[j] + a[j+1];
        
        int N = b[k-1];
        for(int j = 0 ; j < i-k ; j++){
            if( b[j+k] - b[j] > N ){
                N = b[j+k] - b[j];
            }
        }
        
        cout << N <<endl;
    }
}