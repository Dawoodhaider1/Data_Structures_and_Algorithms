#include<iostream>
using namespace std;

int main()
{
	int a,b,n;
	int m[5]={1,6,2,4,8};
	cout<<"Enter elements of unsorted array:"<<endl;
	for(int i=0; i<5; i++)
	{
		cin>>m[i];
	}
	
	for(a=0;a<5;a++)
	{
		for(b=a+1;b<5;b++)
		{
			if(m[a] > m[b])
			{
				n=m[a];
				m[a]=m[b];
				m[b]=n;
			}
			
		}
	}
	
	cout<<"Sorted array is :"<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<m[i];
	}
	return 0;
}
