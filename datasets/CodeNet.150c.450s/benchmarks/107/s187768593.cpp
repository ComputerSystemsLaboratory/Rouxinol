#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
//char s1[1005];
//char s2[1005];
int d[1005][1005];
 
int main(){
    string s1,s2;
    cin>>s1>>s2;
    //int l1=strlen(s1);
    //int l2=strlen(s2);
    s1=' '+s1;
    s2=' '+s2;
    int l1=s1.size();
    int l2=s2.size();
    int i,j;
    for( i=1;i<l1;i++)d[i][0]=i;
    for( j=1;j<l2;j++)d[0][j]=j;
    for( i=1;i<l1;i++){
        for( j=1;j<l2;j++){
            if(s1[i]==s2[j]){
                d[i][j]=d[i-1][j-1];
            }else{
                d[i][j]=min(d[i][j-1],min(d[i-1][j],d[i-1][j-1]))+1;
            }
        }
    }cout<<d[l1-1][l2-1]<<endl;
return 0;
}

