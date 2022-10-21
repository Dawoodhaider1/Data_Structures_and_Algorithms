#include<iostream>
#include<string>
using namespace std;

int main() {

  int numbers[5]={0,0,0,0,0};
  int index;
  int a;
  
  	alpha:
	cout << "Enter index where you want to enter value: " << endl;
	cin >> index;
	
	//while(a<5){
	if (index < 5)
	{
  	
  	if(numbers[index]==0)
  	{
  		cout << "Enter value: " << endl;
  		cin >> numbers[index];
	  
}
	  else
	  {
	  	cout << "A value already exists !" << endl;
	  	
	  }

 	 cout << "The numbers are: " << endl;
 	 
 	 for (int n = 0; n < 5; ++n) {
 	   cout << numbers[n] << "  " << endl;
 	 }
 	 
  	 cout << "Do you want to enter next values ? 1=Yes/0=No"<< endl;
 	 cin >> a;
 	/* alpha2:
 	 	cout<< numbers[4] << endl;*/
 	 if(a=1)
 	 {
 	 	goto alpha;
	  }
	 else if(a=0)
	  {
	  	return 0;
		  //goto alpha2;
	  }
 }
 else
 {
 	cout << "The index you entered is out of Array bounds !";
 }

 	 return 0;	
}
