#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define MAX 100005
using ll =long long;
using namespace std;


char str[20001]={};
int height[20001]={};

//conversion character strings to integer array whitch represent each height
int charToHeight(void){
    int i=0;
    int h=0;
    while(str[i]!='\0'){
        switch(str[i]){
            case '\\':
                h--;
                break;
            case '/':
                h++;
                break;
            default:
                break;
        }
        height[i+1]=h;
        i++;
    }
    return i+1;
}

//search the position which is same height of start position 
int searchSameHeight(int startposition, int size){
    int i=1;
    while(startposition+i!=size && height[startposition+i]!=height[startposition]){
        i++;
    }
    if(startposition+i==size)return -1;//no match
    int endposition=i+startposition;
    if(height[endposition-1]>height[endposition]){//mountain
        return -1;
    }else if(height[endposition-1]==height[endposition]){//flat
        return -1;
    }else{//valley
        return endposition; 
    }
}

//calculate the area
double calcArea(int startposition, int endposition){
    double area=0.0;
    for(int m=startposition;m<endposition;m++){
        if(height[m]>height[m+1]){
            area+=(double)abs(height[startposition]-height[m+1])-0.5;
        }else if(height[m]==height[m+1]){
            area+=(double)abs(height[startposition]-height[m+1]);
        }else if(height[m]<height[m+1]){
            area+=(double)abs(height[startposition]-height[m+1])+0.5;
        }
    }
    return area;
}

int main(){
    //input
    scanf("%s",str);

    int size=charToHeight();
    double area[20000]={};
    int areanum=0;
    int i=0;
    while(i<size){
        int endposition=searchSameHeight(i,size);
        if(endposition!=-1){
            area[areanum]=calcArea(i,endposition);
            areanum++;
            i=endposition;
        }else{
            i++;
        }
    }

    ll s=0;
    rep(i,areanum){
        s+=area[i];
    }
    cout<<s<<endl;
    cout<<areanum;

    rep(i,areanum){
        cout<<" "<<(ll)area[i];
    }
    cout<<endl;
}
                
