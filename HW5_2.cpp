#include <iostream>
#include<ctime>
#include <cstdlib>
using namespace std;

int getRadom(){
   int x=rand()%(1000-100)+100;
   return x;
}
void print(int myArray[10][10]){
   for(int i=0; i<10; i++){
         for(int j=0; j<10; j++)
    {
         cout<<myArray[i][j]<<" ";
    }
          cout<<endl;}
}
int columnSum(int myArray[10]){
   int sum=0;
   for(int i=0; i<10;i++){
    sum+=myArray[i];
   }
   return sum;
}
int largest(int CArray[10]){
   int max=CArray[0];
   int maxindex=0;
   for(int i=0; i<10;i++){
    if(max<CArray[i]){max=CArray[i];maxindex=i;}
   }
   return maxindex;
}

int main()
{   int myArray[10][10];
    int columnArray[10];
    int comparision[10];
    srand(time(0));
    cout << "Random number for 2d array" << endl;
    for(int i=0; i<10; i++)
         for(int j=0; j<10; j++)
    {
         myArray[i][j]=getRadom();
    }
    cout<<"Print it"<<endl;
    print(myArray);


   for(int row=0; row<10; row++){
   for(int col=0;col<10;col++){
        columnArray[col]= myArray[col][row];
   }
       cout<<"column  "<<row+1<<"sum:";
       cout<<columnSum(columnArray)<<endl;
       comparision[row]=columnSum(columnArray);
   }

   cout<<"The Max colum is "<<largest(comparision)+1<<"  "<<comparision[largest(comparision)] <<endl;
    for(int i=0;i<10;i++){
        cout<<myArray[i][largest(comparision)]<<endl;
    }
    return 0;
}
