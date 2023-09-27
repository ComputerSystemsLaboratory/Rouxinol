#include<iostream>
#include<cstring>

using namespace std;

int fg = 0;

void syutu(char[]);

int main(void){
    int N,M,chk=0;
    cin>>N;
    char U[N][256];
    for(int lop=0;lop<N;lop++){
        cin>>U[lop];
    }
    cin>>M;
    char T[M][256];
    for(int lop=0;lop<M;lop++){
        cin>>T[lop];
    }

    for(int lop=0;lop<M;lop++){
        for(int lop2=0;lop2<N;lop2++){
            //cout<<T[lop]<<"  "<<U[lop2]<<endl;
            //cout<<strcmp(T[lop],U[lop2])<<endl;
            if(strcmp(T[lop],U[lop2])==0){
                
                syutu(T[lop]);
                chk=1;
                break;
            }
        }
        if(chk == 0){
            cout<<"Unknown "<<T[lop]<<endl;
        }else{
            chk = 0;
        }
    }


    return 0;
}

void syutu(char moji[]){
    if(fg == 0){
        cout<<"Opened by "<<moji<<endl;
        fg =1;
    }else{
        cout<<"Closed by "<<moji<<endl;
        fg =0;
    }
    return;
}

