#include<stdio.h>
#include <string.h>

int main(){
	char quydz[]={"Holly COW "};
	printf("Chuoi vua khai bao la:\n");
	fputs(quydz,stdout);
	int length=strlen(quydz);
	for(int i=0;i<length/2;i++){
	       char temp=quydz[i];
	       quydz[i]=quydz[length-1-i];
	       quydz[length-1-i]=temp;
	}
	printf("\n");
	printf("Chuoi dao nguoc cua chuoi da khai bao la");
	fputs(quydz,stdout);
	return 0;
}
