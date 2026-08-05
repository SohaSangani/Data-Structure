# include<iostream>
using namespace std;
int main()
{
    int i , j , n ;
    cout<<"How many elements you want to enter? : ";
    cin>>n;
    int nums[n];
    cout<<"Enter array elements : "<<endl;
    for(i=0; i<n; i++)
    {
        cin>>nums[i];
    }
    int target = 0;
    cout<<"Enter Target : ";
    cin>>target;

    bool found = false;

    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                cout<<"Indices are "<< i <<" and "<< j;
                found = true;
                return 0;

            }
        }
    }
    if(found!= true)
    {
        cout<<"No solution found ...";
    }

    return 0;
}
