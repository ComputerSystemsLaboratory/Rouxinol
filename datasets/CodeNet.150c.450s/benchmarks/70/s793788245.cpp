#include<cstdio>
#include<algorithm>
#include<iostream>
using namespace std;
int main(){
    int day,mon[]={31,29,31,30,31,30,31,31,30,31,30,31},now,ans;
    for(;;){
    ans=0;
    cin>>now>>day;
    if(now==0)break;
    for(int i=0;i<now-1;i++){
        ans+=mon[i];
    }
    ans+=day;
    ans=ans%7;
    if(ans==1)printf("Thursday\n");
    if(ans==2)printf("Friday\n");
    if(ans==3)printf("Saturday\n");
    if(ans==4)printf("Sunday\n");
    if(ans==5)printf("Monday\n");
    if(ans==6)printf("Tuesday\n");
    if(ans==0)printf("Wednesday\n");
}
}