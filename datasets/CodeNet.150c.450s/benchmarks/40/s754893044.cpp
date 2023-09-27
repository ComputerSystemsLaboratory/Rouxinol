#include <iostream>
#include <string>
using namespace std;

class dice{
    public:
    int d[7];

    dice(){ //??????????????????????????????
    	
    }

    void east(){
    	d[0]=d[1],d[1]=d[4],d[4]=d[6],d[6]=d[3],d[3]=d[0];
    }

    void west(){
    	d[0]=d[4],d[4]=d[1],d[1]=d[3],d[3]=d[6],d[6]=d[0];
    }

    void north(){
    	d[0]=d[5],d[5]=d[1],d[1]=d[2],d[2]=d[6],d[6]=d[0];
    }

    void south(){
    	d[0]=d[2],d[2]=d[1],d[1]=d[5],d[5]=d[6],d[6]=d[0];
    }

};

int main(){
	string n;	
	dice A;
	for(int i=1; i<7; i++){
		cin >> A.d[i];
	}
	cin >> n;

	for(int i=0; i<n.size(); i++){
		
		if(n[i]=='E')A.east();
		else if(n[i]=='W')A.west();
		else if(n[i]=='N')A.north();
		else if(n[i]=='S')A.south();
	}

	cout << A.d[1] << endl;
    
    //for(int i=0; i<7; i++){ //test=ok
	//   cout << A.d[i] << " ";
	//}
	//cout << endl;

	return 0;
}