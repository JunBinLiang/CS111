#include <iostream>
using namespace std;


void printArray(int *p, int size)  // passing as pointer
{
    for(int i=0;i<size;i++)
    {
        cout<<*p<<"\t";
        *p++;

    }


}

int findMin(int *p, int size,int x){
    int minIndex=x;
    for(int i=x+1; i<size;i++){if(p[minIndex]>p[i]) minIndex=i;}
 return minIndex;
}

void swap(int *p,int j, int min)
{    int temp=p[j];
     p[j]=p[min];
     p[min]=temp;

}


int main()
{
    int size;
    cout << "Please enter the size of array, and then enter the array" << endl;
    cin>>size;
    int *myarray=new int[size]; //get uninitialized size integer

    for(int i=0; i<size;i++){
        cin>>myarray[i];
    }  //initialized them
    cout<<"The array you enter is"<<endl;
    printArray(myarray,size);
    cout<<endl;  //good

    for(int j=0;j<size;j++)
    {
       int min= findMin(myarray,size,j);  //0 1 2 3...
        swap(myarray,j,min);
    }
     printArray(myarray,size);

     if(size%2==0){double median=(myarray[(size/2)]+myarray[(size/2-1)])/2.0; cout<<"The median is "<<median<<endl;}
     if(size%2==1){double median=myarray[(size/2)];cout<<"The median is "<<median<<endl;}

    delete [] myarray;  //reallocate the memory
    return 0;
}
