#include<stdio.h>
#include<string.h>

int main(){
	char quydz[]={"Hoo Lee Sheet"};
	char guesschar;
	int count=0,size=strlen(quydz);
	printf("nhap ky tu can kiem tra:\n");
	scanf("%c",&guesschar);
	for(int i=0;i<size;i++){
		if(guesschar==quydz[i]){
			count++;
		}
	}
	printf("so lan xuat hien cua ky tu %c trong chuoi la %d",guesschar,count);
	return 0;
}
