#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<string> a(21);
    int l;
    while(cin>>a[0]>>l,l){
            while(a[0].length()!=l)
            a[0]="0"+a[0];
        for(int i=1;i<21;i++){
            string b=a[i-1];
            int x=0;
            sort(b.begin(),b.end(),greater<char>());
            x=stoi(b);
            sort(b.begin(),b.end());
            x-=stoi(b);
            a[i]=to_string(x);
                     while(a[i].length()!=l)
                     a[i]="0"+a[i];



        }
        int resi,resj;
        for(int i=0;i<21;i++)
            for(int j=0;j<i;j++)
                if(a[i]==a[j]){
                    resi=i;
                    resj=j;
                    goto aa;



                }
        aa: cout<<resj<<" "<<stoi(a[resj])<<" "<<resi-resj<<endl;
    }

    return 0;
}