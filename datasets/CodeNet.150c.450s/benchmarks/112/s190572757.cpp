#include <iostream>
#include <vector>

using namespace std;

class CStrings
{
	vector<char> BefStr, AftStr, InpStr;
public:
	CStrings(){}
	
	void setGraph();
	void setInput();
	void restoration();

	void printStr();
};
void CStrings::setGraph()
{
	char buf;

	cin>>buf;
	BefStr.push_back(buf);
	cin>>buf;
	AftStr.push_back(buf);
}
void CStrings::setInput()
{
	char buf;

	cin>>buf;
	InpStr.push_back(buf);
}
void CStrings::restoration()
{
	for(unsigned int i = 0; i < InpStr.size(); i++){
		for(unsigned int j = 0; j < BefStr.size(); j++){
			if(InpStr[i] == BefStr[j]){
				InpStr[i] = AftStr[j];
				break;
			}
		}
	}
}
void CStrings::printStr()
{
	vector<char>::iterator it = InpStr.begin();
	while(it != InpStr.end()){
		cout<<*it;
		it++;
	}
	cout<<endl;
}

int main()
{
	int n, m;

	while(1){
		cin>>n;
		if(n == 0) return 0;

		CStrings cs;
		for(int i = 0; i < n; i++) cs.setGraph();

		cin>>m;
		for(int i = 0; i < m; i++) cs.setInput();

		cs.restoration();

		cs.printStr();
	}
}