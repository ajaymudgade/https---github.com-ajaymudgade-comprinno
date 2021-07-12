#include<stdio.h>
int main(){
	int s;
	scanf("%i",&s);
	while(s--){
		int n,i,j,count=1,test=0;
		scanf("%i",&n);
		int h[n];
		for(i=0;i<n;i++)
		scanf("%i",&h[i]);
		if(n%2==0)
		printf("no\n");
		else{
		for(i=0,j=n-1;i<=n/2;i++,j--){
			if(h[i]!=count || h[j]!=count){
				test=1;
				printf("no\n");
				break;
			}
			count++;
		}
		if(test==0)
 printf("yes\n");		
	} 
}
}