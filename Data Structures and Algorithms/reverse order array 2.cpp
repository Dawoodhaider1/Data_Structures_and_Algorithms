#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"Enter size of the array: ";
	cin>>n;
	int arr[n]={};
	cout<<endl<<"Enter elements of the array: "<<endl;
	for(int a=0;a<n;a++)
	{
		cin>>arr[a];
	}
	cout<<"Array in reverse order is: "<<endl;
	for(int b=n-1;b>=0;b--)
	{
		cout<<arr[b]<<endl;
	}
	return 0;
}
