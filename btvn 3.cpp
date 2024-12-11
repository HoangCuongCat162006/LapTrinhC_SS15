#include <stdio.h>
#include <string.h>

int main(){
	char reverseStr[100],str[]="Nguyen Son Minh";
	int n=0;
	for(int i=strlen(str)-1;i>=0;i--){
		reverseStr[n]=str[i];
		n++;
	}
	fputs(reverseStr, stdout);


return 0;
}

