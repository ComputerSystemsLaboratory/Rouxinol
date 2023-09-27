#include <iostream>
using namespace std;
int main(void){
    int s;
    cin >>s;
    cout << s/(60*60);
    cout <<":";
    s=s%(60*60);
    cout <<s/60;
    cout <<":";
    cout <<s%60 <<endl;
    
}

