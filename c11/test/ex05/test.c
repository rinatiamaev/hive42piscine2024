#include <unistd.h>

void    ft_putchar(char c)
{
        write(1, &c, 1);
}

void    ft_putnbr(int nb)
{
        if (nb == -2147483648)
        {
                write(1, "-2", 2);
                nb = 147483648;
        }
        if (nb < 0)
        {
                write(1, "-", 1);
                nb = -nb;
        }
        if (nb >= 10)
                ft_putnbr(nb / 10);
        ft_putchar(nb % 10 + '0');
}

void    ft_putstr(char *str)
{
        while (*str)
                write(1, str++, 1);
}


int	ft_isspace(char c)
{
	if (c == ' ' || c == '\n' || c == '\t'
		|| c == '\v' || c == '\r' || c == '\f')
		return (1);
	return (0);
}

int	ft_sign(char c)
{
	int	sign;

	sign = 1;
	if (c == '+' || c == '-')
	{
		if (c == '-')
			sign = sign * (-1);
	}
	return (sign);
}

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	res;

	i = 0;
	sign = 1;
	res = 0;
	while (str[i] && ft_isspace(str[i]))
		i++;
	while (str[i] && (str[i] == '+' || str[i] == '-'))
	{
		sign = sign * ft_sign(str[i]);
		i++;
	}
	while (str[i] && (str[i] >= '0' && str[i] <= '9'))
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (sign * res);
}

int	ft_sum(int a, int b);
int	ft_sub(int a, int b);
int	ft_div(int a, int b);
int	ft_mult(int a, int b);
int	ft_mod(int a, int b);

int	ft_get_op(char c)
{
	if (c == '+')
		return (0);
	else if (c == '-')
		return (1);
	else if (c == '/')
		return (2);
	else if (c == '*')
		return (3);
	else if (c == '%')
		return (4);
	else
		return (5);
}

int	ft_calc(int a, char c, int b)
{
	int		(*op[5])(int, int);
	int		temp;

	op[0] = ft_sum;
	op[1] = ft_sub;
	op[2] = ft_div;
	op[3] = ft_mult;
	op[4] = ft_mod;
	temp = ft_get_op(c);
	if (temp == 5)
		return (0);
	else
		return (op[temp](a, b));
}

void	ft_do_op(int ac, char **av)
{
	if (ac == 4)
	{
		ft_putnbr(ft_calc(ft_atoi(av[1]), av[2][0], ft_atoi(av[3])));
		ft_putchar('\n');
	}
}

int	ft_sum(int a, int b)
{
	return (a + b);
}

int	ft_sub(int a, int b)
{
	return (a - b);
}

int	ft_div(int a, int b)
{
	if (b == 0)
	{
		ft_putstr("Stop : division by zero");
		return (0);
	}
	return (a / b);
}

int	ft_mult(int a, int b)
{
	return (a * b);
}

int	ft_mod(int a, int b)
{
	if (b == 0)
	{
		ft_putstr("Stop : modulo by zero");
		return (0);
	}
	return (a % b);
}

int	main(int ac, char **av)
{
	if (ac == 4)
		ft_do_op(ac, av);
	return (0);
}
