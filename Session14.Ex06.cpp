#include <stdio.h>
#include<string.h>

int main() {
  char quydz[]={"8386 Mai Dinh~"}; 
  int count = 0,size=strlen(quydz);  
    for (int i = 0; i<size; i++) {
        if ((quydz[i] >= 'a' && quydz[i] <= 'z') || (quydz[i] >= 'A' && quydz[i] <= 'Z')) {
            count++;
        }
    }
    printf("So ky tu la chu cai trong chuoi la: %d\n", count);
    return 0;
}

