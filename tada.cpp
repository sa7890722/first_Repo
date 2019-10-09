//Pattern
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cout << "Enter order of pattern:\n";
	cin >> n;
	int x=n;
	
	if(n%2)
		x+=1;
	else x+=2;
	for(int i=0;i<x/2;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(j>=n/2-i && j<=n/2+i)
				cout << "*";
			else
				cout << " ";
		}
		cout << "\n";
	}
}