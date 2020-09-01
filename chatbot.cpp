#include<iostream>
#include<string>
using namespace std;
int main()
{
	char inp,y,n,Y,N;
	string name,gtkey;
	int age;
	
cout<<"\t\t WELCOME TO CHATBOX\n\n";
cout<<"to continue the program type 'Y' and to End type 'N' -\n";
	cout<<"-->";
cin>>inp;
if(inp=='y'||inp=='Y')
{
	cout<<"Welcome ......";
	
}
else
{
	cout<<"Thanks for coming ";
}
system("cls");
if(gtkey!="bi")
{
	cout<< "\t HELLO USER \n";
		cout<<"-->";
	    cin>>gtkey;
	cout<<"what is your name? \n";
		cout<<"-->";
	cin>>name;
	cout<<" What is Your age?\n";
		cout<<"-->";
	cin>>age;
	switch(age)
	{
		case 18:
			cout<<"you are young";
			break;
		case 30:
			cout<<"you are a man";
			break;
		default:
			cout<<"nothing say about your age";
			
		
	}
	cout<<"\n bi bi "<<name<<"\n";
	cout<<"-->";
	cin>>gtkey;
	
}
system("cls");
cout<<"\T\T\TPROGRAM END HERE";

}
