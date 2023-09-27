#include<bits/stdc++.h>
using namespace std;
int cal(string str){
    int sum=0;
    stack<char> c;
    c.push('e');
    for(int i=0;i<str.size();i++){
        c.push(str[i]);
    }
    while(c.size()!=1){
        //cout<<c.size()<<endl;
        if(c.top()=='i' || c.top()=='x' || c.top()=='c' || c.top()=='m'){
            char tmp=c.top();
            c.pop();
            int tmp2=1;
            for(char j='2';j<='9';j++){
                if(j==c.top()){
                    tmp2=j-'0';
                    c.pop();
                    break;
                }
            }
            if(tmp=='i'){
                sum+=tmp2*1;
            }
            else if(tmp=='x'){
                sum+=tmp2*10;
            }
            else if(tmp=='c'){
                sum+=tmp2*100;
            }
            else if(tmp=='m'){
                sum+=tmp2*1000;
            }
        }
    }
    return sum;
}

void cal2(int a,int b){
    int sum=a+b;
    vector<char> ans;
    if(sum/1000>1) cout<<sum/1000<<"m";
    if(sum/1000==1) cout<<"m";
    sum%=1000;
    if(sum/100>1) cout<<sum/100<<"c";
    if(sum/100==1) cout<<"c";
    sum%=100;
    if(sum/10>1) cout<<sum/10<<"x";
    if(sum/10==1) cout<<"x";
    sum%=10;
    if(sum>1) cout<<sum<<"i";
    if(sum==1) cout<<"i";
    cout<<endl;
    return ;
}
int main(){
    int n;
    cin>>n;
    string mcxl1,mcxl2;
    for(int i=0;i<n;i++){
        cin>>mcxl1>>mcxl2;
        //cout<<cal(mcxl1)<<" "<<cal(mcxl2)<<endl;
        cal2(cal(mcxl1),cal(mcxl2));
    }
    return 0;
}



