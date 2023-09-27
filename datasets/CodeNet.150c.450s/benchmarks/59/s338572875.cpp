#include <iostream>
using namespace std;
int main(void){
    // Your code here!
    int n;
    cin>>n;
    int s[n];
    for(int i=0;i<n;i++){
        cin>>s[i];
        cout<<s[i];
        if(i<n-1)cout<<" ";
    }
    cout<<endl;
    for(int i=1;i<n;i++){
        int v=s[i];
        int j=i-1;
        while(j>=0&&s[j]>v){
            s[j+1]=s[j];
            j--;
        }
        s[j+1]=v;
        for(int ii=0;ii<n;ii++){
            cout<<s[ii];
            if(ii<n-1)cout<<" ";
        }
        cout<<endl;
    }
}

