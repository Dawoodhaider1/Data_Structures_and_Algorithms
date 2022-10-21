#include<iostream>
using namespace std;

int N=5,n=10;
int m[10] = {1,2,3,4,5,0,0,0,0,0};

bool isEmpty()
	{
		if(N==0){
		cout<<"List is empty!"<<endl;
		return true;
		}
		else
		return false;
	}
bool isFull()
	{
		if(N==n){
		cout<<"List is Already full!"<<endl;
		return true;}
		else
		return false;
	}
	
void enqueue_highest(int m[])
{
	int value;
	if(!isFull())
	{
		cout<<"Enter the Value: ";
		cin>>value;
		for(int i=N;i<0;i--)
		{
			m[i]=m[i-1];
		}
		m[0]=value;
		N++;
	}
}

void enqueue_middle(int m[])
{
	int value, middle;
	if(!isFull())
	{
		cout<<"Enter the Value: ";
		cin>>value;
		middle=N/2;
		for(int i=N;i>middle;i--)
		{
			m[i]=m[i-1];
		}
		m[middle]=value;
		N++;
	}
}

void enqueue_lowest(int m[])
{
	int value;
	if(!isFull())
	{
		cout<<"Enter the Value: ";
		cin>>value;
		m[N]=value;
		N++;
	}
}

void dequeue(int m[])
{
	if(!isEmpty())
	{
		for(int i=0;i<N;i++){
			m[i]=m[i+1];
		}
		N--;
		}
}

void Priority_queue(int m[],int b)
{
	cout<<endl<<"Set the priority of the Queue"<<endl;
	cout<<"1. Highest priority "<<endl;
	cout<<"2. Middle Priority "<<endl;
	cout<<"3. Lowest Priority "<<endl;
	cin>>b;
	switch(b)
	{
		case 1:
			{
				enqueue_highest(m);
				cout<<"Element Added on the front !"<<endl;
				break;
			}
		case 2:
			{
				enqueue_middle(m);
				cout<<"Element added in the middle !"<<endl;
				break;	
			}
		case 3:
			{
				enqueue_lowest(m);
				cout<<"Element added at the end !"<<endl;
				break;
			}
		default:
			{
				cout<<"Your input is not appropriate !"<<endl;
			}
	}
}

int main()
{
	int a,b;
	do
	{
		cout<<endl<<"Enter the option to perform the Action:"<<endl;
		cout<<"0. To Terminate the program "<<endl;
		cout<<"1. TO Enqueue elements in priority "<<endl;
		cout<<"2. To Dequeue elements "<<endl;
		cout<<"3. To print the Queue "<<endl;
		cin>>a;
		
		switch(a)
		{
			case 0:
				{
					cout<<"Program Terminated !"<<endl;
					break;
				}
			case 1:
				{
					Priority_queue(m,b);
					break;
				}
			case 2:
				{
					dequeue(m);
					if(!isEmpty())
					{
						cout<<"Element Removed !"<<endl;
					}
					
					break;
				}
			case 3:
				{
					for(int i=1;i<=10;i++)
					cout<<"Queue element no "<<i<<" is: "<<m[i-1]<<endl;
					break;
				}
			default:
			{
				cout<<"Your input is inappropriate !"<<endl;
			}
		}
	}
	while(a!=0);
}
