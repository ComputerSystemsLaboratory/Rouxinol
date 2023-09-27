#include <iostream>
#include <map>
#include <set>

#define HW 160
using namespace std;

/*struct rect
{
	int h;
	int w;
	int tai;
};*/

int main(int argc, char const *argv[])
{
	int h,w;

	map<int,set<pair<int,int> > > mp;

	for(int i1=1;i1<HW;i1++){
		for(int i2=i1+1;i2<HW;i2++){
			mp[i1*i1+i2*i2].insert(make_pair(i1,i2));
		}
	}

	while(1){
		cin>>h>>w;
		if(h+w==0) break;

		map<int,set<pair<int,int> > >::iterator it=mp.lower_bound(h*h+w*w);
		if(it!=mp.end()) {
			//cout<<(*it).first<<"a";
			set<pair<int,int> >::iterator is=(*it).second.upper_bound(make_pair(h,w));

			if(is!=(*it).second.end()) {
				cout<<(*is).first<<" "<<(*is).second<<endl;
				//cout<<(*is).second<<"b";
				/*if((is++)==(*it).second.end()){
					//cout<<"c";
					it++;
					is=(*it).second.begin();
					cout<<(*is).first<<" "<<(*is).second<<endl;
				}
				else */
			}
			else {
				it++;
				is=(*it).second.begin();
				cout<<(*is).first<<" "<<(*is).second<<endl;	
			}
		}


	}
	return 0;
}