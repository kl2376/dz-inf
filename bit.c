#include <math.h>
#include <stdio.h>
int bin(int x, int y)
{
int i = 0;
do
{
if (x%2 == 1)
{
y+= 1 * pow(10, i);
}
x = trunc(x/2);
i++;
}
while(x > 0);
return y;
}

int main()
{
int prinimaemoe = 0;
int perevedennoe = 0;
printf("Введите любое десятичное число:\n");
scanf("%d", &prinimaemoe);
printf("\nДвоичный вид числа: %d", bin(prinimaemoe, perevedennoe));
return 0;
}