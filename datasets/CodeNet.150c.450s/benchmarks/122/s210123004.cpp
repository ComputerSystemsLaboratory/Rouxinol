#include <iostream>
#include <string>
using namespace std;

int H[2000005];
int cnt=1;
void pq_insert(int num){
    H[cnt]=num;
    int i=cnt;
    while(i!=1&&H[i]>H[i/2]){
        swap(H[i],H[i/2]);
        i=i/2;
    }
    cnt++;
}

void extract(){
    cout<<H[1]<<endl;
    H[1]=H[--cnt];
    int i=1;
    int max_i;
    while(i*2<cnt){
        max_i=i*2;
        if(i*2+1<cnt&&H[i*2+1]>H[i*2])max_i=i*2+1;
        if(H[i]<H[max_i])swap(H[i],H[max_i]);
        i=max_i;
    }
}

int main()
{
    string s;
    cin>>s;
    while(s!="end"){
        if(s=="insert"){
            int num;
            cin>>num;
            pq_insert(num);
        }else if(s=="extract"){
            extract();
        }
        cin>>s;
    }
    return 0;
}