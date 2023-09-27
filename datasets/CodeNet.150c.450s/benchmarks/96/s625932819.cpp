#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

char mes(char c){
    int n = c -'0';
    if(n==2)return 'a';
    else if(n==3)return 'd';
    else if(n==4)return 'g';
    else if(n==5)return 'j';
    else if(n==6)return 'm';
    else if(n==7)return 'p';
    else if(n==8)return 't';
    else return 'w';
}


int main(){
    long long int n;
    cin >> n;
    for(int i=0;i<n;i++){
        string str;
        cin >> str;
        int cou = 0;    
        for(int j=0;j<str.size();j++){
           if(str[j]=='0' && str[j-1]!='0' && j!=0){
                    cou--;
                    if(str[j-1]!='1'){
                        char a = mes(str[j-1]);
                        if(str[j-1]=='7'||str[j-1]=='9')printf("%c",a + (cou)%4);
                        else printf("%c",a+cou%3);
                    }else{
                       cou%=5;
                        if(!cou)cout << ".";
                        else if(cou==1)cout << ",";
                        else if(cou==2)cout << "!";
                        else if(cou==3)cout << "?";
                        else cout << " ";
                    }
                cou = 0;
           }else if(str[j]!='0'){
               cou++;
           }
        }
        cout << endl;
    }
}