#include<iostream>
using namespace std;

int main()
{
	int n,a=0;
	cout<<"Enter Size of array: ";
	cin>>n;
	int arr[n],arr1[n];
	cout<<"enter elements of the array: "<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<"Enter element no. "<<i;
		cin>>arr[i];
	}
	cout<<"Elements of array after alteration are: "<<endl;
	for(int i=0;i<n;i++)
	{
		if(arr[i] < 0)
		{
			arr1[i]=arr[i];
			a+=1;
		}
		else if(arr[i] > 0)
		{
			for(int i=a;i<n;i++)
			{
				arr1[i]=arr[i];
			}
		}
	cout<<arr1[i]<<endl;
	}
	return 0;
}
