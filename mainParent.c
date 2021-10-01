#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
{
	int i,t;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		int q=0,j,k,n;
		scanf("%d",&n);
		int arr[n][3];
		char ans[n];
		for(j=0;j<n;j++)
		{
			for(k=0;k<2;k++)
				scanf("%d",&arr[j][k]);
			arr[j][2]=j;
		}
		for(j=0;j<(n-1);j++)
		{
			int min=j;
			for(k=j+1;k<n;k++)
			{
				if(arr[k][0]<arr[min][0])
					min=k;
			}
			int a=arr[j][0];
			arr[j][0]=arr[min][0];
			arr[min][0]=a;
			int b=arr[j][1];
			arr[j][1]=arr[min][1];
			arr[min][1]=b;
			int c=arr[j][2];
			arr[j][2]=arr[min][2];
			arr[min][2]=c;
		}
		ans[0]='C';
		ans[1]='J';
		for(j=2;j<n;j++)
		{
			int maxj=0,maxc=0;
			for(k=0;k<j;k++)
			{
				if(ans[k]=='C' && arr[k][1]>maxc)
					maxc=arr[k][1];
				if(ans[k]=='J' && arr[k][1]>maxj)
					maxj=arr[k][1];
			}
			if(arr[j][0]>=maxc)
				ans[j]='C';
			else if(arr[j][0]>=maxj)
				ans[j]='J';
			else
				q=1;
			if(q==1)
				break;
		}
		printf("Case #%d: ",(i+1));
		if(q==1)
			printf("IMPOSSIBLE\n");
		else
		{
			for(j=0;j<n;j++)
			{
				for(k=0;k<n;k++)
				{
					if(arr[k][2]==j)
					{
						printf("%c",ans[k]);
						break;
					}
				}
			}
			printf("\n");
		}
	}
	return 0;
}
