#include <stdio.h>

int main()
{
	int n,l,chr[100][3],t=0,pr;
	scanf("%d%d",&n,&l);
	for(int i=0;i<n;i++) for(int j=0;j<3;j++) scanf("%d",&chr[i][j]);
	int final=l-chr[n-1][0];
	for(int i=n-1;i;i--) chr[i][0]-=chr[i-1][0];
	for(int i=0;i<n;i++)
	{
		pr=chr[i][1]+chr[i][2];
		t+=chr[i][0];
		if(t%pr<chr[i][1]) t+=chr[i][1]-(t%pr);
	}
	t+=final
	printf("%d",t);
}
