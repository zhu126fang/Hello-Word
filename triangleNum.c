#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
	int n,i,sum;
	cout<<"Input a N"<<endl;
	cin>>n;
	//cout<<n<<endl;
	
	sum=0;
	for(i=1;i<=n;i++)
	{
		sum=sum+i;
	}
	cout<<"sum is:"<<sum<<endl;
}
