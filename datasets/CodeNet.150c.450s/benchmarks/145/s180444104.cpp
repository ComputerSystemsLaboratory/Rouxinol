#include<iostream>
#include<cstring>
using namespace std;
int const N = 1001;
int main(){
    char str[N][50];
    int num[N],i=0,max=0,l=0;
    while(cin >> str[i]){//????????????
        i++;
    }
    for(int j=0;j<i;j++){//????????????????????????????????§????????????????§£???????????????????????????
        num[j]=0;
    }
    for(int j=0;j<i;j++){
        for(int k=0;k<i;k++){
            if(strcmp(str[j],str[k])==0)
			num[j]++;
		}
        if(num[max] < num[j])
            max = j;
        if(strlen(str[l]) < strlen(str[j]))
            l=j;
    }
    cout << str[max] << " " << str[l] << endl;
}