// DO NOT TURN IN !!

#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>


// // no format
// int main(void)
// {
//     int ft;
//     int lb;
//     ft = ft_printf("ft_printf: Hello World!\n");
// 	lb = printf("   printf: Hello World!\n");
// 	printf("len_ft: %d\n", ft);
// 	printf("len_lb: %d\n", lb);
// 	if(ft == lb)
// 		printf("OK\n");
// 	else
// 		printf("KO\n");

//     return 0;
// }


// // %c
// int main(void)
// {
//     char c;
//     int ft;
//     int lb;

//     c = 'A';
// 	ft = ft_printf("ft_printf: %c\n", c);
// 	lb = printf("   printf: %c\n", c);
// 	printf("len_ft: %d\n", ft);
// 	printf("len_lb: %d\n", lb);
// 	if(ft == lb)
// 		printf("OK\n");
// 	else
// 		printf("KO\n");

//     return 0;
// }

// // %s
// int main(void)
// {
//     char *str = "42Tokyo";
// 	int ft = ft_printf("ft_printf: %s\n", str);
// 	int lb = printf("   printf: %s\n", str);
// 	printf("len_ft: %d\n", ft);
// 	printf("len_lb: %d\n", lb);
// 	if(ft == lb)
// 		printf("OK\n");
// 	else
// 		printf("KO\n");

//     ft = ft_printf("ft_printf: %s\n", (char *)NULL);
//     lb = printf("   printf: %s\n", (char *)NULL);
//     printf("len_ft: %d\n", ft);
//     printf("len_lb: %d\n", lb);
//     if(ft == lb)
//         printf("OK\n");
//     else
//         printf("KO\n");

//     ft = ft_printf("ft_printf: %s\n", "");
//     lb = printf("   printf: %s\n", "");

//     printf("len_ft: %d\n", ft);
//     printf("len_lb: %d\n", lb);
//     if(ft == lb)
//         printf("OK\n");
//     else
//         printf("KO\n");

//     return 0;
//}

// //%p
// int main(void)
// {
//     char *mem = (char *)malloc(10 * sizeof(char));
//     if (mem == NULL)
//     {
//         printf("mem allocate error.\n");
//         return (1);
//     }
//     int ft = ft_printf("ft_printf: %p\n", mem);
//     int lb = printf("   printf: %p\n", mem);
//     printf("len_ft: %d\n", ft);
//     printf("len_lb: %d\n", lb);
//     if(ft == lb)
//         printf("OK\n");
//     else
//         printf("KO\n");
//     free(mem);

//     //NULL : adjusted to 42Linux. "(nil)" is expected.
//     ft = ft_printf("ft_printf: %p\n", NULL);
// 	lb = printf("   printf: %p\n", NULL);
// 	printf("len_ft: %d\n", ft);
// 	printf("len_lb: %d\n", lb);
// 	if(ft == lb)
// 		printf("OK\n");
// 	else
// 		printf("KO\n");

//     return 0;
// }

//%d
int main(void)
{
    int n = INT_MIN;
    int ft = ft_printf("ft_printf: %d\n", n);
    int lb = printf("   printf: %d\n", n);
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

    return 0;
}

// //%u
// int main(void)
// {
// 	unsigned int u = 4294967295;
// 	int ft = ft_printf("ft_printf: %u\n", u);
// 	int lb = printf("   printf: %u\n", u);
// 	printf("len_ft: %d\n", ft);
// 	printf("len_lb: %d\n", lb);
// 	if(ft == lb)
// 		printf("OK\n");
// 	else
// 		printf("KO\n");

//     return 0;
// }

// //%x
// int main (void)
// {
//     unsigned int u = 4294967295;
//     int ft = ft_printf("ft_printf: %x\n", u);
//     int lb = printf("   printf: %x\n", u);
//     printf("len_ft: %d\n", ft);
//     printf("len_lb: %d\n", lb);
//     if(ft == lb)
//         printf("OK\n");
//     else
//         printf("KO\n");

//     return 0;
// }

// //%X
// int main(void)
// {
//     unsigned int u = 4294967295;
//     int ft = ft_printf("ft_printf: %X\n", u);
//     int lb = printf("   printf: %X\n", u);
//     printf("len_ft: %d\n", ft);
//     printf("len_lb: %d\n", lb);
//     if(ft == lb)
//         printf("OK\n");
//     else
//         printf("KO\n");

//     return 0;
// }

// //%%
// int main(void)
// {
//     int ft = ft_printf("ft_printf: %%\n");
//     int lb = printf("   printf: %%\n");
//     printf("len_ft: %d\n", ft);
//     printf("len_lb: %d\n", lb);
//     if(ft == lb)
//         printf("OK\n");
//     else
//         printf("KO\n");

//     return 0;
// }

// // other cases
// int main(void)
// {
//     int ft = ft_printf("ft_printf: %d %s %%\n", 123, "HELLO");
//     int lb = printf("   printf: %d %s %%\n", 123, "HELLO");
//     printf("len_ft: %d\n", ft);
//     printf("len_lb: %d\n", lb);
//     if(ft == lb)
//         printf("OK\n");
//     else
//         printf("KO\n");

//     printf("empty string\nft_printf:");
//     int ft = ft_printf("");
//     printf("\n   printf:");
//     int lb = printf("");
//     printf("\nlen_ft: %d\n", ft);
//     printf("len_lb: %d\n", lb);
//     if(ft == lb)
//         printf("OK\n");
//     else
//         printf("KO\n");


//     // single % input is undefined
//     printf("ft_printf: ");
//     int ft = ft_printf("%");
//     printf("\n   printf:");
//     int lb = printf("%");
//     printf("\nlen_ft: %d\n", ft);
//     printf("len_lb: %d\n", lb);
//     if (ft == lb)
//         printf("OK\n");
//     else
//         printf("KO\n");

//     return 0;
// }
