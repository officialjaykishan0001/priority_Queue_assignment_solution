//######################_PROBLEM_STATEMENT_###########################
//Q2. Given a list of intervals, merge overlapping intervals using a priority queue

#include<iostream>
#include<queue>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;

vector<vector<int>> helper(vector<vector<int>> &intervals)
{
    
}
int main()
{
    int n ;
    cout<<"Enter the no of the intervals : ";
    cin>>n;

vector<vector<int>> v(n,vector<int> (2));

    for(int i = 0;i<n;i++)
    {
        for(int j = 0;j<2;j++)
        {
            cin>>v[i][j];
        }
    }


    vector<vector<int>> ans = helper(v);

    cout<<"The final answer is : "<<endl;
      for(int i = 0;i<ans.size();i++)
    {
        for(int j = 0;j<2;j++)
        {
            cin>>v[i][j];
        }
    }

    return 0;
}