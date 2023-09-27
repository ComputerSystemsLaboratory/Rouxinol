#include <bits/stdc++.h>
using namespace std;



int main(){
  int N;
    cin>>N;
    vector<string> judge(N);
    for(int i=0;i<N;i++){
        cin>>judge.at(i);
    }
    int c0=0,c1=0,c2=0,c3=0;
    for(int i=0;i<N;i++){
        if(judge.at(i)=="AC"){
            c0++;
        }
        if(judge.at(i)=="WA"){
            c1++;   
        }
        if(judge.at(i)=="TLE"){
            c2++;  
        }
        if(judge.at(i)=="RE"){
            c3++;
        }
    }
    cout<<"AC x "<<c0<<endl<<"WA x "
    <<c1<<endl<<"TLE x "<<c2<<endl<<"RE x "<<c3<<endl;
    

}