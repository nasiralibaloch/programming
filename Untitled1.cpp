#include<iostream>
using namespace std;
int main()
{char ch;

	int t;
	int i=1;
	int num;

	do
	{
		
			cout<<"enter the table value"<<endl;
	cin>>t;
	cout<<"enter num";
	cin>>num;
	cout<<"enter character";
	cin>>ch;
	if(ch=='n')
	break;
	
	for(int i=1;i<=num;i++)
	{
		cout<<t<<"*"<<i<<"="<<t*i<<endl;
	}
     
     i=i+1;
	}
	while(i!=0);
	{
		cout<<"thanks for loop using"<<endl;
	}
	return 0;
}
