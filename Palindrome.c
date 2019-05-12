#include <stdio.h>

int main(){
// PALİNDROME

int n,result=0,rem,q;

printf("Sayiyi giriniz: "); scanf("%d",&n);

q=n;

while(q != 0)
{
  rem = q%10; // kalan bulunur. (2),(3),(3),(2).
  result = result*10 + rem;  // (0*10 +2), (2*10 +3) , (23*10 + 3), (233*10 +2)
  q = q/10;    //  (233),(23), (2).
}

if(result == n)
{
  printf(" %d is a Palindrome number...",result);
}
else{
  printf("No !! %d it is not Palindrome number",result);
}

}






