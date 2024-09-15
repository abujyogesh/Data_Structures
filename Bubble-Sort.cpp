#include<iostream>
using namespace std;

int main()
{
	int i,j,num;
	cout<<"enter number of elements";
	cin>>num;
	int a[num];
	
	cout<<"enter the array elements";
	for(i=0;i<num;i++)
	{
		cin>>a[i];
	}
	
	for(i=num;i>0;i--)
	{
		for(j=0;j<i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	cout<<"sorted array :\n";
	for(i=0;i<num;i++)
	{
		cout<<a[i]<<endl;
	}
	return 0;
}
