#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> n,x;
    int tempn,tempx;
    do{
        cin>>tempn>>tempx;
        n.push_back(tempn);
        x.push_back(tempx);
    }while (tempn!=0 || tempx!=0);
    for (int i=0;i<n.size()-1;i++){
        int cnt=0;
        for (int a=1;a<=n[i];a++){
            for (int b=a+1;b<=n[i];b++){
                int c=x[i]-a-b;
                if (c>b && c<=n[i]){
                    cnt++;
                }
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}

