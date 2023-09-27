#include <iostream>
#include <string>
#include <list>
using namespace std;
int main(void)
{
    ios_base::sync_with_stdio(false);
    bool flag=false;
    int n,num;
    string s;
    list<int> intlist;
    list<int>::iterator it;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> s;
        if(s=="insert"){
            cin >> num;
            intlist.push_front(num);
        }
        else if(s=="delete"){
            cin >> num;
            for(it=intlist.begin();it!=intlist.end();++it){
                if(*it ==num){
                    intlist.erase(it);
                    break;
                }
            }
        }
        else if(s=="deleteFirst"){
            intlist.pop_front();
        }
        else if(s=="deleteLast"){
            intlist.pop_back();
        }
    }
    for(it=intlist.begin();it!=intlist.end();++it){
        if(flag==false){
            cout << *it;
            flag=true;
        }
        else cout << " " << *it;
    }
    cout << endl;
    return 0;
}