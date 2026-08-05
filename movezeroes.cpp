# include<iostream>
# include<vector>
using namespace std;
int main()
{
    int n , arr[100] ;
    cout<<"How many elements you want to enter? : ";
    cin>>n;

    cout<<"Enter array elements : "<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int j = 0;

    for(int i=0; i<n; i++)
    {
        if(arr[i]!=0)
        {
            swap (arr[i],arr[j]);
            j++;
        }
    }
    cout<<"After moving zeroes : "<<endl;

    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
