#include <iostream>

using namespace std;


/*1. Write a program that outputs the greatest
common divisor of two positive integers. For
example, if you input two positive integers
6 and 9, the program will output 3. Note
that you also need to test if an input
number is positive or not, if it is not
positive, you will force the user to try
again until the user enters a positive
number. */

int greatCommonDivisor(int first, int second)
{

    if (first == 0 || second == 0)
       return 0;


    if (first == second)
        return first;


    if (first > second)
        return greatCommonDivisor(first-second, second);
    return greatCommonDivisor(first, second-first);
}


int main()
{
    cout << "We will output the greatest common divisor between two number. " << endl;
    int number1,number2,greatestDivisor;
    bool whileTest=true;
    while(whileTest)
    {
        cin>>number1>>number2;
        if(number1<0||number2<0)
        {
         cout<<"Please enter positive number"<<endl;
         continue;
        }
        cout<<"The number you enter is "<<number1<<" and "<<number2<<endl;
        whileTest=false;
    }
    greatestDivisor=greatCommonDivisor(number1,number2 );
    cout<<"The greatest common divisor between "<<number1<<" and "<<number2<<" is "<<greatestDivisor<<endl;
    return 0;
}
