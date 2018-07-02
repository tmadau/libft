/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmadau <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/11 09:15:08 by tmadau            #+#    #+#             */
/*   Updated: 2018/06/18 10:07:46 by tmadau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*THIS IS THE MAINTEST OF ALL MY FUNCTIONS: PROPERTY OF TMADAU: FOR QUALITY OF WORK AND TESTING IF MY STUFF ACTUALLY WORKS*/

#include "libft.h"

/*TOUPPER*/
/*int		main(void)
{
	int i = 0;
	char str[] = "\nmake 439888***-*-*-*§§-*§5this an uppercase letter\n\n";

	while(str[i])
	{
		ft_putchar(ft_toupper(str[i]));
		i++;
	}
	return(0);
}*/

/*TOLOWER*/
/*int		main(void)
{
	int i = 0;
	char str[] = "\nMAKE THIS A LOWERCASE STRING\n\n";
   
	while(str[i])
	{
		putchar(ft_tolower(str[i]));
		i++;
	}
	return(0);
}*/

/*STRTRIM*/
/*int		main(void)
{
	char trim[] = " trim this string for me ";
	char trim1[] = "   i *----*-     trim is this way   66**- 678      ";
	printf("trim string =>%s\n", ft_strtrim(trim));
	printf("trim string1 =>%s\n", ft_strtrim(trim1));
	return (0);
}*/

/*STRSUB*/
/*int		main(void)
{
	char const word[] = "contain this string a = *--*798756465*i/==*--11!@&^%$&^#*(&)()";
	int		start = 0;

	printf("\nft_strsub = %s\n\n", ft_strsub(word, start, 100));
	return (0);
}*/

/*STRSTR*/
/*int		main(void)
{
   const char haystack[] = "Testing one7, two, 7one, two, testing == **---***-§§§§";
   const char needle[] = "7";
   char *ret;
   char *test;

   ret = strstr(haystack, needle);
   
   test = ft_strstr(haystack, needle);
   
   printf("strstr = %s\n", ret);
   printf("ft_strstr = %s\n", test);
   
   return(0);
}*/

/*STRSPLIT*/
/*int		main(void)
{
    char str[] = "split this very very long lon long long string for me and give me substrin*g- *of- *each- *w -*e t* -h *-i *n -k **c *o d**-- *e";
    char	**delimeters;

    printf("str=[%s]\n\n", str);

    delimeters = ft_strsplit(str, ' ');

    if (delimeters)
    {
        int i;
        for (i = 0; *(delimeters + i); i++)
        {
            printf("substring=[%s]\n", *(delimeters + i));
            free(*(delimeters + i));
        }
        printf("\n");
        free(delimeters);
    }

    return 0;
}*/

/*STRCHR*/
/*int		main(void)
{
   const char str[] = "*ch*e*c*k*^§ *f*o*r *t**h*e* *.*.*.* *i*n* *t*h*is* **s*t*r*i*n*g*->";
   const char ch = '\0';
   char *ret;

   ret = ft_strchr(str, ch);

   printf("String after |%c| is - |%s|\n", ch, ret);
   
   return(0);
}*/

/*STRRCHR*/
/*int		main(void)
{
	const char str[] = "look for me, in this string. Because I am somewhere here";
	const char ch = '.';
	char *ret;

	ret = strrchr(str, ch);

	printf("String after |%c| is - |%s|\n", ch, ret);

	return(0);
}*/

/*STRNSTR*/
/*int		main(void)
{
	char *s1 = "I will be searching for my needle here§§ in this string<-><->**----this is what is ^should return";
	char *s2 = "^";

	char *i1 = strnstr(s1, s2, 100);
	char *i2 = ft_strnstr(s1, s2, 100);

	printf("strnstr: %s\n", i1);
	printf("ft_strnstr: %s\n", i2);
	
	return(0);
}*/

