#include <iostream>
#include <string>
#include <algorithm>
#include <set>
using namespace std;
int main(void){
    int n;
    string str;
    set<string> strlist;
    cin>>n;
    for(int l=0;l<n;l++){
        strlist.clear();
        cin>>str;
        int len=str.length();
        
        for(int i=0;i<len;i++){
            string str1=str.substr(0,i);
            string str2=str.substr(i,len-i);
            
            string revstr1=str1;
            reverse(revstr1.begin(),revstr1.end());
            
            string revstr2=str2;
            reverse(revstr2.begin(),revstr2.end());
            
            strlist.insert(str1+str2);
            strlist.insert(str1+revstr2);
            strlist.insert(revstr1+str2);
            strlist.insert(str2+str1);
            strlist.insert(str2+revstr1);
            strlist.insert(revstr2+str1);
            strlist.insert(revstr1+revstr2);
            strlist.insert(revstr2+revstr1);
        }
        cout<<strlist.size()<<endl;
    }
    return 0;
}