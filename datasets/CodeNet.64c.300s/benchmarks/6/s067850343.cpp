#include<iostream>
using namespace std;
struct space{
	int build;
	int floor;
	int room ;
	int pepole;
} A[120];

int FindPos(int build,int floor,int room)
{
	return (build-1)*30+(floor-1)*10+room-1;
}

int main()
{
	int floor,build,room,num,n,pos,k=0;
	for(int i=0 ;i<4;i++){
		for(int j=0;j<3;j++){
			for(n=0;n<10;n++){
				A[k].build=i+1;
				A[k].floor=j+1;
				A[k].room=n+1;
				A[k].pepole=0;
				k++;
			}
		}
	}
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>build>>floor>>room>>num;
		pos=FindPos(build,floor,room);
		A[pos].pepole+=num;
	}
	k=0;
	for(int i=0 ;i<4;i++){
		for(int j=0;j<3;j++){
			for(int n=0;n<10;n++){
				cout<<" "<<A[k].pepole;
				k++;
			}
			cout<<endl;
		}
		if (i!=3){
			for(int s=0;s<20;s++)
			cout<<"#";
			cout<<endl;	
		}
		
	}
	
	return 0;
}
