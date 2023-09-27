#include <iostream>
#include<string>
using namespace std;

int main()
{
    int n,a,b,aq;
    string str,line;
    cin >> str >> n ;
    aq=(int)str.size();
    char s[aq];
    for(int i=0;i<n;i++){
        cin >> line >> a >> b;
        if(line=="print"){
            for(int j=0;j<b-a+1;j++){
                cout << str[a+j];
            }
            cout << endl;
        }
        else if(line=="reverse"){
            for(int j=0;j<aq;j++) s[j]=str[j];
            str.erase(str.begin(),str.begin()+(int)str.size());
            for(int j=0;j<a;j++) str.push_back(s[j]);
            for(int j=b;j>=a;j--) str.push_back(s[j]);
            for(int j=b+1;j<=aq;j++) str.push_back(s[j]);
        }
        else{
            string p;
            cin >> p;
            for(int j=0;j<(int)str.size();j++) s[j]=str[j];
            str.erase(str.begin(),str.begin()+(int)str.size());
            for(int j=0;j<a;j++) str.push_back(s[j]);
            for(int j=0;j<(int)p.size();j++)str.push_back(p[j]);
            for(int j=b+1;j<=aq;j++) str.push_back(s[j]);
        }
    }
    return 0;
}

