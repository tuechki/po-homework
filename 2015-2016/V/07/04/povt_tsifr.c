#include <stdio.h>

void main()
{
	int i,a[10];
	long long int n;
	for(i=0;i<10;i++)
		a[i]=0;
	printf("\nVavedi chislo:");
	scanf("%lli",&n);
	while(n!=0)
	{
		a[n%10]++;
		n/=10;
	}
	for(i=0;i<10;i++)
		if(a[i]>1)
			printf("\nTsifrata %d se povtaria %d pati.",i,a[i]);
	printf("\nOstanalite tsifri ne se povtariat ili izobshto ne se sreshtat.\n");
}