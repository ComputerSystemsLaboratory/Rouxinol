#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    while(cin>>n>>m,n){
        vector<int> s(n);
        vector<int> r(m);
        for(int i=0;i<n;i++)
            cin>>s[i];
        for(int i=0;i<m;i++)
            cin>>r[i];

        int ss=0,rs=0;
        for(int i=0;i<n;i++)
            ss+=s[i];
        for(int i=0;i<m;i++)
            rs+=r[i];

        pair<int,int> res=make_pair(-1,-1);
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++){
                if(ss-s[i]+r[j]==rs-r[j]+s[i]){
                    if(res.first==-1)
                        res=make_pair(i,j);
                    else{
                        if(s[i]+r[j]<s[res.first]+r[res.second])
                            res=make_pair(i,j);



                    }

                }


            }
        if(res.first!=-1)
            cout<<s[res.first]<<" "<<r[res.second]<<endl;
        else
            cout<<-1<<endl;
    }
    return 0;

}