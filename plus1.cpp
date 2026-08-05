# include<iostream>
using namespace std;
int main()
{
	int n,i,arr[100];
cout<<"How many elements you want to enter? : ";
cin>>n;
cout<<"Enter array elements : "<<endl;
for(i=0; i<n; i++)
{
	cin>>arr[i];
}
cout<<"Your array : "<<endl;
for(i=0; i<n; i++)
{
	cout<<arr[i]<<" "<<endl;
}
cout<<"New array : "<<endl;
{
	arr[n-1] = arr[n-1] + 1;
	for(i=0; i<n; i++)
	{
		 cout<<arr[i]<<" "; 
	}
   
}

return 0;
}


