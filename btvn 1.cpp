#include <stdio.h>
#include <string.h>

int main(){
	char character[100];
		printf("nhap vao chuoi ky tu: ");
		fgets(character,100,stdin);
		fputs(character,stdout);
	int size=strlen(character);
		printf("do dai cua chuoi la: %d",size);


return 0;
}

