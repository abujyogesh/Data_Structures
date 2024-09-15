#include<iostream>

using namespace std;
	
int main()
{
	int num,i;
	int n[100],target;
	cout<<"enter the number of elements:";
	cin>>num;
	cout<<"enter the elements in ascending order";
	for(i=0;i<num;i++)
	{
		cin>>n[i];
	}
	int lr=0,ur=sizeof(n),f=0;
	cout<<"enter element which has to search";
	cin>>target;
	
	while(lr<=ur)
	{
		int mid=(lr+ur)/2;
		if(target==mid)
		{
			f=1;
			break;
		}
		if(target>mid)
		{
			lr=mid+1;
		}
		else
		{
			ur=mid-1;
		}
	}
	
	if(f==1)
	{
		cout<<"element found";
	}
	else
	{
		cout<<"element not found";
	}
	return 0;
}
