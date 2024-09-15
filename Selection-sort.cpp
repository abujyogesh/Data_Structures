#include<iostream>
using namespace std;

int main()
{
	int i,j,n,smallest;
	cout<<"enter limit:";
	cin>>n;
	int arr[n];
	cout<<"enter array elements";
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	for(i=0;i<n-1;i++)
	{
		smallest=i;
		for(j=i+1;j<n;j++)
		{
			if(arr[smallest]>arr[j])
			{
				smallest=j;
			}
		}
		int temp=arr[smallest];
	    arr[smallest]=arr[i];
	    arr[i]=temp;
		
	}
		cout<<"sorted array :\n";
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<endl;
	}
	return 0;
}
