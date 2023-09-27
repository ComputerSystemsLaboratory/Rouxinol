#include<iostream>
#include<string>
using namespace std;

class Dice{
    public:
        int s[6];
        void roll(char c){
            int temp;
            if(c=='E'){
                temp=s[2];
                s[2]=s[0];
                s[0]=s[3];
                s[3]=s[5];
                s[5]=temp;
            }
            if(c=='N'){
                temp=s[4];
                s[4]=s[0];
                s[0]=s[1];
                s[1]=s[5];
                s[5]=temp;
            }
            if(c=='S'){
                temp=s[1];
                s[1]=s[0];
                s[0]=s[4];
                s[4]=s[5];
                s[5]=temp;
            }
            if(c=='W'){
                temp=s[3];
                s[3]=s[0];
                s[0]=s[2];
                s[2]=s[5];
                s[5]=temp;
            }
            if(c=='R'){
                temp=s[1];
                s[1]=s[3];
                s[3]=s[4];
                s[4]=s[2];
                s[2]=temp;
            }
        }
        int top(){
            return s[0];
        }
        int front(){
            return s[1];
        }
        int right(){
            return s[2];
        }
        int left(){
            return s[3];
        }
};

int main(){
    Dice dice;
    for(int i=0;i<6;i++){
        cin>>dice.s[i];
    }
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int t,f;
        cin>>t>>f;
        if(dice.left()==t){
            dice.roll('E');
        }
        if(dice.right()==t){
            dice.roll('W');
        }
        while(dice.top()!=t){
            dice.roll('N');
        }
        while(dice.front()!=f){
            dice.roll('R');
        }
        cout<<dice.right()<<endl;
    }
    return 0;
}
