#include <bits/stdc++.h>
using namespace std;
bool should_i_swap(pair<int,int>a,pair<int,int>b)
{
    if(a.first!=b.first)
    {
        if(a.first>b.first)
        {
            return true;
        }
        return false;
    }
    if(a.first=b.first)
    {
        if(a.second<b.second)
        {
            return true;
        }else
        return false;
    }
}
int main()
{
    int n;
    cout<<"enter number of elements=";
    cin>>n;
    vector <pair<int,int>>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i].first>>v[i].second;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(should_i_swap(v[i],v[j]))
            {
                swap (v[i],v[j]);
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
    return 0;
}
