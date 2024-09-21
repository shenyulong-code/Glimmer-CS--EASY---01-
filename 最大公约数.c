#pragma warning(disable:4996)
#include <stdio.h>
int main(){
int m,n;
scanf("%d%d",&m,&n);
int temp1=m;
int temp2=n;
for(int i=2;i<= m & i<= n;i++){
while(m%i==0 & n%i==0){
m=m/i;
n=n/i;
}
}
int j=temp1/m;
printf("%d",j);
return 0;
}