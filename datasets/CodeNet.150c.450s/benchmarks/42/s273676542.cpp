#include<iostream>
#include<queue>
#include<string>
using namespace std;
 
int main()
{
    int i,n,q,x,sumq=0;
    string ss;
    queue<string> qt1;
    queue<int> qt2;
 
    cin >> n >> q;
 
    for(i=0;i<n;i++){
        cin >> ss >> x ;
        qt1.push(ss);
        qt2.push(x);
    }
 
    while(!qt1.empty()){
        if((qt2.front() - q) > 0 ){
            x = qt2.front() - q;
            qt2.pop();
            qt2.push(x) ;
            ss = qt1.front();
            qt1.pop();
            qt1.push(ss);
            sumq = sumq + q;
        }
        if((qt2.front()-q) <= 0){
            sumq = sumq + qt2.front();
            cout << qt1.front() << ' ' << sumq <<endl ;
            qt1.pop();
            qt2.pop();
        }
    }
 
    return 0;
}