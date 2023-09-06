// Q1. Given K sorted arrays of size N each, merge them and print the sorted output.

// Arrays are given as a 2D array:

// arr = {{1, 3, 5, 7},

//           {2, 4, 6, 8},

//           {0, 9, 10, 11}}

// Merged array: 0 1 2 3 4 5 6 7 8 9 10 11 


#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>

using namespace std;
/*
| TC = O(K*n)
| SC = O(k*n)
*/

vector<int> Merge_And_Sort_Array(vector<vector<int>> &v)
{
    

    priority_queue<int,vector<int>,greater<int>> pq;

    for(int i = 0;i<v.size();i++)
    {
        for(int j  = 0;j<v[i].size();j++)
        {
         pq.push(v[i][j]);
        }
    }

v.clear();

vector<int> ans;

    while(!pq.empty())
    {
        ans.push_back(pq.top());
        pq.pop();
    }

    return ans;
}
int main()
{
    int n,k;
    cout<<"Enter the no of the array : ";
    cin>>k;

    cout<<"\nEnter the length of each array : ";
    cin>>n;
    cout<<"Enter the element of the array : "<<endl;
    vector<vector<int>> v(k,vector<int> (n));


    for(int i = 0;i<k;i++)
    {
        for(int j = 0;j<n;j++)
        {
            cin>>v[i][j];
        }
    }


    //2.sending each vector to the sort_Array function of the sorting .
    
        vector<int> ans = Merge_And_Sort_Array(v);
    

    //3.printing the ans vector here.
        cout<<endl;
        cout<<"the final answer is : "<<endl;

        for(int i = 0;i<ans.size();i++)
        {
            cout<<ans[i]<<" ";
        }
    

    return 0;
}//Jai Jai Jai Bajarangbali...