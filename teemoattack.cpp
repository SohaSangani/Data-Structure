# include<iostream>
# include<vector>
using namespace std;

int findPoisonedDuration (vector<int> &timeSeries , int duration)
{
    if(timeSeries.empty())
    {
        return 0;
    }
    int total = 0;
    for(int i =0; i<timeSeries.size()-1; i++)
    {
        int gap = timeSeries[i+1] - timeSeries[i];

        if(gap<duration)
        {
            total += gap;
        }
        else
        {
            total+= duration;
        }
        total += duration;
    }
    return total;

}
int main()
{
    int n;
     cout << "Enter number of attack times: ";
    cin >> n;

    vector<int> timeSeries(n);

    cout << "Enter attack times: ";
    for(int i = 0; i < n; i++)
    {
        cin >> timeSeries[i];
    }

    int duration;

    cout << "Enter duration: ";
    cin >> duration;


    cout << "Total Poison Time = " << findPoisonedDuration(timeSeries, duration);

    return 0;
}

