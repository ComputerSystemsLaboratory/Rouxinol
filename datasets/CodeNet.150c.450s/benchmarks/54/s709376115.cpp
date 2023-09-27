#include<iostream>
#include<string>
using namespace std;
void tim(string &a){
     
    for(int i=0;a[i];i++){
        if(a[i]<97)
        {    a[i]=(char)(a[i]+32);     
        }   
    }   }

int main(){
    string w,t;
    cin >>w;
    tim(w) ;
    cin>>t;
    int d=0;
    while(t!="END_OF_TEXT") {
        tim(t);
        if(w==t)
            d++;
        cin>>t;
    }
    cout <<d<<endl;
    return 0;
}