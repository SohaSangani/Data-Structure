# include<iostream>
using namespace std;
int main()
{
    int i,j ,n;
    cout<<"Enter size : ";
    cin>> n;
    int nums[n];
    cout<<"Enter array elements : "<<endl;
    for(i= 0; i<n; i++)
    {
        cin>>nums[i];
    }
    bool duplicate = false;

    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(nums[i]== nums[j])
            {
                duplicate = true;

            }
        }
    }
    if (duplicate)
    {
        cout<<"True";
    }
    else
    {
        cout<<"False";
    }

    return 0;
}
