#include <iostream>
using namespace std;
int main(void){
    // Your code here!
    int dice[6]{};
    for(int i=0;i<6;i++)cin>>dice[i];
    int a,b;
    int dicee[6]{};
    for(int i=0;i<6;i++)dicee[i]=dice[i];
    int n;
    cin>>n;
    for(int k=0;k<n;k++){
    cin>>a>>b;
    //up-a
    int c{};
    for(int s=0;s<4;s++)
    {
        if(dice[1]==a&&dice[0]==b){
            cout<<dice[3]<<endl;
            c++;
            break;
        }
        if(dice[1]==a&&dice[3]==b){
            cout<<dice[5]<<endl;
            c++;
            break;
        }
        if(dice[1]==a&&dice[5]==b){
            cout<<dice[2]<<endl;
            c++;
            break;
        }
        if(dice[1]==a&&dice[2]==b){
            cout<<dice[0]<<endl;
            c++;
            break;
        }
        
        else 
        {
            int newdice[6]{};//S移動
            newdice[0]=dice[4];
            newdice[1]=dice[0];
            newdice[2]=dice[2];
            newdice[3]=dice[3];
            newdice[4]=dice[5];
            newdice[5]=dice[1];
            
            for(int i=0;i<6;i++)dice[i]=newdice[i];//reset
        }
    }
    if(c!=1)
    {
        if(dicee[2]==a&&dicee[0]==b)cout<<dicee[1]<<endl;
        if(dicee[2]==a&&dicee[1]==b)cout<<dicee[5]<<endl;
        if(dicee[2]==a&&dicee[5]==b)cout<<dicee[4]<<endl;
        if(dicee[2]==a&&dicee[4]==b)cout<<dicee[0]<<endl;
        
        if(dicee[3]==a&&dicee[4]==b)cout<<dicee[5]<<endl;
        if(dicee[3]==a&&dicee[0]==b)cout<<dicee[4]<<endl;
        if(dicee[3]==a&&dicee[1]==b)cout<<dicee[0]<<endl;
        if(dicee[3]==a&&dicee[5]==b)cout<<dicee[1]<<endl;
    }
    }
    /*while(dice[0]!=a)
    {
        newdice[0]=dice[3];
        newdice[1]=dice[1];
        newdice[2]=dice[0];
        newdice[3]=dice[5];
        newdice[4]=dice[4];
        newdice[5]=dice[2];
        
        for(int i=0;i<6;i++)dice[i]=newdice[i];//reset
    }*/
    return 0;
}

