#include <iostream>
#include <vector>
using namespace std;

// Function to generate Pascal Triangle
vector<vector<int> > GeneratePascaltr(int nrows)
{
    vector<vector<int> > triangle;

    for(int i = 0; i < nrows; i++)
    {
        vector<int> row(i + 1, 1);

        for(int j = 1; j < i; j++)
        {
            row[j] = triangle[i-1][j-1] + triangle[i-1][j];
        }

        triangle.push_back(row);
    }

    return triangle;
}

int main()
{
    int nrows = 5;
    int Result;

    vector<vector<int> > Result = GeneratePascaltr(nrows);

    for(vector<int> row : Result)
    {
        for(int val : row)
        {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}
