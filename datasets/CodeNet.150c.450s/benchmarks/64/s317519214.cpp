#include <iostream>
#include <vector>
using namespace std;

int sum(vector<int> v){
    int sum = 0;
    for(int i=0;i<v.size();i++){
        sum +=v[i];
    }
    return sum;
}

bool gtsum(vector<int> v,int x){
    if(sum(v)<x)
        return true;
    else
        return false;
}
bool hantei(vector<int> v, int x){
    if(x<0)
        return false;
    if(gtsum(v,x))
        return false;
    if(v.empty()){
        if(x==0)
            return true;
        else
            return false;
    }
    else{
        vector<int>::iterator it = v.begin();
        int first = *it;
        v.erase(it);
        vector<int> rest = v;
        return hantei(rest,x-first) || hantei(rest,x);
    }
}





int main(){
    int n; cin >> n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int a; cin >> a;
        v.push_back(a);
    }
    int m; cin >> m;
    for(int i=0;i<m;i++){
        int x; cin >> x;
        if(hantei(v,x))
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }
}