/*STRNEW*/
/*int		main(void)*/
/*int		main(void)
{
	char str[] = "this is a string";
	int		i = 100;

	printf("print out =%s\n", ft_strnew(str[i]));
	return (0);
}*/

/*STRNCMP*/
/*int		main(void)
{
   char str1[100];
   char str2[100];
   int ret;

   strcpy(str1, "****----wethinkcode");
   strcpy(str2, "****----wethinkcode");

   ret = ft_strncmp(str1, str2, 50);

   if(ret < 0)
   {
      printf("str1 is less than str2\n");
   } 
   else if(ret > 0)
   {
      printf("str2 is less than str1\n");
   } 
   else 
   {
      printf("str1 is equal to str2\n");
   }  
   return(0);
}*/

/*STRNCPY*/
/*int		main(void)
{
   char src[40];
   char dest[12];
  
   memset(dest, '\0', sizeof(dest));
   strcpy(src, "testing \0 ee***=-=--*=--****");
   ft_strncpy(dest, src, 20);

   printf("Final copied string : %s\n", dest);
   
   return(0);
}*/

/*STRNCAT*/
/*int		main(void)
{
   char src[100], dest[100];

   strcpy(src,  "<-I am now linked with that stirng");
   strcpy(dest, "link my string now with the following string from src->");

	ft_strncat(dest, src, 50);

   printf("Final destination string : |%s|\n", dest);

   return(0);
}*/

/*STRMAPI*/
int		main(void)
{
	char	(*str)(char);
	char	*str1;
	size_t	i;

	i = 0;
	str = &ft_newto;
	str1 = ft_strmapi("MAKE THIS string upper", *str[i]);
	printf("print my string = %s\n", str1);
	return (0);
}

/*STRMAP*/
/*int		main(void)
{
	char	(*str)(char);
	char	*str1;

	str = &ft_newto;
	str1 = ft_strmap("MAKE THIS string upper", str);
	printf("print my string = %s\n", str1);
	return (0);
}*/

/*STRLEN*/
/*int		main(void)
{
	char str[100];
	int len;

	ft_strcpy(str, "there§§ is§§ a§§ river§§ that§§ flows§§ from§§ above§§");

	len = ft_strlen(str);
	printf("Length of |%s| is |%d|\n", str, len);

	return(0);
}*/

/*STRLCAT*/
/*int		main(void)
{
	char str_dest[] = "sdfsd";
	char str_src[] = "asdf";
	unsigned int n = 9;

	printf("%zu", ft_strlcat(str_dest, str_src, n));

	return(0);
}*/

/*STRJOIN*/
/*int		main(void)
{
	char	*str;

	ft_strjoin(NULL, NULL);
	ft_strjoin(NULL, "");
	ft_strjoin("", NULL);
	str = ft_strjoin("hello  ", "boys");
	if (strcmp(str, "Hello boys") != 0)
	{
		printf("error\n");
		free(str);
		return (0);
	}
	free(str);
	return (1);
}*/

/*STRITERI*/
/*int		main(void)
{
	char		str[] = "Hello";

	ft_striteri(NULL, NULL);
	ft_striteri(str, NULL);
	if (strcmp(str, "Hfnos") != 0)
		printf("ERROR\n");
	return (1);
}*/


/*STRITER*/
/*int		main(void)
{
	char		*str = "Hello les genw";

	if (strstr(str, "Hello") != ft_strstr(str, "z"))
		printf("ERROR\n");
	return (1);
}*/

/*STRNEQU*/
/*int		main(void)
{
	char *str1 = "string1B";
	char *str2 = "string1b";
	if (ft_strnequ(str1, str2, 10) == 1)
		printf("strings are equal\n");
	else
		printf("strings are not equal\n");
	return (0);
}*/

/*STREQU*/
/*int		main(void)
{
	char *str1 = "§\0*****-----+++++ttt2";
	char *str2 = "§\0*****-----+++++ttt1";
	if (ft_strequ(str1, str2) == 1)
		printf("strings are equal\n");
	else
		printf("strings are not equal\n");
	return (0);
}*/

