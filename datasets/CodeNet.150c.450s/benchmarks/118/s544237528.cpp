#include <iostream>

using namespace std;

int main(){
    int n,y,m,d;
    cin >> n;

    for(int i=0; i<n; i++){
        cin >> y >> m >> d;
        int toBD =(y-1)*195 +((y-1)/3)*5 +(m-1)*20 +d -1;
        if(y%3!=0) toBD -= (m-1)/2;
        
        cout << 196470 - toBD << endl;
    }
    
    return 0;
}