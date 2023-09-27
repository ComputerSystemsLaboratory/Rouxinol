#include <iostream>
#include <string>

using namespace std;

int main(void){
    int i,j,k=0,l;
    int f=0;
    string str;
    string max="\0";
    int count[100]={0};
    string count_str[100];
    int count_max=0;
    
    while(cin>>str){
        if(max.size()<str.size()){
            max=str;
        }
        for(i=0;i<k;i++){
            if(count_str[i]==str){
                count[i]++;
                f=1;
                break;
            }
        }
        if(f==0){
            count_str[k]=str;
            k++;
        }
    }
    
    for(i=0;i<k;i++){
        if(count[count_max]<=count[i]){
            count_max=i;
        }
    }
    cout<<count_str[count_max]<<" "<<max<<endl;
    return(0);
}