/*STRDUP*/
/*int		main(void)
{
    char *p1 = "t'\0'his ******--=*=*=*--++93939§§192$'\0'=is a test for all my strings that need to be duplicated";
    char *p2;
    p2 = strdup(p1);

	printf("Duplicated string is : %s\n", p2);
	return 0;
}*/

/*STRDEL*/
/*int		main(void)
{
	char		*ret;

	ft_strdel(NULL);
	ret = ft_strnew(4);
	ft_strdel(&ret);
	if (ret != NULL)
		printf("error");
	ret = ft_strnew(0);
	ft_strdel(&ret);
	if (ret != NULL)
		printf("error1");
	return (1);
}*/

/*STRCPY*/
/*int		main(void)
{
   char src[40];
   char dest[100];

   memset(dest, '\0', sizeof(dest));
   ft_strcpy(src, "I can handle t***34*34**34*****----");
   ft_strcpy(dest, src);

   printf("Final copied string : %s\n", dest);

   return(0);
}*/

/*STRCMP*/
/*int		main(void)
{
	char str1[15];
	char str2[15];
	int ret;

	ft_strcpy(str1, "ababababab");
	ft_strcpy(str2, "ababababaub");

	ret = ft_strcmp(str1, str2);

	if(ret < 0) 
	{
		printf("str1 is less than str2");
	}
	else if(ret > 0)
	{
		printf("str2 is less than str1");
	}
	else
	{
		printf("str1 is equal to str2");
	}
	return(0);
}*/

/*STRCLR*/
/*int		main(void)
{
	int			i;
	char		str[] = "Hello";

	i = 0;
	ft_strclr(NULL);
	ft_strclr(str);
	while (i < 6)
	{
		if (str[i] != '\0')
			printf("error");
	i = i + 1;
	}
	return (1);
}*/

/*STRCHR*/
/*int		main(void)
{
	const char str[] = "search for this string now  == z";
	const char ch = 'z';
	char *ret;

	ret = strchr(str, ch);
	printf("String after |%c| is - |%s|\n", ch, ret);
	return(0);
}*/

/*STRCAT*/
/*int		main(void)
{
	char src[50], dest[50];

	strcpy(src,  "This is source");
	strcpy(dest, "This is destination");

	strcat(dest, src);
	printf("Final destination string : |%s|", dest);
   
   return(0);
}*/

/*PUTSTR_FD*/
/*int		main(void)
{
	ft_putstr_fd("this is a string I am testing\n", 1);
	ft_putstr_fd("this is a really out of control--- -- - - --33-3-3- -------34o5u43982121§i~~~~§lkjafsd\n", 1);
}*/

/*PUTSTR*/
/*int		main(void)
{
	ft_putstr("99999§this i*s9* m99y strin9999999sdflaj;sdklfjasdfasdf-----asdfg\n");
	ft_putstr("t***§99h99*9i9s999 i99987fdsaflkajsfs my string999999999-----------92\n");
}*/

/*PUTNBR_FD*/
/*int		main(void)
{
	ft_putnbr_fd(999999999, 1);
	return (0);
}*/

/*PUTNBR*/
/*int		main(void)
{
	ft_putnbr(20000000000);
	return (0);
}*/

/*ISASCII*/
/*int		main(void)
{
	char ch = ' ';

	// checking is it alphanumeric or not?
	if (ft_isascii(ch))
		printf("\nEntered character is ascii value\n");
	else
		printf("\nEntered character is not ascii value\n");
}*/

/*PUTENDL_FD*/
/*int		main(void)
{
	ft_putendl_fd("this is a testing for my putendl_fd", 1);
	ft_putendl_fd("8888 testing, 1, 2, testing ** --- -- 000 ==++", 1);
}*/

