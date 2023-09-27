#include <iostream>
#include <string>
#include <vector>

using namespace std;

void shuffle(string &s,int num){
    int len=s.size();
    string temp=s;
    for (int i=num,j=0;j<len;i++,j++){
        temp[j]=s[i%len];
    }
    s=temp;
}

int main(){
    string s;
    vector<string> out;
    do{
        cin>>s;
        if (s!="-"){
            int m;
            cin>>m;
            for (int i=0;i<m;i++){
                int h;
                cin>>h;
                shuffle(s,h);
            }
            out.push_back(s);
        }
    }while (s!="-");
    for (int i=0;i<out.size();i++){
        cout<<out[i]<<endl;
    }
    return 0;
}