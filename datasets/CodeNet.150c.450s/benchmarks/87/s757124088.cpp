#include<iostream>
#include<algorithm>
#include<string>
#include<cstdlib>
#include<map>
#include<iomanip>
#include<sstream>
#include<vector>
#include<stack>
#include<math.h>
#include<queue>
#include<complex>
using namespace std;



int main() {
    const long long int mod = 1000000007,INF=99999999999999;
	map<long long int, long long int>mp;
    string str[2005],tmp;
	cout << fixed << setprecision(10);
    
    
    while(1){
        long long int n,paz[20][6],res=0;
        cin>>n;
        if(n==0){
            return 0;
        }
        for(int j=1;j<=5;j++){
                paz[0][j]=999;
            }
        for(int i=n;i>=1;i--){
            for(int j=1;j<=5;j++){
                cin>>paz[i][j];
            }
        }

        for(int t=1;t<=20;t++){
            for(int i=1;i<=n;i++){
                if(paz[i][1]==paz[i][2]&&paz[i][3]==paz[i][2]&&paz[i][4]==paz[i][3]&&paz[i][4]==paz[i][5]){
                    res+=paz[i][1]*5;
                    paz[i][1]=0;
                    paz[i][2]=0;
                    paz[i][3]=0;
                    paz[i][4]=0;
                    paz[i][5]=0;
                }else if(paz[i][1]==paz[i][2]&&paz[i][3]==paz[i][2]&&paz[i][4]==paz[i][3]){
                    res+=paz[i][1]*4;
                    paz[i][1]=0;
                    paz[i][2]=0;
                    paz[i][3]=0;
                    paz[i][4]=0;
                }else if(paz[i][3]==paz[i][2]&&paz[i][4]==paz[i][3]&&paz[i][4]==paz[i][5]){
                    res+=paz[i][2]*4;
                    
                    paz[i][2]=0;
                    paz[i][3]=0;
                    paz[i][4]=0;
                    paz[i][5]=0;
                }else if(paz[i][1]==paz[i][2]&&paz[i][3]==paz[i][2]){
                     res+=paz[i][2]*3;
                    paz[i][1]=0;
                    paz[i][2]=0;
                    paz[i][3]=0;
                }else if(paz[i][3]==paz[i][2]&&paz[i][4]==paz[i][3]){
                     res+=paz[i][2]*3;
                    paz[i][2]=0;
                    paz[i][3]=0;
                    paz[i][4]=0;
                }else  if(paz[i][4]==paz[i][3]&&paz[i][4]==paz[i][5]){
                    res+=paz[i][3]*3;
                    paz[i][3]=0;
                    paz[i][4]=0;
                    paz[i][5]=0;
                }
            }
            for(int k=1;k<=10;k++){
                for(int j=1;j<=5;j++){
                    for(int i=1;i<=n;i++){
                        if(paz[i-1][j]==0){
                            paz[i-1][j]=paz[i][j];
                            paz[i][j]=0;
                        }
                    }
                }
            }
            
            
        }
        cout<<res<<endl;
    }
    
} 

