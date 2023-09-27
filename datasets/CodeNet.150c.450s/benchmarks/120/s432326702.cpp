#include <iostream>
#include <math.h>
#include <cstring>
using namespace std;

bool field[10][10000];
bool binary[10];
long flag;
int r,c,ans;

long FlagMake(void);
void Count(int area);

int main(void){
    cin >> r >> c;
    while(r!=0&&c!=0){
        for(long i=0;i<r;i++){
            for(long j=0;j<c;j++){
                cin >> field[i][j];
            }
        }

        ans=0;
        memset(binary,0,sizeof(binary));

        for(long i=0;i<pow(2,r);i++){
            if(i!=0){Count(0);}
            FlagMake();
            if(ans<flag)ans=flag;
        }

        cout << ans << endl;

        cin >> r >> c;
    }
}

long FlagMake(){
    int low,high;
    
    flag=0;
    
    for(long i=0;i<c;i++){
        
        low=0;high=0;
        
        for(int j=0;j<r;j++){
            if(binary[j]==1){
                if(field[j][i]==0){high++;}
                else{low++;}
            }
            else{
                if(field[j][i]==0){low++;}
                else{high++;}
            }
        }
        if(low>high){flag+=low;}
        else{flag+=high;}
    }
    return flag;
}

void Count(int area){
    if(binary[area]==0){binary[area]=1;}
    else{
        binary[area]=0;
        Count(area+1);
    }
}
