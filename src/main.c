// TODO : Put the code in as segments :) ( Not going to do that )

int main(void){int f[11]={31599,19812,14479,31207,23524,29411
,29679,30866,31727,31719,1040};char* s[120]={"a","a","a","a",
"a","a","a","a","a","a","a","a","a","a","a","a","a","a","a",
"a","a","a","a","a","a","a","a","a","a","a","a","a","a","a",
"a","a","a","a","a","a","a","a","a","a","a","a","a","a","a",
"a","a","a","a","a","a","a","a","a","a","a","a","a","a","a",
"a","a","a","a","a","a","a","a","a","a","a","a","a","a","a",
"a","a","a","a","a","a","a","a","a","a","a","a","a","a","a",
"a","a","a","a","a","a","a","a","a","a","a","a","a","a","a",
"a","a","a","a","a","a","a","a","a","a","a"};time_t t=time(0);
struct tm* l=localtime(&t);int d[8];d[0]=l->tm_hour/10;d[1]=l->
tm_hour%10;d[2]=10;d[3]=l->tm_min/10;d[4]=l->tm_min%10;d[5]=10;
d[6]=l->tm_sec/10;d[7]=l->tm_sec%10;for(int y=0;y<5;y++){for(
int n=0;n<8;n++){for(int x=0;x<3;x++)printf("%s%s",((f[d[n]]>>(
(5-y-1)*3+x)&1)?"\033[0;33m":"\033[0;30m"),s[n*y+1]);printf(" ");}
printf("\n");}return 0;}