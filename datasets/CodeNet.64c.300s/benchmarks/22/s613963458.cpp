#include<iostream>
#include<math.h>

using namespace std;

int main()
{
        double c[3];
        int i = 0;
        int temp = 0;
        int data = 0;
        int j = 0;
        int count = 0;
        double hoge,fuga;

        cin >> data;

        while(j<data)
        {
                count = 0;
                cin >> c[0] >> c[1] >> c[2];
                while(count<2){
                for(i=0;i<2;i++)
                {
                        if(c[i]<c[i+1])
                        {
                                temp = c[i];
                                c[i]=c[i+1];
                                c[i+1]=temp;
                        }

                }
                count++;
                }
                hoge = pow(c[0],2.0);
                fuga = pow(c[1],2.0) + pow(c[2],2.0);

                if(hoge == fuga)
                {
                        cout << "YES" << endl;
                }
                else
                {
                        cout << "NO" << endl;
                }

                j++;
        }
}