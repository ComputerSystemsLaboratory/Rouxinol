/*AOJ 0021*/

#include<iostream>
using namespace std;

class point_obj{
public:
	double x,y;
};

int main(){

	int n;
	point_obj p[4];


	cin>>n;

	for(int i=0;i<n;i++){

		for(int j=0;j<4;j++){
			cin>>p[j].x;
			cin>>p[j].y;
		}

		if( p[1].x - p[0].x == 0){
			if(p[3].x-p[2].x == 0){
				cout<<"YES"<<endl;
			}

			else{
				cout<<"NO"<<endl;
			}

		}

		else{
			double tmp0 = (p[1].y - p[0].y)/(p[1].x - p[0].x);
			if(p[3].x-p[2].x == 0){
				cout<<"NO"<<endl;
			}
			else{
				double tmp1 = (p[3].y - p[2].y)/(p[3].x-p[2].x);
				if(tmp0 == tmp1){
					cout<<"YES"<<endl;
				}
				else{
					cout<<"NO"<<endl;
				}
			}
		}
	}

	return 0;
}