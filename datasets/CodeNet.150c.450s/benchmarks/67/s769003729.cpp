#include<iostream>

using namespace std;


int
main(){
	int n;
	while(true){
		cin>>n;
		if(!n)break;
//		cout<<"n:"<<n<<endl;
		int count=0;
		for(int i=2;i<n;i++){
			//ô
		//	cout<<"    i:"<<i<<endl;
			if(!(i%2)){
				double tmp=(double)n/(double)i;
				double tmp2=(int)tmp;
				if(tmp-tmp2==0.5000){
				//	cout<<tmp2<<endl;
				//	cout<<tmp2-i/2<<endl;
					if(tmp2-i/2<0||(tmp2+1)+i/2>n)continue;
					count++;
				}
			}
			//ï
			else{
				if(n%i==0){
					int tmp=n/i;
					if(tmp-i/2<1||tmp+i/2>=n)continue;
					count++;
				}
			}
		}
		cout<<count<<endl;
	}



	return 0;

}