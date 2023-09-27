#include<iostream>
#include<string>
using namespace std;
int ta[101],ha[101];
void judge(string taro,string hanako){
    for(int i=0;i<taro.size();i++){
        int count=1;
        for(char j='a';j<='z';j++){
            if(taro[i]==j){
                ta[i]=count;
            }
            count++;
        }
    }
    for(int i=0;i<hanako.size();i++){
        int count=1;
        for(char j='a';j<='z';j++){
            if(hanako[i]==j){
                ha[i]=count;
            }
            count++;
        }
    }
}
int main(){
    int n;
    cin>>n;
    string taro,hanako;
    int t=0,h=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<101;j++){
            ta[j]=0;
            ha[j]=0;
        }
        cin>>taro>>hanako;
        //cout<<judge(taro)<<" "<<judge(hanako)<<endl;
        judge(taro,hanako);
        for(int j=0;j<101;j++){
            if(ta[j]==0 && ha[j]==0){
                t+=1;
                h+=1;
                break;
            }
            if(ta[j]==ha[j]){continue;}
            else if(ta[j]<ha[j]){
                h+=3;
                break;
            }
            else if(ta[j]>ha[j]){
                t+=3;
                break;
            }
        }
    }
    cout<<t<<" "<<h<<endl;
}

