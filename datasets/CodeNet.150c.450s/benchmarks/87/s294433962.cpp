#include<iostream>
#include<vector>
#include<string.h>
using namespace std;
int main(){
    vector<vector<int> >bo(5);
    int n;
    while(cin>>n,n){
        for(int i=0;i<5;i++)
            bo[i].clear();
        for(int i=0;i<n;i++){
            for(int j=0;j<5;j++){
                int t;
                cin>>t;
                bo[j].push_back(t);
            }
        }
        int tot=0;
        while(1){
            vector<pair<pair<int,int>,int> >vec;
            int so=0;
            for(int i=0;i<3;i++){
                for(int j=0;j<bo[i].size();j++){
                    if(j<bo[i+1].size()&&j<bo[i+2].size()){
                        if(bo[i][bo[i].size()-1-j]==bo[i+1][bo[i+1].size()-1-j]&&bo[i+1][bo[i+1].size()-1-j]==bo[i+2][bo[i+2].size()-1-j]){
                            so=1;
                            int x=bo[i][bo[i].size()-1-j];
                            int k;
                            for(k=i;k<5;k++){
                                if(bo[k][bo[k].size()-1-j]==x){
                                    tot+=x;
                                    bo[k][bo[k].size()-1-j]=100+k;
                                }
                                else {
                                    break;
                                }
                            }
                            vec.push_back(make_pair(make_pair(i, k),j));
                        }
                    }
                        
                }
            }
            for(int i=0;i<5;i++){
                for(int j=0;j<bo[i].size();j++){
                    if(bo[i][j]>30){
                        bo[i].erase(bo[i].begin()+j, bo[i].begin()+j+1);
                        j--;
                    }
                }
            }
            
            vec.clear();
            
            if(so==0)break;
        }
        
        cout<<tot<<endl;
    }
}