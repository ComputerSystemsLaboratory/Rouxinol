#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        int x = i;
        if(x%3==0){
            cout<<' '<<i;
        }
        else if(x%10==3){
            cout<<' '<<i;
        }else{
            while(x/=10){
                if(x%10==3){
                cout<<' '<<i;
                break;
                }
            }
            
        }
    }
    cout<<endl;
	return 0;
}