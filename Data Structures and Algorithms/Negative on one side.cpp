#include<iostream>
using namespace std;

int main()
{
	int a,b,n,N;
	cout<<"Enter size of array: ";
	cin>>N;
	int m[N];
	cout<<"Enter elements of the array: "<<endl;
	for(int i=0; i<N; i++)
	{
		cin>>m[i];
	}
	
	for(a=0;a<N;a++)
	{
		for(b=a+1;b<N;b++)
		{
			if(m[a] > m[b])
			{
				n=m[a];
				m[a]=m[b];
				m[b]=n;
			}
			
		}
	}
	
	cout<<"Elements of array after alteration are :"<<endl;
	for(int i=0;i<N;i++)
	{
		cout<<"Element no. "<<i+1<<" is: "<<m[i]<<endl;
	}
	return 0;
}
