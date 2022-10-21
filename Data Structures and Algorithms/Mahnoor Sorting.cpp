#include<iostream>
using namespace std;

void sort(int arr[]){
	int r;
	for (int i = 0; i<6;i++){
		for(int j=i+1;j<6;j++){
			if(arr[i]>arr[j])
			{
				r = arr[i];
				arr[i] = arr[j];
				arr[j] = r;
			}
		}
	}
}
int main(){
	int arr[6] = {2,1,4,5,3,6};
//	int n = sizeof(arr)/sizeof(arr[0]);
	sort(arr);
	cout<<"The sorted array is: "<<endl;
	for(int i=0;i<6;i++)
	{
		cout<<arr[i]<<endl;
	}
	return 0;
}

