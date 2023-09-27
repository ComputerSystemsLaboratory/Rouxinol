#include<iostream>
#include<string>
#include<stdio.h>
using namespace std;

int main(void){
    string str1,str2,temp;
    int count = 0;
    cin >> str1;
    temp = "";
    while(true){
        cin >> str2;
        if (str2 == "END_OF_TEXT"){
            break;
        }
        if ((tolower(str2[0]) == tolower(str1[0])) && (str2.size() == str1.size())){
            for (int j = 0; j < str1.size(); j++){
                temp += tolower(str2[j]);
            }
            if (temp == str1){
                count += 1;
            }            
            temp = "";
        }
    }
    cout << count << endl;
    return 0;
}
