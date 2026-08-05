# include<iostream>
# include<vector>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"Enter no. of elements: ";
    cin>>n;

    vector<int>nums(n);

    cout<<"Enter array elements : "<<endl;
    for(i=0; i<n; i++)
    {
        cin>>nums[i];
    }
    vector<int> result;
    for(i=1; i<=n; i++)
    {
        bool found = false;

        for(j=1; j<=n; j++)
        {
            if(nums[j]==i)
            {
                found = true;
                break;
            }
        }
        if (found == false)
        {
            result.push_back(i);
        }
    }

    cout<<"Missing numbers : ";

    for(int x : result)
    {
        cout<<x<<" ";
    }
   return 0;
}
