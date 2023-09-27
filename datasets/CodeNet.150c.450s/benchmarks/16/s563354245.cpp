#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>

using namespace std;

void show(vector<pair<int, int> > ponds){

	int sum=0;
	for( unsigned int i=0; i<ponds.size(); i++ ){
		sum+= ponds[i].first;
	}

	cout<<sum<<endl
		<<ponds.size()<<flush;

	for( unsigned int i=1; i<=ponds.size(); i++ ){
		cout<<' '<<ponds[ponds.size() -i].first<<flush;
	}
	cout<<endl;
}




int main()
{
	stack<int> bsli;
	vector<pair<int, int> > ponds;
	char t;
	int btop;
	int area=0;
//	int linearea=0;
	
	for( int i=0; cin>>t; i++ ){

		if( t=='\\' ){
			bsli.push(i);
		}else if( t=='/' && bsli.size() >0 ){

			btop=bsli.top(); bsli.pop();
			
			area =i -btop;



			while( ponds.size() && ponds[0].second >btop ){
				area += ponds[0].first; ponds.erase(ponds.begin());
			}

			ponds.insert(ponds.begin(), make_pair(area, btop));
		}
	}




	show(ponds);

}
				


			