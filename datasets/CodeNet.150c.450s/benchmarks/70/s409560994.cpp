#include<iostream>
using namespace std;
int a[13][32];
void day(void)
{
    int check=3;
    for(int i=1;i<13;i++){
        for(int j=1;j<32;j++){
            a[i][j]=check;
            check++;
            if(check==7)check=0;
            if((i==4||i==6||i==9||i==11)&&j==30)break;
            else if(i==2&&j==29)break;
        }
    }
}
int main()
{
    int mon,date;
    day();
    while(1){
        cin>>mon>>date;
        if(mon==0&&date==0)break;
        if(a[mon][date]==0)cout<<"Monday\n";
        else if(a[mon][date]==1)cout<<"Tuesday\n";
        else if(a[mon][date]==2)cout<<"Wednesday\n";
        else if(a[mon][date]==3)cout<<"Thursday\n";
        else if(a[mon][date]==4)cout<<"Friday\n";
        else if(a[mon][date]==5)cout<<"Saturday\n";
        else cout<<"Sunday\n";
    }

}