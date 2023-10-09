#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
srand(time(0));
int y;
int x = rand()% 31;
printf("Введи число в пределах 30 и попробуй угадать: \n ");
scanf("%d",&y);
do
{
if (x==y)
{
printf("Ты угадал!!!?");

}
else{
printf("Попробуй ещё.\n");
scanf("%d",&y);

}
}
while(x != y);
printf("Угадал!!!?");

return 0;

}