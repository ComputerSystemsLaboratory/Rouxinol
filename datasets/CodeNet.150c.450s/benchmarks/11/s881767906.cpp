#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<math.h>
#include<map>
#include<iomanip>
#include<numeric>
#define rep(i,n) for(int i=0;i<n;++i)
#define mod 1000000007
using namespace std;
int main(){
    int n;  cin>>n;
    bool b[52];
    vector<int> num(n);
    vector<char> kind(n);
    rep(i,52){
        if(i<n) cin>>kind[i]>>num[i];

        b[i]=false;
    }

    rep(i,n){
        if(kind[i]=='S')    b[num[i]-1]=true;
        else if(kind[i]=='H')   b[num[i]+12]=true;
        else if(kind[i]=='C')   b[num[i]+25]=true;
        else if(kind[i]=='D')   b[num[i]+38]=true;
    }

    
    rep(i,52){
        if(!b[i]){
            if(i<13)    cout<<"S "<<(i%13)+1<<endl;
            else if(i>=13&&i<26)    cout<<"H "<<(i%13)+1<<endl;
            else if(i>=26&&i<39)    cout<<"C "<<(i%13)+1<<endl;
            else if(i>=39)    cout<<"D "<<(i%13)+1<<endl;
        }
    }
}
