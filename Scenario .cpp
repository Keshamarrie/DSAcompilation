#include<iostream>
using namespace std;

int main()
{
	int a; 
	
	cout<<"CHOOSE A SCENARIO"<<endl;

    cout<<"1. Jhea Scenario"<<endl;
    cout<<"2. Erika Scenario"<<endl;
    cout<<"Exit"<<endl;
    cout<<"CHOOSE: ";
    cin>>a;
    
    
    if (a==1){
    	system("cls");
    	
    string num;
	
	   cout<<"Jhea Scenario 1"<<endl;
	   cout<<"(How to ask the user for their phone number? )"<<endl;
	   a;
	   cout<<"Enter Your Name: "<<endl;
	   cin>>num;
	   
	   if (num.size()<= 1)	{
	       cout<<"Users Number: "<<num;
	   }else{
	   	 cout<<"\nInvalidID\n";
	   }
	   else if (a == 2){
	   	       system("cls");
	   	       
	   	       int e,m,l;
	   	       
	   	       cout<"Erika Scenario 2"<<endl;
	   	       cout<<"Let the User enter two numbers and show the product: "<<endl;
	   	       cout<<"Enter First Number: "<<endl;
	   	       cin>>e;
	   	       cout<<"Enter Second Number: "<<endl;
	   	       cin>>m;
	   	       
	   	       l = e *m;
	   	       
	   	       cout<<"THe total Product is: "<<endl;
	   	       cout<<l;
	   	       
	   }
	   return 0;
	}
}