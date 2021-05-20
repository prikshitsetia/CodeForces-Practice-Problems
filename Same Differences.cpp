#include<bits/stdc++.h>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int arr[n];
		unordered_map<int,int> hash;
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		long long count=0;
		for(int i=0;i<n;i++)
		{
			if(hash.count(arr[i]-i))
			{
				count+=hash[arr[i]-i];
				hash[arr[i]-i]=hash[arr[i]-i]+1;
			}
			else
				hash[arr[i]-i]=1;
		}
		cout<<count<<endl;
	}
	return 0;
}