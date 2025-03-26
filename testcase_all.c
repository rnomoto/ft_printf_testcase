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

    // no format
    ft = ft_printf("ft_printf: Hello World!\n");
	lb = printf("   printf: Hello World!\n");
	printf("len_ft: %d\n", ft);
	printf("len_lb: %d\n", lb);
	if(ft == lb)
		printf("OK\n");
	else
		printf("KO\n");

    // %c
    c = 'A';
	ft = ft_printf("ft_printf: %c\n", c);
	lb = printf("   printf: %c\n", c);
	printf("len_ft: %d\n", ft);
	printf("len_lb: %d\n", lb);
	if(ft == lb)
		printf("OK\n");
	else
		printf("KO\n");

    // %s
    str = "42Tokyo";
	ft = ft_printf("ft_printf: %s\n", str);
	lb = printf("   printf: %s\n", str);
	printf("len_ft: %d\n", ft);
	printf("len_lb: %d\n", lb);
	if(ft == lb)
		printf("OK\n");
	else
		printf("KO\n");

    ft = ft_printf("ft_printf: %s\n", (char *)NULL);
    lb = printf("   printf: %s\n", (char *)NULL);
    printf("len_ft: %d\n", ft);
    printf("len_lb: %d\n", lb);
    if(ft == lb)
        printf("OK\n");
    else
        printf("KO\n");

    ft = ft_printf("ft_printf: %s\n", "");
    lb = printf("   printf: %s\n", "");

    printf("len_ft: %d\n", ft);
    printf("len_lb: %d\n", lb);
    if(ft == lb)
        printf("OK\n");
    else
        printf("KO\n");

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
        printf("KO\n");
    free(mem);

    //NULL : adjusted to 42Linux. "(nil)" is expected.
    ft = ft_printf("ft_printf: %p\n", NULL);
	lb = printf("   printf: %p\n", NULL);
	printf("len_ft: %d\n", ft);
	printf("len_lb: %d\n", lb);
	if(ft == lb)
		printf("OK\n");
	else
		printf("KO\n");

    //%d
    int n = INT_MIN;
    ft = ft_printf("ft_printf: %d\n", n);
    lb = printf("   printf: %d\n", n);
    printf("len_ft: %d\n", ft);
    printf("len_lb: %d\n", lb);
    if(ft == lb)
        printf("OK\n");
    else
        printf("KO\n");

    n = INT_MAX;
    ft = ft_printf("ft_printf: %d\n", n);
    lb = printf("   printf: %d\n", n);
    printf("len_ft: %d\n", ft);
    printf("len_lb: %d\n", lb);
    if(ft == lb)
        printf("OK\n");
    else
        printf("KO\n");

    ft = ft_printf("ft_printf: %d %d %d\n", 10, 11, 12);
    lb = printf("   printf: %d %d %d\n", 10, 11, 12);
    printf("len_ft: %d\n", ft);
    printf("len_lb: %d\n", lb);
    if(ft == lb)
        printf("OK\n");
    else
        printf("KO\n");

    n = 0;
    ft = ft_printf("ft_printf: %d\n", n);
    lb = printf("   printf: %d\n", n);
    printf("len_ft: %d\n", ft);
    printf("len_lb: %d\n", lb);
    if(ft == lb)
        printf("OK\n");
    else
        printf("KO\n");

    // Return value will overflow. Same behavior as original printf.
    // n = INT_MAX + 1;
    // ft = ft_printf("ft_printf: %d\n", n);
    // lb = printf("   printf: %d\n", n);
    // printf("len_ft: %d\n", ft);
    // printf("len_lb: %d\n", lb);
    // if(ft == lb)
    //     printf("OK\n");
    // else
    //     printf("KO\n");

    // n = INT_MIN - 1;
    // ft = ft_printf("ft_printf: %d\n", n);
    // lb = printf("   printf: %d\n", n);
    // printf("len_ft: %d\n", ft);
    // printf("len_lb: %d\n", lb);
    // if(ft == lb)
    //     printf("OK\n");
    // else
    //     printf("KO\n");

    //%u
	unsigned int u = 4294967295;
	ft = ft_printf("ft_printf: %u\n", u);
	lb = printf("   printf: %u\n", u);
	printf("len_ft: %d\n", ft);
	printf("len_lb: %d\n", lb);
	if(ft == lb)
		printf("OK\n");
	else
		printf("KO\n");

    //%x
    u = 4294967295;
    ft = ft_printf("ft_printf: %x\n", u);
    lb = printf("   printf: %x\n", u);
    printf("len_ft: %d\n", ft);
    printf("len_lb: %d\n", lb);
    if(ft == lb)
        printf("OK\n");
    else
        printf("KO\n");

    //%X
    u = 4294967295;
    ft = ft_printf("ft_printf: %X\n", u);
    lb = printf("   printf: %X\n", u);
    printf("len_ft: %d\n", ft);
    printf("len_lb: %d\n", lb);
    if(ft == lb)
        printf("OK\n");
    else
        printf("KO\n");

    //%%
    ft = ft_printf("ft_printf: %%\n");
    lb = printf("   printf: %%\n");
    printf("len_ft: %d\n", ft);
    printf("len_lb: %d\n", lb);
    if(ft == lb)
        printf("OK\n");
    else
        printf("KO\n");

    // other cases
    ft = ft_printf("ft_printf: %d %s %%\n", 123, "HELLO");
    lb = printf("   printf: %d %s %%\n", 123, "HELLO");
    printf("len_ft: %d\n", ft);
    printf("len_lb: %d\n", lb);
    if(ft == lb)
        printf("OK\n");
    else
        printf("KO\n");

    printf("empty string\nft_printf:");
    ft = ft_printf("");
    printf("\n   printf:");
    lb = printf("");
    printf("\nlen_ft: %d\n", ft);
    printf("len_lb: %d\n", lb);
    if(ft == lb)
        printf("OK\n");
    else
        printf("KO\n");


    // // single % input is undefined
    // printf("ft_printf: ");
    // ft = ft_printf("%");
    // printf("\n   printf:");
    // lb = printf("%");
    // printf("\nlen_ft: %d\n", ft);
    // printf("len_lb: %d\n", lb);
    // if (ft == lb)
    //     printf("OK\n");
    // else
    //     printf("KO\n");

    return 0;
}
