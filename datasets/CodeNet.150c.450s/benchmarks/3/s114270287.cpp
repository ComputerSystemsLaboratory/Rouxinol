#include<iostream>
#include<string>
using namespace std;

int main(){
    string str;
    int i;
    int a, b;
    string order, str1;

    cin >> str >> i;
    for(int j=0;j<i;j++){
        cin >> order >> a >> b;
        if(order == "replace"){
            cin >> str1;
            for(int k=0;k<b-a+1;k++)str[a+k]=str1[k];
        } else if(order=="reverse"){
            while(b - a > 0){
                swap(str[a], str[b]);
                a++;b--;
            }
        }else{
            cout << str.substr(a, b - a + 1) << endl;
        }
        // cout << str << endl;
    }


    return 0;
}
