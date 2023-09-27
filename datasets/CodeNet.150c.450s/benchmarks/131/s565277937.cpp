#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<utility>
#include<map>
#include<set>
#include<queue>
#include<math.h>
using namespace std;
#define N (1000000000+7)
typedef pair<int,int> P;
typedef long long ll;
int a,l;
int p[100];

int main(void){
    while(true){
        cin>>a>>l;
        string s,t;
        if((a==0)&&(l==0))break;
        int x=0,y=0,z=0;
        int index=0;
        p[index++]=a;
        int ansx=0,ansy=0,ansz=0;
        do{
            s="";
            t="";
            for(int i=0;i<l;i++){
                if(a<pow(10,l-i-1))s+="0";
                else{
                    x=(int)a/pow(10,l-i-1);
                    a=a%(int)pow(10,l-i-1);
                    char b=x+'0';
                    s=s+b;
                }
            }
            sort(s.begin(),s.end());
            t=s;
            reverse(t.begin(),t.end());
            x=0,y=0;
            for(int i=0;i<s.length();i++){
                z=s[i]-'0';
                x+=(int)z*pow(10,l-i-1);
            }
            for(int i=0;i<t.length();i++){
                z=t[i]-'0';
                y+=(int)z*pow(10,l-i-1);
            }
            a=y-x;
            p[index++]=a;
            bool flag=false;
            for(int l=0;l<index-1;l++){
                for(int m=l+1;m<index;m++){
                    if(p[l]==p[m]){
                        ansx=l;
                        ansy=p[l];
                        ansz=m-l;
                        flag=true;
                        break;
                    }
                }
                if(flag)break;
            }
            if(flag)break;
        }while(true);
        cout<<ansx<<" "<<ansy<<" "<<ansz<<endl;
    }

    return 0;
}
