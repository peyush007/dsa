#include<bits/stdc++.h>
using namespace std;
class solution
{
    public:
    vector<int> subarraysum(int arr[], int n, long long s)
    {
        vector<int> ret;
        
        long long temp = 0;
        for(int i = 0; i<n; ++i)
        {
            for(int j = i; j<n; ++j)
            {
                temp += arr[i];
                if(temp == s)
                {
                    ret.push_back(i+1);
                    ret.push_back(j+1);
                    return ret;
                }
                else if(temp > s)
                {
                    temp = 0;
                    break;
                }
                
            }
        }
        ret.push_back(-1);
        return ret;
    }

};

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        int arr[n];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];

        }
        solution ob;
        vector<int> res;
        res = ob.subarraysum(arr,n,s);
        for(int i; i<res.size(); i++)
        cout<<res[i]<<" ";
        cout<<endl;
    }
    return 0;
}