#include <iostream>
using namespace std;
int main(void){
    
    int n,i;
    int x[101];
    
    cin  >>  n;
    for(i=0;i<n;i++)cin >> x[i];
    
    cout << x[n-1];
    for(i=n-2;i>=0;i--)cout << " " << x[i];
    
    cout << endl;
    
    return 0;
    
}
