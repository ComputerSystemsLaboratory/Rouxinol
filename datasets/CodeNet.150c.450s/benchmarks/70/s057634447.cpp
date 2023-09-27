#include<iostream>
using namespace std;

int main(){
    int m, d;
    int days[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int mod;
    cin >> m >> d;
    while(m){
        for(int i=m-2;i>=0;i--){
            d += days[i];
        }
        mod = d % 7;
        if(mod == 0){
            cout << "Wednesday" << endl;
        }else if(mod == 1){
            cout << "Thursday" << endl;
        }else if(mod == 2){
            cout << "Friday" << endl;
        }else if(mod == 3){
            cout << "Saturday" << endl;
        }else if(mod == 4){
            cout << "Sunday" << endl;
        }else if(mod == 5){
            cout << "Monday" << endl;
        }else if(mod == 6){
            cout << "Tuesday" << endl;
        }
        cin >> m >> d;
    }
    return 0;
}