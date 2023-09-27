#include <iostream>
#include <string>
using namespace std;

class dice{
public:
    int sur1, sur2, sur3, sur4, sur5, sur6, temp;

    dice(int surf1,int surf2,int surf3,int surf4,int surf5,int surf6){
        temp = 0;
        sur1 = surf1;
        sur2 = surf2;
        sur3 = surf3;
        sur4 = surf4;
        sur5 = surf5;
        sur6 = surf6;
    }

    void move(char dire){
        if(dire == 'N'){
            temp = sur2;
            sur2 = sur6;
            sur6 = sur5;
            sur5 = sur1;
            sur1 = temp;//??????????????????
        }
        else if(dire == 'E'){
            temp = sur3;
            sur3 = sur1;
            sur1 = sur4;
            sur4 = sur6;
            sur6 = temp;
        }
        else if(dire == 'W'){
            temp = sur4;
            sur4 = sur1;
            sur1 = sur3;
            sur3 = sur6;
            sur6 = temp;
        }
        else if(dire == 'S'){
            temp = sur6;
            sur6 = sur2;
            sur2 = sur1;
            sur1 = sur5;
            sur5 = temp;
        }
    }
        void print(){
            cout << sur1 << endl;
        }


};

int main(){
    int a,b,c,d,e,f;
    cin >> a >> b >> c >> d >> e >> f;
    dice dice1(a,b,c,d,e,f);
    string direc;
    cin >> direc;

    for(int i = 0; i < direc.size(); i++){
        //cout << direc[i];
        dice1.move(direc[i]);
        //dice1.print();
    }

    dice1.print();

    return 0;
}