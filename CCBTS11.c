#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	int t;
	scanf("%d", &t);
	if(t>=1 && t<=100){
		while(t--)
		{
			int n, start=0, stop=0, error =0;
			scanf("%d", &n);
			char str[100];
			if(n>=1 && n<=10){
				for(int i=0; i<n; i++)
				{
					scanf("%s", str);
					if( (strcmp(str,"start"))==0)
					{
						start=1;
					}
					else
					{
						if (strcmp(str,"restart") == 0 )
						{
							start=1;
						}
					}
					if( ( (strcmp(str,"stop"))==0) && (start==1) )
					{
						start=0;
					}
					else
					{
						if( ( (strcmp(str,"stop"))==0) && (start==0) )
						{
							error= 1;
						}
					}
				}
			}
			if(error==1)
			{
				printf("404\n");
			}
			else
			{
				printf("200\n");
			}
		}
	}
	return 0;
}
