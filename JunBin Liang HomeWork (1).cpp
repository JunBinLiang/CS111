#include <iostream>
#include<string>
using namespace std;

/*1. Write a C++ program to output your full name.
For example, if your full name is David Wang, then the program should print out: Hello, David Wang!
You should use variables to declare your first name and last name, then input your first name and last
name, finally the program should read your input and output your full name.
Note that you can't just output “Hello, David Wang!” in string literal. */

int main()
{
    cout<<"Please Enter my name correctly. Including your first and last name. Enter the first followed by space and then enter my last name!!"<<endl;

    while(true){
    string myName="JunBin Liang";
    string firstName,lastName;
    cin>>firstName>>lastName;

    if(firstName+" "+lastName==myName)
    {
        cout<<"My name is "<<endl<<firstName<<" "<<lastName<<". You are correct, now we will exit the program"<<endl;
        break;
    }

    else{
        cout<<"you enter "<<firstName<<" "<<lastName<<endl;
        cout<<"but That is not my name, did you forget my own name? My name is"<<endl<<" JunBin Liang."<<endl<<" Please do it again!!!";
        cout<<" I use a while loop to make sure you enter my correct name. Remember! First name: JunBin, Last: Liang. It is case sensitive"<<endl;

    }

               }


    return 0;
}
