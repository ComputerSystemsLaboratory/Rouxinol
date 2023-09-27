#include <iostream>
using namespace std;
int main(){
    int i = 1;
    int a;
    do{
        cin >> a;
        if (a != 0){
            cout << "Case " << i << ": " << a << endl;
            i++;
        }
    } while (a!=0);
}