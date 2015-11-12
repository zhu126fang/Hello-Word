#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
	int n,i,sum;
	float recsum;
	cout<<"Input a N"<<endl;
	cin>>n;
	//cout<<n<<endl;
	
	sum=0;
	for(i=1;i<=n;i++)
	{
		sum=sum+i;
	}
	recsum=1/float(sum);
	cout<<"sum is:"<<sum<<endl;
	cout<<"recsum is:"<<recsum<<endl;
}
