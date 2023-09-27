#include <iostream>

using namespace std;

class Dice{
    int s[6];   //?????????????????¢
public:
    Dice(int *);
    void throw_dice(char);
    int get_up() const {return s[0];}
    int get_s(int n) const {return s[n];}
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
    int s[6];
    int i,j;
    for (i=0;i<6;i++){
        cin>>s[i];
    }
    Dice d(s);
    int *ques1,*ques2;
    int n;
    cin>>n;
    ques1=new int [n];
    if (ques1==NULL){
        cout<<"Error!"<<endl;
        return 0;
    }
    ques2=new int [n];
    if (ques2==NULL){
        cout<<"Error!"<<endl;
        delete [] ques1;
        return 0;
    }
    for (i=0;i<n;i++){
        cin>>ques1[i]>>ques2[i];
    }
    for (i=0;i<n;i++){
        //ques???1?????????
        for (j=0;j<4;j++){
            if (d.get_s(0)==ques1[i]){
                break;
            }
            d.throw_dice('S');
        }
        if (!(j<4)){
            //????????¢?????\?????????
            d.throw_dice('E');
            if (!(d.get_s(0)==ques1[i])){
                //????????\????????????
                d.throw_dice('W');
                d.throw_dice('W');
            }
        }
        //ques1???????????¢?????\?????????
        for (j=0;j<4;j++){
            if (d.get_s(1)==ques2[i]){
                //ques2???????????¢?????\???
                break;
            }
            //?????¨?????????
            d.throw_dice('E');
            d.throw_dice('S');
            d.throw_dice('W');
        }
        cout<<d.get_s(2)<<endl;
    }
    delete [] ques1;
    delete [] ques2;
}