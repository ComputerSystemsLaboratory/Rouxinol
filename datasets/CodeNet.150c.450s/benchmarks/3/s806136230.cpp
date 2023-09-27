#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

int main(){
    string str1,str2,str3;
    int a, b;
    string p;
    string temp1,temp2,temp3;
    int q;
    int i,j;
    int len_str2;
    int len_temp1;
    int len_temp2;
   
    cin >> temp1;
    cin >> q;
    
    len_temp1 = temp1.length();
    
    for( i = 0; i < q; i++){
        cin >> str2;
        len_str2 = str2.length();
        str3 = str2.substr(0,3);
        //cout << str3 << endl;
        if(str3 == "rep"){
            cin >> a >> b >> p;
            temp1.replace(a,b-a+1,p);
            //cout << temp1 << endl;
        }else if(str3 == "rev"){
            cin >> a >> b;
            temp2 = temp1.substr(a,b-a+1);
            //cout << temp2 << endl;
            len_temp2 = temp2.length();
            temp3 = "";
            for (j=len_temp2-1; j >= 0; j--){
                temp3 = temp3 + temp2[j];
            }
            temp1.replace(a,b-a+1,temp3);
            //cout << temp1 << endl;
        }else{
            cin >> a >> b;
            cout << temp1.substr(a,b-a+1) << endl;
        }
    }
    
    return 0;
}