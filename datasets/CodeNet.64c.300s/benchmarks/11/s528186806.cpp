#include <iostream>
using namespace std;
int main(void){
    int S,h,m,s;
    cin >> S;
    s = S%60;
    m = ((S - s)/60)%60;
    h = (S - s - m*60)/3600;
    cout << h << ":"<< m << ":"<< s<< endl;
    return 0;
}
