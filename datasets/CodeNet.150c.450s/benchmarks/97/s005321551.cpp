#include<iostream>
#include<vector>
#include<utility>
#include<cmath>
using namespace std;

pair< int , int > setBox(pair< int , int > pos,int d){
	pair< int , int > res;
	switch(d){
	case 0:
		res.first=pos.first-1;
		res.second=pos.second;
		break;
	case 1:
		res.first=pos.first;
		res.second=pos.second-1;
		break;
	case 2:
		res.first=pos.first+1;
		res.second=pos.second;
		break;
	case 3:
		res.first=pos.first;
		res.second=pos.second+1;
		break;
	}
	
	return res;
}


int main(){
	int n;
	vector< pair < int ,int > > box;
	while(cin>>n,n!=0){
		//cout<<"n"<<n<<endl;
		box.clear();
		pair< int ,int > tmp;
		tmp.first=0;
		tmp.second=0;
		box.push_back(tmp);
		for(int i=1;i<n;i++){
			int ni,d;
			cin >> ni >> d;
			tmp=setBox(box[ni],d);
			box.push_back(tmp);
		}
		int minpos[2],maxpos[2];
		minpos[0]=minpos[1]=0;
		maxpos[0]=maxpos[1]=0;
		for(int i=0;i<n;i++){
			//cout<<box[i].first<<" "<<box[i].second<<endl;
			minpos[0]=min(box[i].first,minpos[0]);
			minpos[1]=min(box[i].second,minpos[1]);
			maxpos[0]=max(box[i].first,maxpos[0]);
			maxpos[1]=max(box[i].second,maxpos[1]);
		}
		int ansx,ansy;
		//cout<<minpos[0]<<" "<<maxpos[0]<<" "<<minpos[1]<<" "<<maxpos[1]<<endl;
		ansx=(maxpos[0]-minpos[0])+1;
		ansy=(maxpos[1]-minpos[1])+1;
		cout<<ansx<<" "<<(ansy)<<endl;
	}
}