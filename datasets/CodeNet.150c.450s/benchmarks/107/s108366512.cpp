#include<iostream>
#include<string>
using namespace std;

int A[1001][1001];

int main(){
    string s1,s2;
    cin>>s1;
    cin>>s2;

    for(int i=0;i<=s1.size();++i){
        for(int j=0;j<=s2.size();++j){
            if(i==0){
                A[0][j]=j;
                continue;
            }
            if(j==0){
                A[i][0]=i;
                continue;
            }
            else{
                if(s1[i-1]==s2[j-1]){
                    A[i][j]=A[i-1][j-1];
                }
                else{
                    A[i][j]=min(A[i][j-1],A[i-1][j])+1;
                    A[i][j]=min(A[i][j],A[i-1][j-1]+1);
                }
            }
            //cout<<A[i][j]<<" ";
        }
        //cout<<endl;
    }


    cout<<A[s1.size()][s2.size()]<<endl;
}
