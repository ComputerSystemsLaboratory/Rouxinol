#include <stdio.h>
#include <iostream>
using namespace std;

class Adjl{
private:
	int u;
	int k;
	int *v;
public:
	Adjl(int u, int k);
	void setV(int vk);
	void printAdjm(int n);
};

Adjl::Adjl(int u, int k)
{
	this->u = u;
	this->k = 0;
	v = new int[k];
}

void Adjl::setV(int vk)
{
	v[k] = vk;
	k++;
}

void Adjl::printAdjm(int n)
{
	int j = 0;
	for (int i = 1; i <= n; i++) {
		if (j < k && v[j] == i) {
			cout << "1";
			j++;
		}
		else {
			cout << "0";
		}
		if (i < n) cout << " ";
		else cout << endl;
	}
}

int main(void)
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int u, k;
		cin >> u >> k;
		Adjl *adjl = new Adjl(u, k);
		for (int j = 0; j < k; j++) {
			int vk;
			cin >> vk;
			adjl->setV(vk);
		}
		adjl->printAdjm(n);
		delete adjl;
	}

	return 0;
}