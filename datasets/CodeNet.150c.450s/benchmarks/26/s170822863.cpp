#include <iostream>
using namespace std;
void comp(int a, int b)
{
    if(a < b){
        cout << "a < b" << endl;
    }else
    if(a > b){
        cout << "a > b" << endl;
    }else{
        cout << "a == b" << endl;
    }

}
int main(void){
    int x, y;
    cin >> x >> y;
    comp(x, y);
    return 0;
}