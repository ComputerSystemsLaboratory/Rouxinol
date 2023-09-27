#include <iostream>
using namespace std;
int main(void){
    int S;
    cin >> S;
    cout << S/3600<< ":"<< S%3600/60 <<":" << S%3600%60;
    cout << endl;
   // Your code here!
}
