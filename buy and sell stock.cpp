# include<iostream>
using namespace std;
int main()
{
    int n , i;
    cout<<"Enter Size : ";
    cin>>n;

    int prices[n];
    cout<<"Enter Prices : ";
    for(i=0; i<n; i++)
    {
        cin>>prices[i];
    }

    int minprice = prices[0];
    int maxprofit = 0;

    for(i=1; i<n; i++)
    {
        if(prices[i]<minprice)
        {
            minprice = prices[i];
        }
        int profit  = prices[i] - minprice;

        if(profit>maxprofit)
        {
            maxprofit = profit;
        }
    }
    cout<<"Maximum profit : "<<maxprofit;

    return 0;
}
