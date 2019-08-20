#include <iostream>
#include<cmath>
using namespace std;
bool DivisibleBy(int number, int factor)
{

        if (number%factor == 0)
                return(true);
        else
                return(false);

        return(number%factor == 0);

        return(number%factor == 0 ? true : false);

}

bool IsPrime(int num)
{
        if (num < 2)
                return(false);

        for (int i = 2; i <=sqrt(num); i++)
                if (DivisibleBy(num, i))
                        return(false);
        return(true);
}


int fibonacci (int n)
{
   int first=0;
   int second=1;
   int result=0;




   for(int i=3; i<=n;i++){
    result=first+second;
    first=second;
    second=result;
                         }
    return result;
   }




int main()
{

cout<<"This program is used to test if a number is prime or not to print out the first 5 Fibonacci that are also primes. "<<endl;

   int numFive=5;
   int i=3;
   while(true){
        fibonacci(i);
        i++;
     if(IsPrime(fibonacci(i))){
        cout<<fibonacci(i)<<endl;
        numFive--;
                               }
    if(numFive==0)break;
            }
    return 0;
}
