#include <iostream>
using namespace std;
int main(void){
    int sec = 0, min = 0, hour = 0;
    cin >> sec;
    
    hour = sec / ( 60*60 );
    min = ( sec % ( 60*60 ) ) / 60;
    sec = ( sec % ( 60*60 ) ) % 60;
    
    cout << hour << ":" << min << ":" << sec << endl;
}