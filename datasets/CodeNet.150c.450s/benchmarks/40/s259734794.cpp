#include <iostream>
#include <string>

#define swap(x,y) int temp=(x); (x)=(y); (y)=temp;
using namespace std;

class Dice{
    int s[6];   //?????????????????¢
public:
    Dice(int *);
    void throw_dice(char);
    int get_up() const {return s[0];}
};

Dice::Dice(int *dice_s){
    for (int i=0;i<6;i++) s[i]=dice_s[i];
}

void Dice::throw_dice(char d){
    int temp,temp2;
    switch(d){
        case 'S':
            temp=temp2=s[2-1];
            s[2-1]=s[1-1];
            temp2=s[6-1];
            s[6-1]=temp;
            temp=temp2;
            temp2=s[5-1];
            s[5-1]=temp;
            temp=temp2;
            s[1-1]=temp;
            break;
        case 'E':
            temp=temp2=s[3-1];
            s[3-1]=s[1-1];
            temp2=s[6-1];
            s[6-1]=temp;
            temp=temp2;
            temp2=s[4-1];
            s[4-1]=temp;
            temp=temp2;
            s[1-1]=temp;
            break;
        case 'N':
            temp=temp2=s[5-1];
            s[5-1]=s[1-1];
            temp2=s[6-1];
            s[6-1]=temp;
            temp=temp2;
            temp2=s[2-1];
            s[2-1]=temp;
            temp=temp2;
            s[1-1]=temp;
            break;
        case 'W':
            temp=temp2=s[4-1];
            s[4-1]=s[1-1];
            temp2=s[6-1];
            s[6-1]=temp;
            temp=temp2;
            temp2=s[3-1];
            s[3-1]=temp;
            temp=temp2;
            s[1-1]=temp;
            break;
        default:
            cout<<"Error!";
            break;
    }
}

int main(){
    int n[6];
    for (int i=0;i<6;i++) cin>>n[i];
    
    Dice dice(n);
    
    string s;
    cin>>s;
    for (int i=0,l=s.length();i<l;i++){
        dice.throw_dice(s[i]);
    }
    cout<<dice.get_up()<<endl;
}