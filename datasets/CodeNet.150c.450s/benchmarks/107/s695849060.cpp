#include<iostream>
#include<string>
using namespace std;

int main(){
    string s1,s2;
    cin>>s1>>s2;

    int dist[1001][1001];
    for(int i=0;i<=s1.size();++i){
        for(int j=0;j<=s2.size();++j){
            if(i==0){
                dist[i][j]=j;
            }
            else if(j==0){
                dist[i][j]=i;
            }
            else{
                int cost=(s1[i-1]==s2[j-1]?0:1);
                int add=dist[i-1][j]+1;
                int dlt=dist[i][j-1]+1;
                int exch=dist[i-1][j-1]+cost; //why * is necessary
                
                if(add<=dlt && add<=exch){
                    dist[i][j]=add;
                }
                else if(dlt<=add && dlt<=exch){
                    dist[i][j]=dlt;
                }
                else{
                    dist[i][j]=exch;
                }
            }
        }
    }
    cout<<dist[s1.size()][s2.size()]<<"\n";
}