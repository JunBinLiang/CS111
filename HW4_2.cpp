#include <iostream>

using namespace std;

double max3(double num1, double num2, double num3)
{
    double max=0;
    max=num1;

    if(max<num2)max=num2;
    if(max<num3)max=num3;
    return max;
}

int main()
{    double num1;
     double num2;
     double num3;
     cin>>num1>>num2>>num3;

    cout << "Enter 3 number" << endl;
    cout<<"The max is "<<max3(num1,num2,num3)<<endl;
    return 0;
}
