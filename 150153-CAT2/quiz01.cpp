//admission number 150153
//course DBIT September 2023
//strathmore university
#include<iostream>
using namespace std;
int main(){

int year;
cout<<"enter the year"<<endl;//ask user for the year
cin>>year;

if (year%4==0)
{
    cout<<year <<" is leap year"<<endl;
}else{
    cout<<year <<" is not leap year"<<endl;
}
return 0;



}