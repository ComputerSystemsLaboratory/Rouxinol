#include<iostream>
#include<string>
using namespace std;

int main()
{
    int i=0,max=0,maxNumber=-1,maxN=0,maxNNumber=0;
    string str[1000];
    while(cin>>str[i]){
        i++;
    }
    int wordCount[i+1];
    for(int j=0;j<i+1;j++){
        wordCount[j]=0;
    }
    bool kaburi[i+1];
    for(int j=0;j<i+1;j++){
        if(kaburi[j]) continue;
        if(max<str[j].length()){
            max=str[j].length();
            maxNumber=j;
        }
        for(int k=0;k<i+1;k++){
            if(str[j]==str[k]){
                wordCount[j]++;
                kaburi[k]=true;
            }
        }
    }
    for(int j=0;j<i+1;j++){
        if(maxN<wordCount[j]){
            maxN=wordCount[j];
            maxNNumber=j;
        }
    }
    cout<<str[maxNNumber]<<' '<<str[maxNumber]<<endl;
    return 0;
}