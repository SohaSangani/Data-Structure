# include<iostream>
# include<vector>
# include<set>
using namespace std;
int main()
{
    int n;
    cout<<"Enter no. of candies : ";
    cin>>n;

    if(n%2 != 0)
    {
        cout<<"Enter an even number.";
        return 0;
    }
    vector<int>CandyTypes(n);
    for(int i=0; i<n; i++)
    {
        cin>>CandyTypes[i];
    }
    set<int> UniqueTypes;
    for(int i=0; i<n; i++)
    {
        UniqueTypes.insert(CandyTypes[i]);
    }
    int DifferentTypes = UniqueTypes.size();

    int half = n/2;

    int answer;

    if(DifferentTypes < half)
    {
        answer = DifferentTypes;
    }
    else
    {
        answer = half;
    }

    cout<<"Maximum candy types Alice can eat : "<<answer;

    return 0;
}
