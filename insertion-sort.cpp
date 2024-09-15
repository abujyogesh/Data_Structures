#include<iostream>
using namespace std;

int main()
{
	int i,j,n,current;
	cout<<"enter limit:";
	cin>>n;
	int arr[n];
	cout<<"enter array elements";
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	
	for(i=1;i<n;i++)
	{
		current=arr[i];
		j=i-1;
		while(j>=0 && current<arr[j])
		{
			arr[j+1]=arr[j];
			j--;
		}
		
		arr[j+1]=current;
	}
	
	cout<<"sorted array :\n";
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<endl;
	}
	return 0;
}
