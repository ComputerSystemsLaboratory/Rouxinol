#include <iostream>
#include <iomanip>
using namespace std;
 
int main(){
    int n=0,i=0;
    long int tmp=0;
    long int max = -9000000;
    long int min = 9000000;
    long int sum =0;
    cin >> n;

    for(i=0;i<n;i++){
    	cin >> tmp;
    	sum += tmp;

    	if(max<tmp){
    		max = tmp; 
    	}
    	if(min>tmp){
    		min = tmp;
    	}
    }
    cout << min << " " << max << " " << sum << endl;

return 0;
}