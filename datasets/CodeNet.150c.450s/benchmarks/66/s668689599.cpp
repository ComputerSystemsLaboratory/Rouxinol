#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
	int kc;
    vector<string> key;
	cin>>kc;
	key.resize(kc);
    for (int i = 0; i < kc; i++) cin>>key[i];
    bool isOpen = false;
    int oc;
	cin>>oc;
    for (int i = 0; i < oc; i++)
	{
        string tkey;
		cin>>tkey;
        bool isOK = false;
        for (vector<string>::iterator ita=key.begin();ita!=key.end();++ita)
		{
			if(*ita==tkey)
			{
				isOK=true;
				break;
			}
		}		
        if (!isOK)
        {
            cout<<"Unknown "<<tkey<<endl;
        }
        else if (isOpen)
        {
            cout<<"Closed by "<<tkey<<endl;
            isOpen = false;
        }
        else
        {
            cout<<"Opened by "<<tkey<<endl;
            isOpen = true;
        }
	}
}