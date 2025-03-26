// DO NOT TURN IN !!

#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>


int main(void)
{
    int ft;
    int lb;
    char c;
    char *str;
    int ko_count = 0;

    // no format
    ft = ft_printf("ft_printf: Hello World!\n");
	lb = printf("   printf: Hello World!\n");
	printf("len_ft: %d\n", ft);
	printf("len_lb: %d\n", lb);
	if(ft == lb)
		printf("OK\n");
	else
    {
		printf("KO\n");
        ko_count++;
    }

    // %c
    c = 'A';
	ft = ft_printf("ft_printf: %c\n", c);
	lb = printf("   printf: %c\n", c);
	printf("len_ft: %d\n", ft);
	printf("len_lb: %d\n", lb);
	if(ft == lb)
		printf("OK\n");
	else
    {
		printf("KO\n");
        ko_count++;
    }

    // %s
    str = "42Tokyo";
	ft = ft_printf("ft_printf: %s\n", str);
	lb = printf("   printf: %s\n", str);
	printf("len_ft: %d\n", ft);
	printf("len_lb: %d\n", lb);
	if(ft == lb)
		printf("OK\n");
	else
    {
		printf("KO\n");
        ko_count++;
    }

    ft = ft_printf("ft_printf: %s\n", (char *)NULL);
    lb = printf("   printf: %s\n", (char *)NULL);
    printf("len_ft: %d\n", ft);
    printf("len_lb: %d\n", lb);
    if(ft == lb)
		printf("OK\n");
	else
    {
		printf("KO\n");
        ko_count++;
    }

    ft = ft_printf("ft_printf: %s\n", "");
    lb = printf("   printf: %s\n", "");
    printf("len_ft: %d\n", ft);
    printf("len_lb: %d\n", lb);
    if(ft == lb)
		printf("OK\n");
	else
    {
		printf("KO\n");
        ko_count++;
    }

    //%p
    char *mem = (char *)malloc(10 * sizeof(char));
    if (mem == NULL)
    {
        printf("mem allocate error.\n");
        return (1);
    }
    ft = ft_printf("ft_printf: %p\n", mem);
    lb = printf("   printf: %p\n", mem);
    printf("len_ft: %d\n", ft);
    printf("len_lb: %d\n", lb);
    if(ft == lb)
		printf("OK\n");
	else
    {
		printf("KO\n");
        ko_count++;
    }
    free(mem);

    //NULL : adjusted to 42Linux. "(nil)" is expected.
    ft = ft_printf("ft_printf: %p\n", NULL);
	lb = printf("   printf: %p\n", NULL);
	printf("len_ft: %d\n", ft);
	printf("len_lb: %d\n", lb);
	if(ft == lb)
		printf("OK\n");
	else
    {
		printf("KO\n");
        ko_count++;
    }

    //%d
    int n = INT_MIN;
    ft = ft_printf("ft_printf: %d\n", n);
    lb = printf("   printf: %d\n", n);
    printf("len_ft: %d\n", ft);
    printf("len_lb: %d\n", lb);
    if(ft == lb)
		printf("OK\n");
	else
    {
		printf("KO\n");
        ko_count++;
    }

    n = INT_MAX;
    ft = ft_printf("ft_printf: %d\n", n);
    lb = printf("   printf: %d\n", n);
    printf("len_ft: %d\n", ft);
    printf("len_lb: %d\n", lb);
    if(ft == lb)
		printf("OK\n");
	else
    {
		printf("KO\n");
        ko_count++;
    }

    ft = ft_printf("ft_printf: %d %d %d\n", 10, 11, 12);
    lb = printf("   printf: %d %d %d\n", 10, 11, 12);
    printf("len_ft: %d\n", ft);
    printf("len_lb: %d\n", lb);
    if(ft == lb)
		printf("OK\n");
	else
    {
		printf("KO\n");
        ko_count++;
    }

    n = 0;
    ft = ft_printf("ft_printf: %d\n", n);
    lb = printf("   printf: %d\n", n);
    printf("len_ft: %d\n", ft);
    printf("len_lb: %d\n", lb);
    if(ft == lb)
		printf("OK\n");
	else
    {
		printf("KO\n");
        ko_count++;
    }

    // //Return value will overflow. Same behavior as original printf.
    // n = INT_MAX + 1;
    // ft = ft_printf("ft_printf: %d\n", n);
    // lb = printf("   printf: %d\n", n);
    // printf("len_ft: %d\n", ft);
    // printf("len_lb: %d\n", lb);
    // if(ft == lb)
	// 	printf("OK\n");
	// else
    // {
	// 	printf("KO\n");
    //     ko_count++;
    // }

    // n = INT_MIN - 1;
    // ft = ft_printf("ft_printf: %d\n", n);
    // lb = printf("   printf: %d\n", n);
    // printf("len_ft: %d\n", ft);
    // printf("len_lb: %d\n", lb);
    // if(ft == lb)
	// 	printf("OK\n");
	// else
    // {
	// 	printf("KO\n");
    //     ko_count++;
    // }

    //%u
	unsigned int u = 4294967295;
	ft = ft_printf("ft_printf: %u\n", u);
	lb = printf("   printf: %u\n", u);
	printf("len_ft: %d\n", ft);
	printf("len_lb: %d\n", lb);
	if(ft == lb)
		printf("OK\n");
	else
    {
		printf("KO\n");
        ko_count++;
    }

    //%x
    u = 4294967295;
    ft = ft_printf("ft_printf: %x\n", u);
    lb = printf("   printf: %x\n", u);
    printf("len_ft: %d\n", ft);
    printf("len_lb: %d\n", lb);
    if(ft == lb)
		printf("OK\n");
	else
    {
		printf("KO\n");
        ko_count++;
    }

    //%X
    u = 4294967295;
    ft = ft_printf("ft_printf: %X\n", u);
    lb = printf("   printf: %X\n", u);
    printf("len_ft: %d\n", ft);
    printf("len_lb: %d\n", lb);
    if(ft == lb)
		printf("OK\n");
	else
    {
		printf("KO\n");
        ko_count++;
    }

    //%%
    ft = ft_printf("ft_printf: %%\n");
    lb = printf("   printf: %%\n");
    printf("len_ft: %d\n", ft);
    printf("len_lb: %d\n", lb);
    if(ft == lb)
		printf("OK\n");
	else
    {
		printf("KO\n");
        ko_count++;
    }

    // other cases
    ft = ft_printf("ft_printf: %d %s %%\n", 123, "HELLO");
    lb = printf("   printf: %d %s %%\n", 123, "HELLO");
    printf("len_ft: %d\n", ft);
    printf("len_lb: %d\n", lb);
    if(ft == lb)
		printf("OK\n");
	else
    {
		printf("KO\n");
        ko_count++;
    }

    printf("empty string\nft_printf:");
    ft = ft_printf("");
    printf("\n   printf:");
    lb = printf("");
    printf("\nlen_ft: %d\n", ft);
    printf("len_lb: %d\n", lb);
    if(ft == lb)
		printf("OK\n");
	else
    {
		printf("KO\n");
        ko_count++;
    }

    // // single % input is undefined
    // printf("ft_printf: ");
    // ft = ft_printf("%");
    // printf("\n   printf:");
    // lb = printf("%");
    // printf("\nlen_ft: %d\n", ft);
    // printf("len_lb: %d\n", lb);
    // if(ft == lb)
	// 	printf("OK\n");
	// else
    // {
	// 	printf("KO\n");
    //     ko_count++;
    // }

    if (ko_count == 0)
        printf("ALL OK\n");
    else if (ko_count == 1)
        printf("Just one KO existed.\n");
    else
        printf("%d KOs existed.\n");

    return 0;
}
