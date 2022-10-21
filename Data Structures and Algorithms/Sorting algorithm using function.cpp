#include<iostream>
using namespace std;

void func(int m[])
{
	int n;
	for(int a=0;a<5;a++)
	{
		for(int b=a+1;b<5;b++)
		{
			if(m[a] > m[b])
			{
				n=m[a];
				m[a]=m[b];
				m[b]=n;
			}
			
		}
	}
}
int main()
{
	int a,b,n;
	int m[5]={};
	cout<<"Enter elements of unsorted array:"<<endl;
	for(int i=0; i<5; i++)
	{
		cin>>m[i];
	}
	
	func(m);
	
	cout<<"Sorted array is :"<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<m[i]<<endl;
	}
	return 0;
}
