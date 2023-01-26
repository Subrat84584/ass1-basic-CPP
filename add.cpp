#include<iostream>
using namespace std;
int main()
{
	int a[10],i;
	cout<<"enter the all the element of the array";
	for(i=0;i<10;i++)
	{
		cin>>a[i];
	}
	int sum=0;
	for(i=0;i<10;i++)
	{
		sum=sum+a[i];
	}
	cout<<"add of number"<<sum;
	return 0;
}
