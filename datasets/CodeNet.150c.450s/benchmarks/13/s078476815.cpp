#include <iostream>
#include <string>
using namespace std;



/*void swapchar(char *p1,char*p2){
    char p;
     p=*p1;
    *p1=*p2;
    *p2=p;
}*/
void rollstr(char *p,int psize){
    char pz;
    for(int i=0;i<psize;i++){
        if(i==0){
            pz=*p;
            p[0]=*(p+1);
        }
        else if(i==psize-1){
            p[psize-1]=pz;
        }
        else {
            p[i]=p[i+1];
        }
    }
}
int main(){
   
    
    string s;
    string p;
    cin>>p;
    cin>>s;
    
    int psize=p.size();
    int ssize=s.size();
    
    //swapchar(&p[1],&p[2]);
    //cout<<p;
   
    
    for(int i=0;i<psize;i++){
    rollstr(&p[0],p.size());
        int ans=0;
        
        for(int j=0;j<ssize;j++){
            if(s[j]==p[j]){
                ans++;
            }
            if(ans==ssize){
                cout<<"Yes"<<endl;
                return 0;
            }
        }
        
        
        
    }
    cout<<"No"<<endl;
    
    return 0;
    
}
