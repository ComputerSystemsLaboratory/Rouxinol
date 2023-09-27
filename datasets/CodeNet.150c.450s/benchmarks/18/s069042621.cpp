#include<iostream>
using namespace std;

int main(){
        int n;
        int mo = 100000;

        cin >> n;
        for(; n > 0; n--){
                mo = mo * 1.05;
                if(mo % 1000 != 0)
                        mo = mo - mo % 1000 + 1000;
        }
        cout << mo << endl;
}