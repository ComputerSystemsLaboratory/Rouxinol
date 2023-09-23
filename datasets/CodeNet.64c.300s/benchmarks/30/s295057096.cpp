#include<iostream>
#define shiharai 1000
using namespace std;
int main(){
    while(1){
        const int Zeni[6] = {500,100,50,10,5,1};
        int daikin = 0;
        int otsuri = 0;
        int Ozeni = 0;
        int i = 0;
        cin >> daikin;
        if(daikin == 0){
            break;
        }
        otsuri = shiharai - daikin;
        while(i < 6){
            while(otsuri >= Zeni[i]){
                Ozeni++;
                otsuri-=Zeni[i];
            }
            i++;
        }
        cout << Ozeni << endl;
    }
    return 0;
}