/*PUTENDL*/
/*int		main(void)
{
	ft_putendl("there is a newline");
	ft_putendl("my putendl is working if it gives a newline");
	return (0);
}*/

/*FT_PUTCHAR_FD*/
/*int		main(void)
{
	ft_putchar_fd('a', 1);
	ft_putchar_fd('a', 1);
	ft_putchar_fd('a', 1);
	ft_putchar_fd('a', 1);
	ft_putchar_fd('\n', 1);
	ft_putchar_fd('a', 1);
	ft_putchar_fd('a', 1);
	ft_putstr_fd("there is\n string", 1);
	return (0);
}*/

/*FT_PUCHAR*/
/*int		main(void)
{
	ft_putchar('a');
	ft_putchar('\0');
	ft_putchar('\v');
	ft_putchar('\r');
	ft_putchar('\r');
	ft_putchar('\r');
	ft_putchar('a');
	ft_putchar('a');
//	ft_putchar('\n');
//	ft_putchar('\n');
//	ft_putchar('\n');
//	ft_putchar('\n');
//	ft_putchar('\n');
//	ft_putchar('\n');
//	ft_putchar('\n');
//	ft_putchar('\n');
	return (0);
}*/

/*MEMSET*/
/*int		main(void)
{
	char str[50];

   strcpy(str,"This is string.h library function");
   puts(str);

   ft_memset(str,'$',0);
   puts(str);

   return(0);
}*/

/*MEMMOVE*/
/*int		main(void)
{
	char dest[] = "oldstring 88dest**";
	const char src[]  = "newstring 88src**   8 8 8 8 8 8 8 8 8 ";

	printf("Before memmove dest = %s, src = %s\n", dest, src);
	ft_memmove(dest, src, 10);
	printf("After memmove dest = %s, src = %s\n", dest, src);

	return(0);
}*/

/*MEMDEL*/
/*int		main(void)
{
	void	*str;

	str = malloc(sizeof(void*));
	printf("check for this => memory %s\n", str);
	if (&ft_memdel)
		printf("\nmemory freed%s\n", str);
	else
		printf("\nmemory not freed%s\n", str);
	return (0);
}*/

/*MEMCPY*/
/*int		main(void)
{
	const char src[50] = "This is my memcpy compared with the original";
	char dst[14];

	printf("Before memcpy dest = %s\n", dst);
	ft_memcpy(dst, src, 12);
//	memcpy(dst, src, 4);
	printf("After memcpy dest = %s\n", dst);

	return(0);
}*/

/*MEMCMP*/
/*int		main(void)
{
	char str1[100];
	char str2[100];
	int ret;

//	memcpy(str1, "there from avole", 10);
//	memcpy(str2, "there ida d fhes", 10);
	ft_memcpy(str1, "there from avole", 10);
	ft_memcpy(str1, "there from avole", 10);
	ret = ft_memcmp(str1, str2, 10);

	if(ret > 0)
	{
		printf("str2 is less than str1");
	}
	else if(ret < 0)
	{
		printf("str1 is less than str2");
	}
	else
	{
		printf("str1 is equal to str2");
	}

   	return(0);
}*/

/*MEMCHR*/
/*int		main(void)
{
	const char str[] = "I have a very large 0string that I am testing with6 this ** ";
	const char ch = '0';
	char *ret;
	char *set;
	ret = ft_memchr(str, ch, 100);

	set  = memchr(str, ch, 100);
	printf("ft_memchr: String after |%c| is - |%s|\n", ch, ret);
	printf("\n");
	printf("memchr: String after |%c| is - |%s|\n", ch, set);

	return(0);
}*/

/*MEMCCPY*/
/*int		main(void)
{
	char	string1[] = "therisariver thatflowsfojrmabiear";
	char buffer[61];
	char *pdest;
	printf( "Function: ft_memccpy 42 characters or to character 'c'\n" );
	printf( "Source: %s\n", string1 );
	pdest = ft_memccpy( buffer, string1, 'j', 100);
//	pdest = memccpy( buffer, string1, 'j', 42);
	*pdest = '\0';
	printf( "Result: %s\n", buffer );
	printf( "Length: %lu characters\n", strlen(buffer));
}*/

