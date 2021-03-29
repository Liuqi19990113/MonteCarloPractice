#include<iostream>
#include<string>
#include<sstream>
#include<cmath>
#include<vector>
#include<ctime>
using namespace std;

/**************  This program is used to calculate pi with MC method  ****************/
int main()
{
    vector<double>random_store_x;
    vector<double>random_store_y;
    srand(time(0));                                // set random seed
    int random_num = 1000000;
    for(int i = 1; i <= random_num; i++)
    {
        double tem_x = ((rand()%100)-50.0)/50.0;    // must be 50.0 or it will return an int number
        double tem_y = ((rand()%100)-50.0)/50.0;      //generate some random number between[-1,1]
        random_store_x.push_back(tem_x);
        random_store_y.push_back(tem_y);
    }
    double count_number = 0;
    for(int j = 1; j <= random_num; j++)
    {
        if(random_store_x[j]*random_store_x[j]+random_store_y[j]*random_store_y[j] < 1) count_number += 1;
    }
    
    cout << "pi = " << (count_number/random_num)*4 << endl;

    system("pause");

}
/****************************************************************************************/