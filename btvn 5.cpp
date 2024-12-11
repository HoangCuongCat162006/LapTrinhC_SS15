#include <stdio.h>
#include <string.h>

int main(){
	char str[]="Nguyen Son Minh";
	int count=0,i=0;
	while(str[i]!='\0'){
		if(str[i]==' '&&str[i+1]!=' '){		
			count++;
		}
		i++;
	}
		printf("so tu trong chuoi la %d",count+1);
	


return 0;
}

