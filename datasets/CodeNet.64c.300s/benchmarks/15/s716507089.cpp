#include<iostream>

using namespace std;


int selectionsort(int n, int *buff)
{

	int j,minj,i;
	int count=0;

	for(i=0;i<n;i++){
		minj=i;
		
		for(j=i;j<n;j++){
			if(buff[minj]>buff[j]) minj=j;
		}
		if(i!=minj){
			swap(buff[minj],buff[i]);
			count++;
		}
	}
	
	return count;

}


int main()
{

	int n;
	int buff[100];
	cin>>n;
	for(int i=0;i<n;i++) cin>>buff[i];

	int count=selectionsort(n, buff);


	for(int i=0;i<n-1;i++) cout<<buff[i]<<" ";
	cout<<buff[n-1]<<endl;

	cout << count <<endl;

	return 0;
}

