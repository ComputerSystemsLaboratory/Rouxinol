#include <iostream>
using namespace std;

int main(){
    int i = 0;
    int x[25565] = {0};
    int y[25565] = {0};
    do{
        cin >> x[i] >> y[i];
        i = i + 1;
    }while(x[i-1] != 0 || y[i-1] != 0);
    i = 0;
    do{
        if(x[i] != 0 || y[i] != 0){
            if(x[i] <= y[i]){
                cout << x[i] << " " << y[i] << endl;
            }else if(x[i] > y[i]){
                cout << y[i] << " " << x[i] << endl;
            }
        }
        i = i + 1;
    }while(x[i-1] != 0 || y[i-1] != 0);
}