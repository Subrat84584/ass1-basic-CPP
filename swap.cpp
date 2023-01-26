#include<iostream>
using namespace std;
int main()
{
	int a,b,temp;
	cout<<"enter the value of a and b";
	cin>>a>>b;
	a=a+b;
	b=a-b;
	a=a-b;
	cout<<"after swapping"<<a<<b;
	return 0;
}
