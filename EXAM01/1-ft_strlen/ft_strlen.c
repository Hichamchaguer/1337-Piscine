#include <stdio.h>
int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int main()
{
	char t[] = "0123456";
	printf("%d",ft_strlen(t));
	return 0;
}
