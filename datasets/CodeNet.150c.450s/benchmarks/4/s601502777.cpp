#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> m,f,r;
    int m1,f1,r1;
    do{
        cin>>m1>>f1>>r1;
        m.push_back(m1);
        f.push_back(f1);
        r.push_back(r1);
    }while (m1!=-1 || f1!=-1 || r1!=-1);
    int i;
    for (i=0;i<m.size()-1;i++){
        char c;
        if (m[i]==-1 || f[i]==-1){
            c='F';
        }else if (m[i]+f[i]>=80){
            c='A';
        }else if (m[i]+f[i]>=65){
            c='B';
        }else if (m[i]+f[i]>=50){
            c='C';
        }else if (m[i]+f[i]>=30){
            if (r[i]>=50){
                c='C';
            }else{
                c='D';
            }
        }else{
            c='F';
        }
        cout<<c<<endl;
    }
    return 0;
}