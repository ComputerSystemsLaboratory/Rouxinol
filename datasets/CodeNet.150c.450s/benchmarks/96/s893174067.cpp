#include<iostream>
using namespace std;
int main(){
    int n,b[]={1,5,3,3,3,3,3,4,3,4},m,i;
    string s;
    char tab[20][6]={" ",".,!? ","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    cin>>n;
    while(cin>>s){
        for(i=m=0;i<s.size();i++)
            if(s[i]=='0'){
                if(m)
                    cout<<tab[s[i-1]-'0'][(m-1)%b[s[i-1]-'0']];
                m=0;
            }else
                m++;
        cout<<endl;
    }
    return 0;
}