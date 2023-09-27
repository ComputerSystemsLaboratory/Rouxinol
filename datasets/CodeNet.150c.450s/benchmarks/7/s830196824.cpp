#include <iostream>
using namespace std;

int main()
{
	int i, h;
	int mh[3] = {0};

	for(i=0;i<10;i++){

		cin>>h;
		if(0<=h && h<=10000)
		if(mh[0] < h){
			mh[2] = mh[1];
			mh[1] = mh[0];
			mh[0] = h;
		}
		else if(mh[1] < h){
			mh[2] = mh[1];
			mh[1] = h;
		}
		else if(mh[2] < h) mh[2] = h;

	}
	for(i=0;i<3;i++)	cout<<mh[i]<<endl;

	

	return 0;
}