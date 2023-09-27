#include <string>
#include <algorithm>
#include <iostream>
using namespace std;
int main(){

    int n;
    cin>>n;
    while(n--){
    string chs[10];
    chs[1]=".,!? ";
    chs[2]="abc";
    chs[3]="def";
    chs[4]="ghi";
    chs[5]="jkl";
    chs[6]="mno";
    chs[7]="pqrs";
    chs[8]="tuv";
    chs[9]="wxyz";

    string res;
    string s;
    cin>>s;
    int idx=0;
    int cnt=0;
    for(int i = 0; i < s.size(); i++){
        int num=s[i]-'0';
        if(num==0){
            if(idx!=0){
                res+=chs[idx][cnt];
                idx=0;
                cnt=-1;
            }
        }
        else{
            if(idx==num)
                cnt=(cnt+1)%(chs[idx].size());
            else{
                if(idx!=0)
                    res+=chs[idx][cnt];
                idx=num;
                cnt=0;
            }
        }
    }
    if(idx!=0)
        res+=chs[idx][cnt];
    cout<<res<<endl;
    }

    return 0;
}