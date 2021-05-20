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
		string str;
		cin>>str;
		int n=str.size();
		if(n>10)
		{
			string replace=str.substr(1,n-1);
			cout<<str[0]<<replace.size()-1<<str[n-1]<<endl;
		}
		else
			cout<<str<<endl;
	}
	return 0;
}