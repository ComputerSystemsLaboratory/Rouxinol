#include<iostream>
using namespace std;

int main()
{
    int balls[10];
    int out[2][10];
    int outCount[2]={0};
    int num;
    cin>>num;
    while(num!=0){
        bool flag=false;
        int a[10]={0};
        for(int i=0;i<10;i++){
            cin>>balls[i];
        }
        for(a[0]=0;a[0]<2;a[0]++){
            for(a[1]=0;a[1]<2;a[1]++){
                for(a[2]=0;a[2]<2;a[2]++){
                    for(a[3]=0;a[3]<2;a[3]++){
                        for(a[4]=0;a[4]<2;a[4]++){
                            for(a[5]=0;a[5]<2;a[5]++){
                                for(a[6]=0;a[6]<2;a[6]++){
                                    for(a[7]=0;a[7]<2;a[7]++){
                                        for(a[8]=0;a[8]<2;a[8]++){
                                            for(a[9]=0;a[9]<2;a[9]++){
                                                for(int i=0;i<10;i++){
                                                    out[a[i]][outCount[a[i]]]=balls[i];
                                                    if(out[a[i]][outCount[a[i]]-1]>balls[i]&&outCount[a[i]]!=0){
                                                        break;
                                                    }
                                                    if(i==9){
                                                        flag=true;
                                                    }
                                                    outCount[a[i]]++;
                                                }
                                                for(int i=0;i<10;i++){
                                                    out[0][i]=0;
                                                    out[1][i]=0;
                                                }
                                                outCount[0]=0;
                                                outCount[1]=0;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        if(flag){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        num--;
    }
    return 0;
}