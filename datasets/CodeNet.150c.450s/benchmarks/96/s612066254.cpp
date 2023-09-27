#include<iostream>
using namespace std;
int main(){
    char table[9][5]={ {'.',',','!','?',' '},{'a','b','c'},{'d','e','f'},{'g','h','i'},{'j','k','l'},{'m','n','o'},{'p','q','r','s'},{'t','u','v'},{'w','x','y','z'} };
    int youso[10] = {0,5,3,3,3,3,3,4,3,4},n;
    cin >> n;
    while(n--){
        int count=0,num,space,s;
        string str;
        cin >> str;
        for(int i=0;i<str.size();i++){
            num = int(str[i]-'0');
            if(num==0){
                if(count>0){
                     s = count%youso[space];
                     if(s==0)   s = youso[space];
                     cout << table[space-1][s-1];
                     count = 0;
                }
            }
            else{
                space=num;
                count++;
            }
        }
        cout << endl;
    }
} 
