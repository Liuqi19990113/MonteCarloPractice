#include<iostream>
#include<string>
#include<sstream>
#include<cmath>
#include<ctime>
using namespace std;

/********************  This program is used to calculate the integrate of x^2 from 0 to 4. *******************/
double y_function(double x)
{
    double result = x*x;
    return result;
}



// MC in a big area
int MC_1()
{
    int random_number = 1000000;
    double count = 0;
    for(int i = 1; i <= random_number ; i++)
    {
        double tem_x = ((rand()%1000)/999.0*4.0);
        double tem_y = ((rand()%1000)/999.0*16.0);
        if(y_function(tem_x) > tem_y) count += 1; 
    }
    cout << "The integrate is " << (count/random_number)*64 << endl;
}



// Cut area and MC each
int MC_2()
{
    int random_number = 500000;
    double count = 0;
    for(int i = 1; i <= random_number ; i++)
    {
        double tem_x = ((rand()%1000)/999.0*2.0);
        double tem_y = ((rand()%1000)/999.0*4.0);
        if(y_function(tem_x) > tem_y) count += 1; 
    }
    double area_1 = (count/random_number)*8;
    count = 0;

    for(int j = 1; j <= random_number ; j++)
    {
        double tem_x = ((rand()%1000)/999.0)*2+2.0;
        double tem_y = ((rand()%1000)/1000.0*16.0);
        if(y_function(tem_x) > tem_y) count += 1; 
    }
    double area_2 = (count/random_number)*32;

    cout << "The integrate is " <<  area_1 + area_2 << endl;
}


int main()
{
    srand(time(0));
    MC_1();
    MC_2();


}