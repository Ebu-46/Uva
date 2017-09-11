#include<stdio.h>
int main(){
    int i=0,L[101],j,n=0,x=0,c=0;
    char s[102][105],ch[102];

    while((gets(s[i]))&&(s[i][0]!='0'||s[i][1]!='\0')){
        L[i]=strlen(s[i])-1;
        i++;
    }
    while(1){
        for(j=0;j<i;j++){
           if(L[j]>=0){
            x=x+s[j][L[j]]-48;
            L[j]--;
           }
           else c++;

        }
        if(c==i) break;
      ch[n]=x%10+48;
      x=x/10;
      n++;

    }
   while(1){
        if(x==0) break;
    ch[n]=x%10+48;
      x=x/10;
      n++;
   }
   for(i=n-1;i>=0;i--)
    printf("%c",ch[i]);
   printf("\n");

return 0;
}
