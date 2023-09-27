#include <iostream>
using namespace std;

int c[27];
int s[366][27];
int t[366];

int last_day(int d,int type){
    int lday=0;
    for(int i=1;i<=d;i++){
        if(t[i]==type) lday=i;
    }
    
    return lday;
}

int dissatisfied(int d){
    int dis=0;
    for(int j=1;j<=26;j++){
        dis+=c[j]*(d-last_day(d,j));
    }
    return dis;
}


int solve(int d){
    int res=0;
    for(int i=1;i<=d;i++){
        res=res+s[i][t[i]]-dissatisfied(i);
    }
    return res;
}
 
 
int main(void){
    int D;cin>>D;
    
    for(int i=1;i<=26;i++){
        cin>>c[i];
    }
    
    for(int i=1;i<=D;i++){
        for(int j=1;j<=26;j++){
            cin>>s[i][j];
        }
    }
    
    for(int i=1;i<=D;i++){
        cin>>t[i];
    }
    
    for(int i=1;i<=D;i++){
        cout<<solve(i)<<endl;
    }
    
    return 0;
    
}
