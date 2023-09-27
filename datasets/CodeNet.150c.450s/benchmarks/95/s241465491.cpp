#include<iostream>
#include<string>

using namespace std;

int main(){
    while(1){    
        int n;
        cin >>n;
        if(n==0)break;
        string s;
        int l=0,r=0;
        int ans=0;
        bool f=0;
        for(int i=0;i<n;i++){
            cin>>s;
            if(s=="lu"&&l==0)l++;
            if(s=="ld"&&l==1)l--;
            if(s=="ru"&&r==0)r++;
            if(s=="rd"&&r==1)r--;
            if(l==r&&l!=f){
                ans++;
                f=!f;
            }
        }
        cout<<ans<<endl;
    }
}
