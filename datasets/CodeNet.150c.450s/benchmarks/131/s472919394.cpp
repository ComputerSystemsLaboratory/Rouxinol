#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<map>
#include<sstream>
using namespace std;
int cnv(string str){
    int rec;
    stringstream ss(str);
    ss>>rec;
    return rec;
}
int main(){
    string str;
    int l;
    while(cin>>str>>l,l){
        map<string,int>M;
        M[str]=0;
        int cnt=1;
        while(true){
            while(str.length()<l)str="0"+str;
            sort(str.begin(),str.end());
            int v1,v2;
            v1=cnv(str);
            reverse(str.begin(),str.end());
            v2=cnv(str);
            int ans=v2-v1;
            stringstream ss;
            ss<<ans;
            ss>>str;
            if(M.find(str)!=M.end()){
                cout<<M[str]<<" "<<ans<<" "<<cnt-M[str]<<endl;
                break;
            }
            else{
                M[str]=cnt;
                cnt++;
            }
        }
    }
    return 0;
}