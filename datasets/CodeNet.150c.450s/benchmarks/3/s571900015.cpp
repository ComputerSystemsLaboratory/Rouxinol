#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
      string str,fc,p;
      int q,i=0,a,b;
      cin>>str>>q;
      for(;i<q;i++){
            cin>>fc>>a>>b;
            switch(fc[2]){
                  case 'i':
                        cout<<str.substr(a,b-a+1)<<endl;
                        break;
                  case 'v':
                        p=str.substr(a,b-a+1);
                        reverse(p.begin(),p.end());
                        str.replace(a,b-a+1,p);
                        break;
                  case 'p':
                        cin>>p;
                        str.replace(a,b-a+1,p);
                        break;
            }
      }

}