#include <iostream>

using namespace std;

int main()
{
    cout<< "Convert Miles to Kilometers." << endl;
    cout<<"Note that: 1 Mile =1.6 Kilometers."<<endl;
    cout<<"Please give an input of mile, we will give the result of Kilometers."<<endl;
    cout<<"Mile :";
    double mile;
    cin>>mile;
    cout<<endl;
    double kilometers=1.6*mile;

    cout<<"Kilometers: "<<kilometers<<endl;
    return 0;
}
