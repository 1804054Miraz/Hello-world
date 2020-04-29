#include <cstdio>
#include<cstring>
#include<string>
#include<iostream>
using namespace std;
int main()
{
	int t,i,j;
	char card[53][3];
	scanf("%d",&t);
	for(i=1;i<=t;i++)
	{
		for(j=0;j<52;j++)
		scanf("%s",card[j]);
		
		printf("Case %d: %s\n",i,card[32]);
	}
}
