#include<bits/stdc++.h>
using namespace std;
int main()
{
	int arr[100],count=0;
	for(int i=0;i<100;i++)
	{
		cin>>arr[i];
		if(arr[i]>=10)
		count=count+1;
	}
	cout<<count<<endl;
}