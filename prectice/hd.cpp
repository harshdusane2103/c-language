#include<iostream>
using namespace std;
main()
{
	int i,j,k,l;
	for(i=5;i>=1;i--)
	{
		for(k=5;k>i;k--)
		{
			cout<<" ";
		}
		for(j=1;j<=i;j++)
		{
			cout<<"*";
		}
		for(l=i;l>=1;l--)
		{
			cout<<"*";
		}
		
		cout<<endl;
	}
	
	for(i=1;i<=5;i++)
	{
		for(k=5;k>i;k--)
		{
			cout<<" ";
		}
		for(j=1;j<=i;j++)
		{
			cout<<"*";
		}
		for(l=1;l<=i;l++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
}
