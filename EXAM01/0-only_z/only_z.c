#include <unistd.h>
void ft_putchar(char c)
{
	write(1,&c,1);
}
int main()
{
//	write(1, "z", 1);
char c = 'f';
ft_putchar(c);
	return 0;
}