/*MEMALLOC*/
/*int				main(void)
{
	char str[] = " => this is a string ";

	ft_memalloc(sizeof(str));
	if (&ft_memalloc)
		printf("memory allocated%s\n", str);
	else
		printf("memory not allocated%s\n", str);
	return (0);
}*/

/*ITOA*/
/*int	main(void)
{
	printf("str = '%s'\n", ft_itoa(99999999));
	return (0);
}*/

/*ISUPPER*/
/*int		main(void)
{
	char	ch = '1';

	if (ft_isupper(ch))
		printf("\nthis is an uppercase letter %c\n", ch);
	else
		printf("\nthis is not uppercase letter %c\n", ch);
}*/

/*ISPRINT*/
/*int		main(void)
{
	char	ch = '\0';

	if (ft_isprint(ch))
		printf("\nthis is a printable character %c\n", ch);
	else
		printf("this is not a printable character %c\n", ch);
}*/

/*ISLOWER*/
/*int		main(void)
{
	char	ch = 'P';

	if (ft_islower(ch))
		printf("\nthis is lowercase %c\n", ch);
	else
		printf("\nthis is not lowercase %c\n", ch);
}*/

/*ISDIGIT*/
/*int		main(void)
{
	int		num = 'a';

	if (ft_isdigit(num))
		printf("\nthis is a digit %d\n", num);
	else
		printf("\nthis is not a digit %d\n", num);
}
*/
/*ISASCII*/
/*int		main(void)
{
	char c = '*';

	// %d displays the integer value of a character
	// %c displays the actual character
	printf("The ASCII value of %c is %d\n", c, c);
	return (0);
}*/

/*ISALPHA*/
/*int		main(void)
{
	char ch = '9';

	if (ft_isalpha(ch))
		printf("\nEntered character isalphabetical\n");
	else
		printf("\nEntered character is not isalphabetical\n");
}*/

/*ISALUM*/
/*int		main(void)
{
	char ch = '*';

	// checking is it alphanumeric or not?
	if (ft_isalnum(ch))
		printf("\nEntered character is alphanumeric\n");
	else
		printf("\nEntered character is not alphanumeric\n");
}
*/
/*BZERO*/
/*int		main(void)
{
	char str[] = "abcdcdTAKALANI";
	int c;
	int d;

	d = 14;
	c = 14;
	ft_bzero(str, d);
	bzero(str, c);
	printf("String after first |%d| bytes changes to 0 is - |%s|\n", c, str);
	printf("String after first |%d| bytes changes to 0 is - |%s|\n", d, str);
	return(0);
}*/

/*ATOI*/
/*int		main(void)
{
	printf("ft_atoi: %d\n", ft_atoi("+3000000000"));
	printf("atoi: %d\n", atoi("+3000000000"));
	printf("ft_atoi: %d\n", ft_atoi("12Three45678"));
	printf("atoi: %d\n", atoi("12Three45678"));
	printf("ft_atoi: %d\n", ft_atoi("Hello World!"));
	printf("atoi: %d\n", atoi("Hello World!"));
	printf("ft_atoi: %d\n", ft_atoi("+42 BLAH!"));
	printf("atoi: %d\n", atoi("+42 BLAH!"));
	printf("ft_atoi: %d\n", ft_atoi("-42"));
	printf("atoi: %d\n", atoi("-42"));
	printf("ft_atoi: %d\n", ft_atoi("     +42"));
	printf("atoi: %d\n", atoi("     +42"));
	printf("ft_atoi: %d\n", ft_atoi("\t\n\v\f\r -99999999999999999999"));
	printf("atoi: %d\n", atoi("\t\n\v\f\r -99999999999999999999"));

	return 0;
}*/
