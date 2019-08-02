#include<stdio.h>

int read_line(char str[], int limit);

int main() {
	char str[101] ; //c=, c-, dz=, d-, lj, nj, s=, z=
	char index[8][4] = {"c=\0", "c-\0", "dz=\0", "d-\0", "lj\0", "nj\0", "s=\0", "z=\0" };
	char tmp[101];
	char *p;
	
	int count=0, i=0;
	
	
	int len = read_line(str, 101);
	p=str;
	
	while(*p) {
		if( strstr(p, index[i]) ) {
			count++;
			p=strstr(p, index[i]);
			*p='0';
			*(p+1) = '\0';
			strcpy(tmp, p+strlen(index[i]));
			strcat(p,tmp);
		}
		else 
			p++;
			
	}
	
	for(i=0; str[i];i++)
		if('a' <= str[i] && str[i]<= 'z')
			count++;
	
	printf("%d\n", count);
	
	return 0;
}
int read_line(char str[], int limit) {
	
	int ch,i=0;
	
	while((ch = getchar()) != '\n')
		if( i<ch )
			str[i++] = ch;
	
	str[i] = '\0';
	return i;	 
}
