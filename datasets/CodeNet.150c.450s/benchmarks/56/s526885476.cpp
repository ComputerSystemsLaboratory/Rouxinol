#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	long int min=0, max=0, sum=0;
    int temp;
    int n;
    cin>>n;
    for(int i =0;i<n;i++){
        cin>>temp;
        if(i==0){
            min = temp;
            max = temp;
        }
        sum+=temp;
        if(temp<min){
            min = temp;
        }
        if(temp>max){
            max = temp;
        }
    }
    
    cout<<min<<' '<<max<<' '<<sum<<endl;
    
	return 0;
}