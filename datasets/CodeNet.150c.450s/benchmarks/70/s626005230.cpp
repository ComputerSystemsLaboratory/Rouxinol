#include <iostream>
#include <string>
using namespace std;
int main(){
    int mon,day,ans=0,answer=0,sum[13]={1,31,60,91,121,152,182,213,244,274,305,335,366};
    string date[8]={"Wednesday","Thursday","Friday","Saturday","Sunday","Monday","Tuesday"};
    while(cin>>mon>>day){
        if(mon==0)break;
        mon=mon-1;
        if(mon>0){
            ans=day+sum[mon];
        }else{
            ans=day;
        }
        answer=ans%7;
        cout<<date[answer]<<endl;
    }
    return 0;
}