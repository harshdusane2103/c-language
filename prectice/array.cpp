//"a["<<i<<"]""["<<j<<"]"
#include<iostream>
using namespace std;
main()
{
	int n;
	cout<<"ENTER ARRAY SIZE :";
	cin>>n;
	int a[n][n];
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<"a["<<i<<"]""["<<j<<"]"<<":";
			cin>>a[i][j];
		}
	}
		for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
		
			cout<<endl<<a[i][j];
		}
	}
} 
