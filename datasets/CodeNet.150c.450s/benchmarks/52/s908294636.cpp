#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> Car;
    int Size = 0;
    int number;
    vector<int> Order;

    while(cin >> number)
    {

            if(number != 0)
            {
                Car.push_back(number);
            }
            else if(number == 0)
            {

                Order.push_back(Car[(Car.size())-1]);
                Car.pop_back();

            }




    }
            for(int z = 0; z < Order.size(); z++)
        {
            cout << Order[z] << endl;
        }
}