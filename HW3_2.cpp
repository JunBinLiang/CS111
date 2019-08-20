#include <iostream>

using namespace std;

/*2. Write a program to output the figure
below. Note that the number of the rows is
not fixed, it depends on your input, and the
input number has to be an odd number.

For example, if you input 5, the output
should look like this:

    *
   ***
  *****
   ***
    *
               */

int main()
{
   int row,x,y,midNum;
   while(true){
     cout << "Please enter an odd number" << endl;
     cin>>row;
     if(row%2==0)continue;
     else break;
   }
    midNum=(row/2)+1;   //3
    x=y=midNum;

   for(int i=1; i<=row; i++) //print row line
  {
      for(int j=1; j<=row; j++)
      {
         if(j>=x&&j<=y) cout<<"*";
         else cout<<" ";
      }
      cout<<endl;
      if(i<midNum){x--;y++;}
         else{x++;y--;}
  }
    return 0;
}
