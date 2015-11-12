#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
	int n,i,sum;
	int j;
	float SUM;
	float recsum;
	cout<<"Input a N"<<endl;
	cin>>n;
	//cout<<n<<endl;
	SUM=0;
	for (j=1;j<=n;j++)
	{	
		sum=0;
		for(i=1;i<=j;i++)
		{
			sum=sum+i;
		}
		recsum=1/float(sum);
		SUM=SUM+recsum;
		if (SUM>1.999)
		{
			cout<<SUM<<endl;
			cout<<j<<endl;
			break;
		}
	}
	cout<<"SUM is:"<<SUM<<endl;
	//cout<<"recsum is:"<<recsum<<endl;
}
