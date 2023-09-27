#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

int main(){
    string a,c;
    string temp;
    string temp2;
    string temp3;
    string temp4;
    int len_a;
    int len_c;
    int i,j;
    int k =0;
    
    cin >> a;
    len_a = a.length();
    
    for ( i=0 ; i < len_a; i++){
        if (0x41 <= a[i] && a[i] <= 0x5a){
            a[i] = a[i] + 0x20;
        }
    }
    
    temp2 = " ";
    
    for (;;){
        getline(cin, temp);
        if (temp == "END_OF_TEXT"){
            c = c + temp2;
            break;
        }
        c = c + temp2 + temp;
    }
    
    len_c = c.length();
    
    for ( i=0 ; i < len_c; i++){
        if (0x41 <= c[i] && c[i] <= 0x5a){
            c[i] = c[i] + 0x20;
        }
    }
    
    for (j = 0; j < len_c ; j++){ 
        if (a[0] == c[j]){
            temp3 = c[j-1];
            temp4 = c[j+len_a];
            if (temp3==" " && temp4 ==" "){
                if (a == c.substr(j,len_a)){
                    k=k+1;
                }
            }
        }
    }
    
    cout << k << endl;
    
    return 0;
}