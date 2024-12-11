#include <stdio.h>
#include <string.h>

int main(){
	char str[]="Nguyen Son Minh";
	int count=0;
	for(int i=strlen(str)-1;i>=0;i--){
		if((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) {
            count++;
        }
    }
	printf("so ky tu co trong mang la %d ",count);	
 
	


return 0;
}



