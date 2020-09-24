#include<bits/stdc++.h>
using namespace std;
int main()
{
	char s[100];
	int up=0,lp=0;
	gets(s);
	for(int i=0;i<strlen(s);i++)
	{
		if(isupper(s[i]))
		{
			up++;
		}
		else
		{
			lp++;
		}
		
		
	}
	if (up==lp||lp>up)
	{
		for (int i = 0; i < strlen(s); i++)
		{
			if(isupper(s[i]))
		{
			s[i]=s[i]+32;
		}		
		}		
	}
	else
	{
		for (int i = 0; i < strlen(s); i++)
		{
			if(s[i]>=97 && s[i]<=122)
		{
			s[i]=s[i]-32;
		}
		}
	}
	cout<<s;
	

}