#include<iostream>
#include<string>
#include<cctype>
using namespace std;
int main(){
    string AtoZ;
    char atoz[26] ={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    int a[26]={0};
    while(cin>>AtoZ){
        for(int i=0;i<AtoZ.size();i++){
            if(isupper(AtoZ[i])){
                AtoZ[i]=tolower(AtoZ[i]);
            }
            for(int j=0;j<26;j++){
                if(AtoZ[i]==atoz[j]){
                    a[j]++;
                    break;
                }
            }
        }
    }
    for(int k=0;k<26;k++){
        cout<<atoz[k]<<" : "<<a[k]<<endl;
    }
    return 0;
}
