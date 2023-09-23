#include <iostream>

using namespace std;

//Aoj 0033

int ball[15], l[15],r[15];

bool res= false;

void dfs(int i,int j,int k){//i 为当年需要落下的球,j 表示左边最上面球的上一位置，k 表示最右边球的上一位置
    if(i>=10){
        res=true;
        return;
    }
//    if(res){
//        return;
//    }
    if(ball[i]>l[j-1]){
        l[j]=ball[i];
        dfs(i+1,j+1,k);
    }
    if(ball[i]>r[k-1]){
        r[k]=ball[i];
        dfs(i+1,j,k+1);
    }

}

int main(){
    int n;
    cin>>n;
    while(n--){
        res= false;
        for(int i=0;i<10;i++){
            cin>>ball[i];
        }
        dfs(0,1,1);
        if(res){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }

    }
    return 0;
}
