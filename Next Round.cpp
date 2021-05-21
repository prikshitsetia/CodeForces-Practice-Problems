#include<bits/stdc++.h>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	int n,k;
	cin>>n>>k;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	int count=0;
	if(arr[k-1]>0)
	{
		count=k;
		for(int i=k;i<n;i++)
		{
			if(arr[i]<arr[k-1])
				break;
			if(arr[i]>0)
			count++;
		}
		cout<<count;
	}
	else
	{
		for(int i=k-1;i>=0;i--)
		{
			if(arr[i]>0)
				count+=1;
		}
		cout<<count;
	}
	
	return 0;
}