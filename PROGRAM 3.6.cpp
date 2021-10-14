//PROGRAM 3.6
#include<iostream>
using namespace std;
int main()
{
	int a;
	int b;
	int c;
	int d;
	float sum,product,sub,divide,average;
	cout<<"enter the value of a:"<<endl;
	cin>>a;
	cout<<"enter the value of b:"<<endl;
	cin>>b;
	cout<<"enter the value of c:"<<endl;
	cin>>c;
	cout<<"enter the value of d:"<<endl;
	cin>>d;
	sum=a+b+c+d;
	sub=a-b-c-d;
	product=a*b*c*d;
	divide=a/b/c/d;
	average=a+b+c+d/4;
	cout<<"the answer of sum:"<<sum<<endl;
	cout<<"the answer of sub:"<<sub<<endl;
	cout<<"the answer of product:"<<product<<endl;
	cout<<"the answer of average:"<<average<<endl;
	cout<<"the answer of divide:"<<divide<<endl;
	return(0);
}
