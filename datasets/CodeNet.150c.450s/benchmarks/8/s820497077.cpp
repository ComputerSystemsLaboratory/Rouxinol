#include<iostream>
using namespace std;

int main(){
    int n=0,sum1=0,sum2=0;
    string str1,str2;
    cin >> n;
    for(int i=0;n>i;i++){
        cin >> str1 >> str2;
        if(str1==str2){
            sum1++;
            sum2++;
        }
        else if(str1>str2) sum1+=3;
        else if(str1<str2) sum2+=3;
        str1="";
        str2="";
    }
    cout << sum1 << " " << sum2 << endl;
}
