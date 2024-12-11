#include<stdio.h>
#include<string.h>
int main(){
	char quydz[]={"Pho Mai Con Bo       Khoc"};
	int size=strlen(quydz),inword=0,count=0;
	char space=' ';
	printf("Chuoi la:\n");
	fputs(quydz,stdout);
	for(int i=0;i<size;i++){
		if(quydz[i]!=space){
			if(inword==0){
				count++;
				inword=1;
			}
		} else{ inword=0;
		}
	}
	printf("\nSo luong tu trong chuoi la:%d",count);
	return 0;
}
