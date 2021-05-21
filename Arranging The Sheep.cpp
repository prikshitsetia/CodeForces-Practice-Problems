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
		long long n;
		cin>>n;
		char arr[n+1];
		for(long long i=1;i<=n;i++)
			cin>>arr[i];

		long long left[n+1];
		long long right[n+2];//https://www.youtube.com/watch?v=gg0GHhVkRpw
		
		left[0]=0;
		long long count=0;
		
		for(long long i=1;i<=n;i++)
		{
			if(arr[i]=='*')
			{
				left[i]=left[i-1];
				count++;
			}
			else
				left[i]=left[i-1]+count;
		}
		count=0;
		right[n+1]=0;
		for(long long i=n;i>=1;i--)
		{
			if(arr[i]=='*')
			{
				right[i]=right[i+1];
				count++;
			}
			else
			{
				right[i]=right[i+1]+count;
			}
		}
		long long ans=1e15;
		for(long long i=1;i<n;i++)
		{
			ans=min(ans,left[i]+right[i+1]);
		}
		ans=min(ans,right[1]);
		ans=min(ans,left[n]);

		cout<<ans<<endl;
	}
	return 0;
}