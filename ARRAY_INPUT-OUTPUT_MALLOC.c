#include<stdio.h>
#include<stdlib.h>//malloc,calloc
#include<conio.h>
#include<string.h>
int main(){
	int i,*ptr;
	printf("ENTER THE NUMBER OF ELEMENT IN THE ARRAY:-\n");
	int b;
	scanf("%d",&b);
	ptr=(int*)malloc(b*sizeof(int));
	for( i=0;i<b;i++){
		printf("ENTER THE %d VALUE:-\n",i);
		scanf("%d",&ptr[i]);
	}
	for(i=0;i<b;i++){
		printf("ENTER THE %d VALUE IS %d\n",i,ptr[i]);
		}
	return 0;
}
