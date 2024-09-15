#include<iostream>
using namespace std;

int main()
{
	int i,j,num;
	cout<<"enter number of elements";
	cin>>num;
	int arr[num];
	
	cout<<"enter the array elements";
	for(i=0;i<num;i++)
	{
		cin>>arr[i];
	}
	
    for(i=0;i<num-1;i++)
    {
    	for(j=0;j<num-i-1;j++)
    	{
    		if(arr[j]>arr[j+1])
    		{
    		    int	temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp; 
			}
		}
	}


	cout<<"sorted array :\n";
	for(i=0;i<num;i++)
	{
		cout<<arr[i]<<endl;
	}
	return 0;
}
