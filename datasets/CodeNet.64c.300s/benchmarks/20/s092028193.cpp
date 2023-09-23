#include <iostream>
using namespace std;
int main(){
        int d,n=1,s=0;
		while(cin>>d){
        for(int i =1;i<(600/d);i++){
                for(int j=1;j<=2;j++){
                        n*=(i*d);
                        }
                s += d * n;
				n=1;
}
        cout<<s<<endl;
		s=0;
		}
}