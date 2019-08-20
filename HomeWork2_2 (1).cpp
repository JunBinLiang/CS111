#include <iostream>

using namespace std;

int main()
{
    cout << "2.	I have a word document with the size of KB, convert it to how many GB it is and how many MB it is" << endl;
    cout<<"Note : 1GB=1000 MB  1MB=1000 KB."<<endl;
    cout<<"kb: ";
    int kb,mb,gb;
    cin >>kb;
    cout<<endl;
    gb=kb/1000/1000;
    kb%=(1000*1000);
    mb=kb/1000;
    kb%=1000;

    cout<<gb<<" GB "<<mb<<" MB "<<kb<<" KB "<<endl;
    return 0;
}
