#include<iostream>
using namespace std;

void function(int arr1[], int arr2[])
{
	int x=0;
	int arr3[5];
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			if(arr1[i]==arr2[j])
			{
				arr3[j]=arr2[j];
				x+=1;
			}
		}		
	}
	cout<<"The Intersection of two arrays is: "<<endl;
	for(int a=0;a<x;a++)
	{
		cout<<"Element "<<a+1<<" is "<<arr3[a]<<endl;
	}
}

int main()
{
	int arr1[5]={5,9,1,3,7};
	int arr2[5]={5,3,6,2,8};
	function(arr1,arr2);
	return 0;
}
