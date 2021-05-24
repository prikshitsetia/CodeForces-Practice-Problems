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
		int n;cin>>n;
		int arr[n];
		for(int i=0;i<n;i++)
			cin>>arr[i];
		int first=arr[0];
		int ans;
		for(int i=1;i<n;i++)
		{
			if(arr[i]!=first)
			{
				if(i+1<n)
				{
					ans=arr[i+1]==first?i:0;
					break;
				
				}
				else
				{
					ans=arr[i-1]==first?i:0;
					break;
				}
			}
		}
		cout<<ans+1<<endl;
	}
	return 0;
}