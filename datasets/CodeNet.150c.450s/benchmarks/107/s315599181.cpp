#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
    string s1;
    string s2;
    cin>>s1;
    cin>>s2;

    int l=s1.length();
    int m=s2.length();

    vector<vector<int>> Table(l+1,vector<int>(m+1));

    //初期設定
    for(int i=0;i<l+1;i++){
        Table[i][0]=i;
    }
    for(int j=0;j<m+1;j++){
        Table[0][j]=j;
    }

    //Table作成
    for(int i=1;i<l+1;i++){
        for(int j=1;j<m+1;j++){
            int value=min(Table[i-1][j],Table[i][j-1])+1;
            int cost;
            if(s1[i-1]==s2[j-1]){
                cost=0;
            }else{
                cost=1;
            }

            Table[i][j]=min(value,Table[i-1][j-1]+cost);
        }
    }

    //表示
    // for(int i=0;i<l+1;i++){
    //     for(int j=0;j<m+1;j++){
    //         cout<<Table[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    cout<<Table[l][m]<<endl;

    return 0;
}
