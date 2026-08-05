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
    cout<<"Your araay elements are : "<<endl;
    for(i=0; i<n; i++)
    {
        cout<<arr[i]<<" "<<endl;
    }

    int *ptr = &arr[n-1];

    cout<<"Array in reversed order : "<<endl;
    for(i=0; i<n; i++)
    {
        cout<<*ptr<<" ";
        ptr--;
    }
return 0;
}
