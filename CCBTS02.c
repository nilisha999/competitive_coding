#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	int t;
	FILE *fin = fopen("CCBTS02_test.in","r");
	fscanf(fin, "%d",&t);	//	scanf("%d", &t);
	if(t>=1 && t<=100){
		while(t--)
		{
			int n, start=0, stop=0, error =0;
			fscanf(fin, "%d",&n);	//	scanf("%d", &n);
			char str[100];
			if(n>=1 && n<=10){
				for(int i=0; i<n; i++){
					fscanf(fin, "%s" , str); //	scanf("%s", str);
		//	command = "start"
					if( (strcmp(str, "start"))==0)
					{
						start=1;
					}
		//	command = "restart"
					else
					{
						if ( (strcmp(str, "restart")) == 0 )
						{
							start=1;
						}
					}
		//	command = "stop"
					if( ( (strcmp(str, "stop"))==0) && (start==1) )
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
	// output display
	//	error occurred or not
			if(error==1) {
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
