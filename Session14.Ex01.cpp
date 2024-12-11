	#include<stdio.h>
	#include<string.h>
	
	int main(){
		char quy[999];
		printf("nhap vao 1 chuoi ky tu bat ky:\n");
		fgets(quy,sizeof(quy),stdin);
		printf("chuoi vua nhap vao la:\n");
		fputs(quy,stdout);
		return 0;
	}
