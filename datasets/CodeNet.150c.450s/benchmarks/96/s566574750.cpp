#include <iostream>
#include <string>

using namespace std;
 
string key[] = {"",".,!? ","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
 
int main(){
    int n;
     
    cin >> n;
    while(n--){
        string str,tmp = "";
        cin >> str;
 
        int cnt = 0 ,t = 0;
        string s = "";
        for(int i = 0 ; i < str.size() ; i++){
            if(str[i]=='0'){
                if(!cnt) continue;
                tmp += key[t][cnt-1];
                t = cnt = 0;
            }
            else{
                t = str[i]-'0';
                if((cnt>2)&&(t==2||t==3||t==4||t==5||t==6||t==8)) cnt -= 3;
                else if((cnt>3)&&(t==7||t==9)) cnt -= 4;
                else if((cnt>4)&&t==1) cnt -= 5;
                cnt++;
            }
        }
        cout << tmp << endl;
    }
     
    return 0;
}