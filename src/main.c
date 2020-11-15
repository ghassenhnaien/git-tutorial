#include <stdio.h>
#include <espl_lib.h>

int main() {
unsigned int n=0;
char  c;
int a=1;

while (a==1){
    printf("enter your number : \n");
scanf("%d",&n);

printf("%s\n", num_to_words(n));
printf("enter r to restart or e to exit : \n");
c = getchar();
scanf("%c" , &c);
if (c != 'r') a=0;

}

  
}

