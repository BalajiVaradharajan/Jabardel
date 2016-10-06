#include <stdio.h>
int main()
{
    int a[1000],b[100]={0},c,i;
	scanf("%d",&n);
	for(i=0;i<c;i++)
		scanf("%d",&a[i]);
		for(i=0;i<c;i++)
    	b[a[i]]++;
    for(i=0;i<c;i++)
    {
    	if(b[a[i]]>1)
    	{
    		printf("%d",a[i]);
    		break;
    	}
    }
	return 0;
}