#include<iostream>
using namespace std;

void sort(int arr[], int n){
	for (int i = 0; i < n; i++){
		
		for(int j=i+1; j < n; j++){
			 
			if(arr[i] > arr[j]){
				
		    	int	r = arr[i];
				arr[i] = arr[j];
				arr[j] = r;
				
			}
		}
			
	}
};

int main(){
	int arr[] = {2,1,4,5,3,6};
	int n = sizeof(arr)/sizeof(arr[0]);
    sort(arr,6);

		for(int i=0;i<n;i++){
		cout<<"The sorted array is "<<arr[i]<<endl;
	}
	return 0;
}
