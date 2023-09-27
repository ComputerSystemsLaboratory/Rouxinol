#include <iostream>
#include <cstdio>                                               //scanf,printf
#include <algorithm>                                            //max,min
#include <string>                                               //string
#include <cstring>                                              //strlen,strcat
#include <cctype>                                               //isalpha,tolower
#include <cmath>                                                //sqrt,sin
using namespace std;

struct Dice{
    int ue;
    int sita;
    int mae;
    int usiro;
    int migi;
    int hidari;
};

int main(){
    Dice dice;
    cin>>dice.ue>>dice.usiro>>dice.migi>>dice.hidari>>dice.mae>>dice.sita;
    string ch;
    cin>>ch;
    for(int i=0; i<ch.size(); i++){
        int a=dice.ue,b=dice.sita, c=dice.mae,d=dice.usiro,e=dice.migi,f=dice.hidari;
        if(ch[i]=='S'){
            dice.ue=c;
            dice.usiro=a;
            dice.sita=d;
            dice.mae=b;
        }else if(ch[i]=='N'){
            dice.ue=d;
            dice.usiro=b;
            dice.sita=c;
            dice.mae=a;
        }else if(ch[i]=='E'){
            dice.ue=f;
            dice.sita=e;
            dice.migi=a;
            dice.hidari=b;
        }else{
            dice.ue=e;
            dice.sita=f;
            dice.migi=b;
            dice.hidari=a;
        }
    }
    cout<<dice.ue<<endl;
}

