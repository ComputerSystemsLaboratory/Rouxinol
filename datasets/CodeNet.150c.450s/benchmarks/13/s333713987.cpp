#include<iostream>
#include<string>
using namespace std;
int main(){
    int i,b,c,cut=0;
    string str1,str,mozi;
    cin >> str >> str1;
        mozi=str+str;
    int a=mozi.find(str1);
    if(a!=-1){
        cut=1;
    }
    if(cut==1){
        cout << "Yes" <<"\n";
    }else
        cout << "No" <<"\n";
return 0;
}