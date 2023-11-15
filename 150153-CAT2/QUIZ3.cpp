//admission number 150153
//course DBIT September 2023
//strathmore university
#include<iostream>
using namespace std;
int main(){
 string username="nick";
 double password=1234;
  cout<<"enter your username :"<<endl;//ask user  for name
  cin>>username;
  cout<<"enter your password"<<endl;//ask for password
  cin>>password;
  if (username==username || password==password)
  {
    cout<<"login succesfull.Welcome to my simple app.select an action to perfom"<<endl;
    
    int choice;
    cout<<"1.Go to about us page \n2.Go to services page \n3.Go to full profile page \n4.logout"<<endl;
    cin>>choice;
    switch (choice)
    {
    case 1:
    cout<<"my name is nicholas from Nairobi.I like coding part in programming"<<endl;
    cout<< "1.Go to services page \n2.Go to full profile page \n3.logout"<<endl;
        break;
        case 2:
        cout<<"I am good business person ."<<endl;
        cout<<"1.Go to services page \n2.Go to full page \n3.logout"<<endl;
        break;
        case 3:
        cout<<"My profile\n fullname:nicholas kioko \n yob:24/12/2002 \n country:Kenya \n citizenship:kenyan \n city:Nairobi \ncourse:DBIT \nunit name:introduction to programming\nhobby:football"<<endl;
        break;
        case 4:
        cout<<"Logout successful"<<endl;
        cout<<"enter your username :"<<endl;
        cin>>username;
        cout<<"enter your password"<<endl;
        cin>>password;
        default:
        break;
    }
  }
  }