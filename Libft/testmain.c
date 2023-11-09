/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testmain.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkartasl <tkartasl@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 11:58:51 by tkartasl          #+#    #+#             */
/*   Updated: 2023/11/09 18:23:58 by tkartasl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <string.h>
#include <stdio.h>
#include <ctype.h>

void test_isalpha(int c)
{
    printf("ft_isalpha result for input %d = %d\n", c, ft_isalpha(c));
    printf("isalpha result for input %d = %d\n", c, isalpha(c));
	printf("\n");
}

void test_isdigit(int c)
{
	printf("ft_isdigit result for input %d = %d\n", c, ft_isdigit(c));
	printf("isdigit result for input %d = %d\n", c, isdigit(c));
	printf("\n");
}

void  test_isalnum(int c)
{
    printf("ft_isalnum result for input %d = %d\n", c, ft_isalnum(c));
    printf("isalnum result for input %d = %d\n", c, isalnum(c));
	printf("\n");
}

void test_isascii(int c)
{
	printf("ft_isascii result for input %d = %d\n", c, ft_isascii(c));
	printf("isascii result for input %d = %d\n", c, isascii(c));
	printf("\n");
}

void test_isprint(int c)
{
    printf("ft_isprint result for input %d = %d\n", c, ft_isprint(c));
	printf("isprint result for input %d = %d\n", c,isprint(c));
	printf("\n");
}

void test_strlen(const char *s)
{
	printf("ft_strlen result with input %s = %zu\n", s, ft_strlen(s));
	printf("strlen result with input %s  = %zu\n", s, strlen(s));
	printf("\n");
}

void test_memset(void *b, void *s, int c, size_t len)
{
	printf("ft_memset with inputs: %s, %d, %zu\n", b, c, len); 
	ft_memset(b , c, len);
	memset(s, c, len);
    printf("ft_memset = %s\n", b);
	printf("memset = %s\n", s);
	printf("\n");
}

void test_bzero(char *s1, char *b1, size_t n)
{
    int i = 0;
    int j = 0;
    int len = strlen(s1);
     
	ft_bzero(b1, n);
    bzero(s1, n);
    printf("ft_bzero with inputs: %s, %zu \n", b1, n);
    while (i < len)
    {
        if (b1[i] != 0)
        {
            printf("%c\n", b1[i]);
            i++;
        }
        else
        {
            printf("%d\n", b1[i]);
            i++;
        }
    }
    printf("bzero with inputs: %s, %zu \n", s1, n);
    while (j < len)
    {
        if (s1[j] != 0)
        {
            printf("%c\n", s1[j]);
            j++;
        }
        else
        {
            printf("%d\n", s1[j]);
            j++;
        }
    }
	printf("\n");
}
void test_memcpy(void *dst, const void *src, size_t n)
{
	printf("memcopy with inputs %s, %s, %zu: \n", dst, src, n);
    printf("%s\n", memcpy(dst, src, n));
	printf("ft_memcopy with inputs %s, %s, %zu: \n", dst, src, n);
    printf("%s\n", ft_memcpy(dst, src, n));
	printf("\n");
}

void test_memmove(void *dst1, const void *src1, const void *src2, size_t len)
{
	char dst2[10]= "424242";
	char *s;
	char *s1;
	
	s = (char *)src1;
	s1 = (char *)src2;
	printf("ft_memmove with inputs %s, %s, %zu: \n", dst2, s, len);
    printf("%s\n", ft_memmove(dst2, s, len));
	printf("memmove with inputs %s, %s, %zu: \n", dst1, s1, len);
    printf("%s\n", memmove(dst1, s1, len));
	printf("\n");
}

void test_strlcpy(char *dst2, const char *src, size_t dstsize)
{
    size_t      i;

    i = ft_strlcpy(dst2, src, dstsize);
	printf("ft_strlcpy with inputs %s, %zu: \n", src, dstsize);
    printf("%s\n", dst2);
    printf("%zu\n", i);
	i = strlcpy(dst2, src, dstsize);
	printf("strlcpy with inputs %s, %zu: \n", src, dstsize);
    printf("%s\n", dst2);
    printf("%zu\n", i);
	printf("\n");
}

void test_strlcat(char *dst3, const char *src, size_t dstsize)
{
	char dstc[15]= "Hello";
	char srcc[15]= "42";

	//dstc = strcpy(dstc, dst3);
	//srcc = strcpy(srcc, src);
	int size = 0;
    int size1 = 0;

	printf("strlcat with destsize: %zu\n", dstsize);
    size = strlcat(dst3, src, dstsize);
    printf("%s %d\n", dst3, size);
	printf("ft_strlcat with destsize: %zu\n", dstsize);
    size1 = ft_strlcat(dstc, srcc, dstsize);
    printf("%s %d\n", dstc, size1);
	printf("\n");
}

void test_toupper(int c)
{
    printf("ft_toupper result with input %d = %c\n", c, ft_toupper(c));
    printf("toupper result with input %d = %c\n", c, toupper(c));
	printf("\n");
}

void test_tolower(int c)
{
	printf("ft_tolower result with input %d = %c\n", c, ft_tolower(c));
	printf("tolower result with input %d = %c\n", c, tolower(c));
	printf("\n");
}

void test_strchr(const char *s, int c)
{	
    printf("ft_strchr with inputs %s, %d = %p\n", s, c, ft_strchr(s, c));
    printf("strchr with inputs %s, %d = %p\n", s, c, strchr(s, c));
	printf("\n");
}

void test_strrchr(const char *s, int c)
{ 
    printf("ft_strrchr with inputs %s, %d = %p\n", s, c, ft_strrchr(s, c));
    printf("strrchr with inputs %s, %d = %p\n", s, c, strrchr(s, c));
	printf("\n");
}

void test_strncmp(const char *s1, const char *s2, size_t n)
{
    printf("ft_strncmp with inputs: %s, %s, %zu = %d\n", s1, s1, n, ft_strncmp(s1, s2, 7));
    printf("strncmp with inputs: %s, %s, %zu = %d\n", s1, s1, n,strncmp(s1, s2, 7));
	printf("\n");
}

void test_memchr(const void *s, int c, size_t n)
{
    printf("ft_memchr with inputs: %s, %d, %zu = %p\n", s, c, n, ft_memchr(s, 102, 15));
    printf("memchr with inputs: %s, %d, %zu = %p\n", s, c, n, memchr(s, 102, 15));
	printf("\n");
}

void test_memcmp(const void *s1, const void *s2, size_t n)
{
    printf("ft_memcmp with inputs: %s, %s, %zu = %d\n", s1, s2, n, ft_memcmp(s1, s2, 25));
    printf("memcmp with inputs: %s, %s, %zu = %d\n", s1, s2, n, memcmp(s1, s2, 25));
	printf("\n");
}
void test_strnstr(const char *haystack, const char *needle, size_t len)
{
	printf("strnstr with inputs: %s, %s, %zu = %s\n", haystack, needle, len, strnstr(haystack, needle, len));
	 printf("ft_strnstr with inputs: %s, %s, %zu = %s\n", haystack, needle, len,ft_strnstr(haystack, needle, len));	
	   printf("\n");
}

void test_atoi(const char *str)
{
    printf("ft_atoi with input: %s = %d\n", str, ft_atoi(str));
    printf("atoi with input: %s = %d\n", str, atoi(str));
	printf("\n");
}

void test_calloc(size_t count, size_t size)
{
    size_t  i;
    int *ptr;

    i = 0;
    ptr = ft_calloc(count, size);
	printf("ft_calloc with count %zu and size %zu:\n", count, size); 
    while (i < count)
    {
        printf("%d\n", *ptr);
        i++;
    }
	printf("\n");
}

void test_strdup(const char *s1)
{
	char *s;
    s = ft_strdup(s1);
    printf("ft_strdup with input: %s = %s\n", s1, s);
	printf("\n");
}

void test_substr(char const *s, unsigned int start, size_t len)
{
    printf("ft_substr with inputs: %s, %d, %zu = %s\n", s, start, len, ft_substr(s, start, len));
	printf("\n");
}

void test_strjoin(char const *s1, char const *s2)
{
	printf("ft_strjoin with inputs: %s, %s = %s\n",s1 ,s2, ft_strjoin(s1, s2));
	printf("\n");
}

void test_strtrim(char const *s1, char const *set)
{
	printf("ft_strtrim with inputs: %s and %s = %s\n",s1, set, ft_strtrim(s1, set));
	printf("\n");
}

void test_split(char const *s, char c)
{
    int     i;
    char    **array;

    i = 0;
    array = ft_split(s, c);
	printf("ft_split with inputs: %s and %c\n", s, c);
    if (array == 0)
        printf("%p\n", array);
    else
        while (array[i] != 0)
        {
            printf("%s\n", array[i]);
            i++;
        }
	printf("\n");
}

void test_itoa(int n)
{
	printf("ft_itoa with input: %d = %s\n", n, ft_itoa(n));
	printf("\n");
}

char ft_testmapi(unsigned int n, char c)
{
    if (n % 2 != 0)
        c = 'I';
    return (c);
}

void test_strmapi(char const *s)
{
    char    (*f)(unsigned int, char);

    f = &ft_testmapi;
    printf("ft_strmapi with input %s = %s\n",s ,ft_strmapi(s, f));
	printf("*f points to function that turns every second character to I\n");
	printf("\n");
}

void ft_test(unsigned int u, char *str)
{
		*str = *str + u;
}

void test_striteri(char *s)
{
	void (*f)(unsigned int, char*);

    f = &ft_test;
	printf("ft_striteri with input: %s\n", s);
	ft_striteri(s, f);
	printf("is = %s\n", s);	
	printf("*f points to a function that adds u to value of *s\n");
	printf("\n");
}

void test_putchar_fd(char c)
{	
	int fd = 1;
	printf("ft_putchar_fd with inputs: %c , %d: \n",c ,fd); 
	ft_putchar_fd(c, 1);
	printf("\n");
	printf("\n");
}

	void test_putstr_fd(char *s)
{
	int  fd = 1;
	printf("ft_putstr_fd with inputs: %s, %d: \n", s, fd);
    ft_putstr_fd(s, fd);
	printf("\n");
	printf("\n");
}

void test_putendl_fd(char *s)
{
	int fd = 1;
	
	printf("ft_putendl_fd with inputs: %s, %d: \n",s, fd);
	ft_putendl_fd(s, fd);
	printf("\n");
}

void test_putnbr_fd(int n)
{
	printf("ft_putnbr_fd with input: %d\n", n);
	ft_putnbr_fd(n, 1);
    write(1, "\n", 1);
}

void test_lstnew(char *s)
{
	t_list	*t;

	t = ft_lstnew(s);
	printf("ft_lstnew result: %s\n%p\n", t->content, t->next);
	printf("\n");
}

void test_lstadd_front(char *s, char *s1)
{
	t_list	*head;
	t_list	*new;

	head = ft_lstnew(s);
	new = ft_lstnew(s1);
	ft_lstadd_front(&head, new);
	while (new != 0)
	{
		printf("ft_lstadd_front result: %s\n", new->content);
		new = new->next;
	}
	printf("\n");
}

void test_lstsize(void)
{
    t_list  *head;
    t_list  *one;
    t_list  *two;
    t_list  *three;
    t_list  *four;

    head = ft_lstnew(":)");
    one = ft_lstnew(":)");
    two = ft_lstnew(":)");
    three = ft_lstnew(":)");
	four = ft_lstnew(":)");
    head->next = one;
    one->next = two;
    two->next = three;
    three->next = four;
    four->next = NULL;
    printf("ft_lstsize result: %d", ft_lstsize(head));
	printf("\n");
}

void test_lstlast(char *s)
{
    t_list  *head;
    t_list  *one;
    t_list  *two;
    t_list  *three;
    t_list  *four;
    t_list  *result = NULL;

    head = ft_lstnew("1");
    one = ft_lstnew("2");
    two = ft_lstnew("3");
    three = ft_lstnew("4");
    four = ft_lstnew(s);

    head->next = one;
    one->next = two;
    two->next = three;
    three->next = four;
    four->next = NULL;

    result = ft_lstlast(head);
    printf("ft_lstlast result: %s", result->content);
	printf("\n");
}

void test_lstadd_back(char *s)
{
    t_list	*head;
    t_list	*one;
    t_list  *two;
    t_list  *three;
    t_list  *four;
    t_list  *current = NULL;

    head = ft_lstnew(":(");
    one = ft_lstnew(":(");
    two = ft_lstnew(":(");
    three = ft_lstnew(":(");
    four = ft_lstnew(s);

    head->next = one;
    one->next = two;
    two->next = three;
    three->next = NULL;

    ft_lstadd_back(&head, four);
    current = head;
    while (current->next != 0)
        current = current->next;
    printf("ft_lstadd_back result: %s", current->content);
	printf("\n");
}

void    del(void *p)
{
    free(p);
}

void test_lstdelone(char *s, char *s1, char *s2)
{
    t_list  *one = NULL;
    t_list  *two = NULL;
    t_list *extra = NULL;
    void    (*f)(void *p);

    f = &del;
    one = malloc(sizeof(t_list));
    two = malloc(sizeof(t_list));
    extra = malloc(sizeof(t_list));
    extra->content = ft_strdup(s);
    one->content = ft_strdup(s1);
    two->content = ft_strdup(s2);
    one->next = two;
    two->next = extra;
    extra->next = NULL;
    //printf("%p %s\n", head->next, head->content);
    ft_lstdelone(two, del);
    //printf("%p\n%p\n%s", res, head->next, head->content);
	printf("ft_lstdelone result:\n");
    while (one != 0)
    {
        printf("%s\n", one->content);
        one = one->next;
    }
	printf("\n");
}

void ft_del(void *p)
{
    free(p);
}

void test_lstclear()
{
    t_list  *head;
    t_list  *one = NULL;
    t_list  *two = NULL;
    t_list *extra = NULL;
    void    (*f)(void *p);

    f = &ft_del;
    head = malloc(sizeof(t_list));
    one = malloc(sizeof(t_list));
    two = malloc(sizeof(t_list));
    extra = malloc(sizeof(t_list));
    extra->content = ft_strdup("hei");
    one->content = ft_strdup("moi");
    two->content = ft_strdup("jeee");
    head->content = ft_strdup(":)");
    head->next = one;
    one->next = two;
    two->next = extra;
    extra->next = NULL;
    ft_lstclear(&head, f);
    printf("ft_lstclear result: %p\n", head);
    while (head != 0)
    {
        printf("%s\n", head->content);
        head = head->next;
    }
	printf("\n");
}

void   ft_test1(void *p)
{
    (*(int *)p) = (*(int *)p) + 1;
}

void test_lstiter(int i, int j, int k, int h)
{
    void (*f)(void *);
    t_list  *head;
    t_list  *one = NULL;
    t_list  *two = NULL;
    t_list *extra = NULL;
    int *p = &i;
    int *o = &j;
    int *m = &k;
    int *c = &h;

    f = &ft_test1;
    head = malloc(sizeof(t_list));
    one = malloc(sizeof(t_list));
    two = malloc(sizeof(t_list));
    extra = malloc(sizeof(t_list));
    extra->content = c;
    one->content = o;
    two->content = m;
    head->content = p;
    head->next = one;
    one->next = two;
    two->next = extra;
    extra->next = NULL;

    ft_lstiter(head, f);
	printf("ft_lstiter result:\n");
    while (head != 0)
    {
        printf("%d\n", *(int *)head->content);
        head = head->next;
    }
	printf("\n");
}

void *ft_addone(void *p)
{
	char *s;

	s = 0;
	p = s;
	p = "a";
	return (p);
}

void ft_dell(void *p)
{
    p = NULL;
}

void test_lstmap(char *s)
{
    void *(*f)(void *);
    void (*del)(void *);
    t_list  *head;
    t_list  *one;
    t_list  *two;
    t_list  *three;
    t_list  *four;
    t_list  *result;

    head = ft_lstnew(s);
    one = ft_lstnew(s);
    two = ft_lstnew(s);
    three = ft_lstnew(s);
    four = ft_lstnew(s);

    head->next = one;
    one->next = two;
    two->next = three;
    three->next = four;
    four->next = NULL;

    f = &ft_addone;
    del = &ft_dell;
    result = ft_lstmap(head, f, del);
	printf("ft_lstmap result:\n");
    while (result != 0)
    {
        printf("%s\n", result->content);
        result = result->next;
    }
	printf("\n");
}

int main()
{
	//takes (char *s)
	test_lstnew("moi");

	//takes (char *s, char *s1)
	test_lstadd_front("42", "Hello");

	test_lstsize();

	//takes (char *s)
	test_lstlast(":)");

	//takes (char *s)
	test_lstadd_back(":)");

	//takes (char *s, char *s1, char *s2)
	test_lstdelone("Hello", "!!!", "42"); 
	
	test_lstclear();

	//takes (int a, int b, int c, int d)
	test_lstiter(1, 2, 3 , 4);
	
	//takes (char *s)
	test_lstmap("B");

	//takes (int c)
	test_isalpha(97);

	//takes (int c)
	test_isdigit(54);

	//takes (int c)
	test_isalnum(68);

	//takes (int c)
	test_isascii(2);

	//takes (int c)
	test_isprint(123);

	//takes (const char *s)
	test_strlen("Count me");

	//takes (void *b, int c, size_t len)
	char s[15]= "Helloo 42";
	char b[15]= "Helloo 42";
	test_memset(s, b, '$', 6);

	//takes (void *s, size_t n)
	char s1[15]= "Helloo 42";
	char b1[15]= "Helloo 42"; 
	test_bzero(s1, b1, 5);

	//takes (void *dst, const void *src, size_t n)
	test_memcpy(0, 0, 3);

	//takes (void *dst, const void *src, size_t len)
	char dst1[10]= "424242";
	char src1[] = "Hello 42";
	char src2[] = "Hello 42";
	test_memmove(dst1, src1, src2, 4);
	
	//takes (char *dst, const char *src, size_t dstsize)
	char dst2[15];
	test_strlcpy(dst2, "Hello 42", 4);

	//takes (char *dst, const char *src, size_t dstsize)
	char dst3[15]= "Hello";
	char src[15]= "42";
	test_strlcat(dst3, src, 8);

	//takes (int c)
	test_toupper(97);

	//takes (int c)
	test_tolower(89);

	//takes (const char *s, int c)
	test_strchr("Hello 42", 'z');

	//takes (const char *s, int c)
	test_strrchr("Hello 42", 0);

	//takes (const char *s1, const char *s2, size_t n)
	test_strncmp("Hello 42", "hell 42", 5);

	//takes (const void *s, int c, size_t n)
	test_memchr("Hello 42", 'o', 8);

	//takes (const void *s1, const void *s2, size_t n)
	test_memcmp("Hello 42", "Hello 42", 8);

	//takes (const char *haystack, const char *needle, size_t len)
	test_strnstr(((void *)0), "fake", 0);

	//takes (const char *str)
	test_atoi("-2147483648");

	//takes (size_t count, size_t size)
	test_calloc(5, 4);

	//takes (const char *s1)
	test_strdup("Hello 42");

	//takes (char const *s, unsigned int start, size_t len)
	test_substr("hello helloo", 6, 10);

	//takes (char const *s1, char const *s2)
	test_strjoin("Hello", "42");

	//takes (char const *s1, char const *set)
	test_strtrim(".....", ".");

	//takes (char const *s, char c)
	test_split("Hello!", ' ');

	//takes (int n)
	test_itoa(42);

    //takes (char const *s)
	test_strmapi("iiiiiiii");

	//takes (char const *s)
	char str[]= "aaaaa";
	test_striteri(str);

	//takes (char c)
	test_putchar_fd('G');

	//takes (char *s)
	test_putstr_fd("Hello 42");

	//takes (char *s)
	test_putendl_fd("Hello 42");

	//takes (int n)
	test_putnbr_fd(42);
	return (0);
}
