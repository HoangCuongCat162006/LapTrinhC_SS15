#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
	char text[]="minh23923@gmail.com";
	int countCharacterTexl=0;
	int countCharacterNum=0;
	int countCharacterSpecial=0;
	int length=strlen(text);
	for(int i=0; i<length; i++){
		if(isalpha(text[i])){
			countCharacterTexl++;
		}else if(isdigit(text[i])){
			countCharacterNum++;
		}else{
			countCharacterSpecial++;
		}
	}
	printf("%d ki tu chu cai \n",countCharacterTexl);
	printf("%d ki tu chu so \n",countCharacterNum);
	printf("%d ki tu dac biet \n",countCharacterSpecial);
return 0;
}

