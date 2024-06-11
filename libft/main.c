/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgimeno <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 09:41:19 by pgimeno           #+#    #+#             */
/*   Updated: 2024/05/30 15:04:33 by pgimeno          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

void ft_free_data(void *data)
{
	printf("Data to delete: %s\n", (char *)data);
	free(data);
}

char ft_toupper_2(unsigned int index, char value)
{
	(void)index;
	if (value >= 'a' && value <= 'z')
		return (value - 32);
	return (value);
}

void ft_print_data(void *data)
{
	printf("%s\n", (char *)data);
}

void	*ft_transform_data(void *content)
{
	char		*original_content;
	size_t	len;
	char		*new_content;
	int		i;

	i = 0;
	original_content = (char *) content;
	len = ft_strlen(original_content);
	new_content = (char *) malloc(len + 1);
	
	if (!new_content)
		return (NULL);
	while (original_content[i] != '\0')
	{
		new_content[i] = ft_toupper(original_content[i]);
		i++;
	}
	new_content[i] = '\0';
	return (new_content);
}

int main(void)
{
		printf("Is Alpha:\n");
		printf("Is 'a' an alpha: %d\n", ft_isalpha('a'));
		printf("Is 'z' an alpha: %d\n", ft_isalpha('z'));
		printf("Is 'A' an alpha: %d\n", ft_isalpha('A'));
		printf("Is 'Z' an alpha: %d\n", ft_isalpha('Z'));
		printf("Is '1' an alpha: %d\n", ft_isalpha('1'));
		printf("Is ' ' an alpha: %d\n", ft_isalpha(' '));

		printf("\nIs Digit:\n");
		printf("Is 'a' an digit: %d\n", ft_isdigit('a'));
		printf("Is 'z' an digit: %d\n", ft_isdigit('z'));
		printf("Is 'A' an digit: %d\n", ft_isdigit('A'));
		printf("Is 'Z' an digit: %d\n", ft_isdigit('Z'));
		printf("Is '1' an digit: %d\n", ft_isdigit('1'));
		printf("Is '0' an digit: %d\n", ft_isdigit('0'));
		printf("Is ' ' an digit: %d\n", ft_isdigit(' '));

		printf("\nIs Alphanumeric:\n");
		printf("Is 'a' an alphanum: %d\n", ft_isalnum('a'));
		printf("Is 'z' an alphanum: %d\n", ft_isalnum('z'));
		printf("Is 'A' an alphanum: %d\n", ft_isalnum('A'));
		printf("Is 'Z' an alphanum: %d\n", ft_isalnum('Z'));
		printf("Is '1' an alphanum: %d\n", ft_isalnum('1'));
		printf("Is '0' an alphanum: %d\n", ft_isalnum('0'));
		printf("Is ' ' an alphanum: %d\n", ft_isalnum(' '));

		printf("\nIs Ascii:\n");
		printf("Is 'a' an ascii: %d\n", ft_isascii('a'));
		printf("Is 'z' an ascii: %d\n", ft_isascii('z'));
		printf("Is 'A' an ascii: %d\n", ft_isascii('A'));
		printf("Is 'Z' an ascii: %d\n", ft_isascii('Z'));
		printf("Is '1' an ascii: %d\n", ft_isascii('1'));
		printf("Is '0' an ascii: %d\n", ft_isascii('0'));
		printf("Is ' ' an ascii: %d\n", ft_isascii(' '));

		printf("\nIs Printable:\n");
		printf("Is 'a' a printable: %d\n", ft_isprint('a'));
		printf("Is 'z' a printable: %d\n", ft_isprint('z'));
		printf("Is '5' a printable: %d\n", ft_isprint('5'));
		printf("Is ' ' a printable: %d\n", ft_isprint(' '));

		printf("\nTo Uppercase:\n");
		printf("l in uppercase is: %c\n", ft_toupper('l'));
		printf("A in uppercase is: %c\n", ft_toupper('A'));
		printf("0 in uppercase is: %c\n", ft_toupper('0'));

		printf("\nTo Lowercase:\n");
		printf("L in lowercase is: %c\n", ft_tolower('L'));
		printf("a in lowercase is: %c\n", ft_tolower('a'));
		printf("0 in lowercase is: %c\n", ft_tolower('0'));

		printf("\nStrLen: \n");
		printf("The word \"Hello\" is %d characters long\n", ft_strlen("Hello"));

		printf("\nATOI:\n");
		printf("The String: 64794 to int is:%d\n", ft_atoi("64794"));
		printf("The String: -5467 to int is:%d\n", ft_atoi("-5467"));

		printf("\nSTRDUP:\n");
		char	*str1 = "Hello!";
		char	*str2 = ft_strdup(str1);
		printf("Original string: %s, New string: %s\n", str1, str2);
		printf("Original string MEMPOS: %p, New string MEMPOS: %p\n", &str1, &str2);
		free(str2);

		printf("\nSTRLCPY:\n");
		char	*str3 = "World!";
		char	str4[6] = "";
		printf("%ld\n", ft_strlcpy(str4, str3, 2));
		printf("SRC String: %s, New string: %s\n", str3, str4);

		char	*str5 = "___";
		char	str6[6] = "Hello";
		printf("%ld\n", ft_strlcpy(str6, str5, 2));
		printf("SRC String: %s, New string: %s\n", str5, str6);

		printf("\nSTRLCAT:\n");
		char	str7[5] = "World";
		char	str8[11] = "Hello";
		int	str8_size = ft_strlcat(str8, str7, 11);
		printf("New Concatenated sring: %s With size: %d\n", str8, str8_size);

		printf("\nSUBSTR\n");
		char	*str9 = "It's a me Mario!";
		printf("Orginal String: %s, Substr: %s\n", str9, ft_substr(str9, 10, 5));

		printf("\nSTRTRIM\n");
		char	*str10 = "+-**-+";
		char	*str11 = "+-* /Hello!/ *-+Wor-ld*+";
		char	*str12 = "Hello!/ *-+World*+";
		char	*str13 = "+-* /He*llo!/ *-+World";
		char	*str14 = "Hello!/ *-+World";
		char	*set = "-/*+";

		printf("Orignal String: %s, Trimmed string: %s\n", str10, ft_strtrim(str10, set));
		printf("Orignal String: %s, Trimmed string: %s\n", str11, ft_strtrim(str11, set));
		printf("Orignal String: %s, Trimmed string: %s\n", str12, ft_strtrim(str12, set));
		printf("Orignal String: %s, Trimmed string: %s\n", str13, ft_strtrim(str13, set));
		printf("Orignal String: %s, Trimmed string: %s\n", str14, ft_strtrim(str14, set));

		printf("\nSTRSPLIT\n");
		char *str15 = "***Hello*Wor**l**";
		// [Hello, Wor, l]
		char *str16 = "It's***a me**Mario!*******& Luigi!";
		// [It's, a me, Mario!]
		char	**results = ft_split(str15, '*');
		int	i = 0;

		while (results[i] != NULL)
		{
			printf("%s\n", results[i]);
			i++;
		}
		printf("\n");
		char	**results2 = ft_split(str16, '*');
		i = 0;
		while (results2[i] != NULL)
		{
			printf("%s\n", results2[i]);
			i++;
		}

		printf("\nSTRCHR\n");
		char *str17 = "This is a new dawn";
		char *str171 = "The forest";
		printf("Original String: %s, To search: %c, Result: %s\n", str17, 'a', ft_strchr(str17, 'a'));
		printf("Original String: %s, To search: %c, Result:%s\n", str171, 'a', ft_strchr(str171, 'a'));

		printf("\nSTRRCHR\n");
		printf("Original String: %s, To search: a, Result: %s\n", str17, ft_strrchr(str17, 'a'));
		ft_strrchr(str171, 'a');

		printf("\nMEMSET\n");
		char str18[20] = "Hello World!";
		printf("Before memset of - for size 5 in: %s\n", str18);
		printf("After memset: %s\n", (char *) ft_memset(str18, '-', 7));

		printf("\nBZERO\n");
		char str19[20] = "Hello World!";
		printf("Before bzero: %s Mempos: %p\n", str19, &str19);
		ft_bzero(str19, 5);
		printf("After bzero: %s Mempos: %p\n", str19, &str19);

		printf("\nMEMCPY\n");
		char str20[20] = "Hello World!";
		char str21[20];
		printf("Original String:%s Mempos: %p\n", str20, &str20);
		ft_memcpy(str21, str20, ft_strlen(str20) + 1);
		printf("Copy String:%s Mempos: %p\n", str21, &str21);

		printf("\nMEMMOVE\n");
		char	str22[9] = "ABCDEFGH";
		printf("%s\n", (char *) ft_memmove(str22 + 4, str22, 3));
		ft_memmove(str22 + 4, str22, 3);

		printf("\nMEMCHR\n");
		char	str23[9] = "ABCDEFGH";
		ft_memchr(str23, 'D', ft_strlen(str23));
		printf("%s\n", (char *) ft_memchr(str23, 'D', ft_strlen(str23)));
		ft_memchr(str23, 'D', ft_strlen(str23));

		printf("\nMEMCMP\n");
		printf("%d\n", ft_memcmp("ABCDEF", "ABCDEF", 6));
		printf("%d\n", ft_memcmp("ABCDE", "ABCDEF", 6));
		printf("%d\n", ft_memcmp("ABCDEF", "ABCDE", 6));

		printf("\nSTRNSTR\n");
		char str24[] = "This is a sentence";
		char str25[] = "s a s";
		printf("Original String: %s, STR to search: %s, Result:%s\n", str24, str25, ft_strnstr(str24, str25, 30));

		printf("\nCALLOC\n");
		int	*range = ft_calloc(5, 4);
		i = 0;
		while (i < 4)
			printf("Range pos: %d, Value: %d\n", i ,range[i++]);

		printf("\nSTRJOIN\n");
		char	str26[] = "This is ";
		char	str27[] = "a sentence";
		char	str28[] = " to join";
		char	*str29  = ft_strjoin(ft_strjoin(str26, str27), str28);
		printf("%s\n", str29);

		printf("\nITOA\n");
		printf("%s\n", ft_itoa(INT_MAX));
		printf("%s\n", ft_itoa(INT_MIN));
		printf("%s\n", ft_itoa(0));
		printf("%s\n", ft_itoa(-1));
		printf("%s\n", ft_itoa(1));

	printf("\nSTRMAPI\n");

	char str30[] = "ThIs A SeNteNcE";
	char *str31 = ft_strmapi(str30, ft_toupper_2);
	printf("Original String: %s, Mapped String: %s\n", str30, str31);

	printf("\nSTRITERI\n");

//	ft_striteri(str30, ft_toupper_2);
	printf("Iteri String: %s\n", str30);

	printf("\nFILE DESCRIPTORS: \n");
	int file = open("fd_test.txt", O_WRONLY | O_CREAT | O_APPEND, S_IRUSR | S_IWUSR);
	if (file == -1)
		return (1);
	ft_putchar_fd('T', 1);
	ft_putstr_fd("New beginning", 1);
	ft_putendl_fd("New beginning", 1);
	ft_putendl_fd("New beginning", 1);
	ft_putnbr_fd(INT_MIN, 1);

	close(file);

	printf("\nLISTS: \n");
	t_list *list = ft_lstnew("This is data at the end");
	printf("List value: %s\n", (char *)list->content);

	t_list *item1 = ft_lstnew("This is data 2");
	ft_lstadd_front(&list, item1);
	printf("List value: %s\n", (char *)list->content);

	t_list *item2 = ft_lstnew(ft_strdup("This is data 3"));
	ft_lstadd_front(&list, item2);
	printf("\nList Size: %d\n", ft_lstsize(item1));

	printf("\nLast List Element: %s\n", (char *)ft_lstlast(item2)->content);
	ft_lstadd_back(&list,  ft_lstnew("Last list item"));

	printf("New Last List Element: %s\n", (char *)ft_lstlast(item2)->content);

	printf("\nLIST ITERATION\n");

	ft_lstiter(list, ft_print_data);

	t_list	*list2 = NULL;
	ft_lstadd_back(&list2, ft_lstnew("Chicago"));
	ft_lstadd_back(&list2, ft_lstnew("Monte Video"));
	ft_lstadd_back(&list2, ft_lstnew("Paris"));
	ft_lstadd_back(&list2, ft_lstnew("Oriundi"));
	


	t_list	*mapped_list = ft_lstmap(list2, &ft_transform_data, &ft_free_data);

	printf("\nLIST NOT MAPPED ITERATION\n");
	ft_lstiter(list2, ft_print_data);

	printf("\nLIST MAPPED ITERATION\n");
	ft_lstiter(mapped_list, ft_print_data);
	return (0);
}
