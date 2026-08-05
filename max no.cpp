# include<iostream>
# include<vector>
using namespace std;
int main()
{
	int n,i, arr[n], majorityElem;
	
	cout<<"How many elements you want to enter? : ";
	cin>>n;
	cout<<"Enter array elements : "<<endl;
	for(i=0; i<n; i++){
		cin>>arr[i];
	}
	cout<<"Your array elements are : "<<endl;
	for(i=0; i<n; i++){
		cout<<arr[i]<<" ";
	}
    majorityElem(vector<int> & nums)
    {
    	int candidate = 0;
	    int count = 0;
	}
	
	int num;
    {
        if (count == 0)
            candidate = num;

        if (num == candidate)
            count++;
        else
            count--;
    }

    return candidate;
}

int main()
{
    vector<int> nums = {2,2,1,1,1,2,2};

    cout << "Majority Element = " << majorityElement(nums);

    return 0;
}

