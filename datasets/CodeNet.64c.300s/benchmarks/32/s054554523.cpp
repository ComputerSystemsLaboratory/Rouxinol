    #include <iostream>
    using namespace std;
     
    int main() {
    			int n,ma,mi,i,a[10000];
    	long long su;
    	ma=-1000000;
    	mi=1000000;
    	su=0;
    	cin>>n;
    	for(i=0;i<n;i++){
    		cin>>a[i];
    		ma=max(ma,a[i]);
    		mi=min(mi,a[i]);
    		su=su+a[i];
    	}
    	cout<<mi<<" "<<ma<<" "<<su<<endl;
    }
