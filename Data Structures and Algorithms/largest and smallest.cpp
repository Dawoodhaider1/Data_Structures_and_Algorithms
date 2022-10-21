#include<iostream>
using namespace std;

void largest(int arr[])
{
	int large = arr[0];
  for(int i = 1;i < 10; ++i) {

    if(large < arr[i])
    {
    	large = arr[i];
	}
  }
  cout << "The Largest number is:  = " << large << endl ;
}
void lowest(int arr[])
{
	int low=arr[0];
	for(int i=0;i<10;++i)
	{
		if(low > arr[i])
		{
			low = arr[i];
		}	
	}
	cout<<"The lowest number is: "<<low<<endl;
}
int main()
{
	int arr[]={1,2,3,4,5,6,7,8,9,10};
	largest(arr);
	lowest(arr);
	return 0;
}
