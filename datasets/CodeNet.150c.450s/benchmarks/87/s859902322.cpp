#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int f,i,g,j,k,l,n,a,b,c,d,e;
    int score,ed;

    while(1){
        vector< vector<int> > bd(5);
        score=0;
        cin >> n;
        if(!n){break;}
        for(i=0;i<n;i++){
            cin>>a>>b>>c>>d>>e;
            bd[0].push_back(a);
            bd[1].push_back(b);
            bd[2].push_back(c);
            bd[3].push_back(d);
            bd[4].push_back(e);
        }
        
        ed=1;
        while(ed){
            ed=0;
            for(i=0;i<5;i++){
                reverse(bd[i].begin(),bd[i].end());
            }
            
            for(g=0;g<n;g++){
                for(i=0;i<3;i++){ //start
                    if(!bd[i][g]){continue;}
                    for(j=4;j>=2;j--){ //width
                        if((i+j)>4){continue;}
                        if(!bd[i+j][g]){continue;}
                        f=1;
                        for(k=i;k<=i+j;k++){
                            if(bd[k][g]!=bd[i][g]){f=0;break;}
                        }
                        if(f){
                            ed=1;
                            for(k=i;k<=j+i;k++){
                                if(bd[k][g]!=-1){
                                    score+=bd[k][g];
                                    bd[k][g]=-1;
                                }
                            }
                        }
                    }
                }
            }

            for(i=0;i<5;i++){
                while(1){
                    auto q=find(bd[i].begin(),bd[i].end(),-1);
                    if(q!=bd[i].end()){bd[i].erase(q);bd[i].push_back(0);}
                    else{break;}
                }
                reverse(bd[i].begin(),bd[i].end());
            }
        }
        cout<<score<<endl;
        bd.clear();
        bd.shrink_to_fit();
    }
    return 0;
}


