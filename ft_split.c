#include "libft.h"

size_t	ft_number_of_words(char *s, char c, size_t *number_of_words)
{
	while (*s++)
		if ((*s == c || *s == '\0') && *(s - 1) != c)
			(*number_of_words)++;
	return (*number_of_words);
}

size_t	ft_len_word(char *s, char c, size_t *len_word)
{
	while (*s && *s++ != c)
		(*len_word)++;
	return (*len_word);
}

void	*free_2d_array(char **array, size_t i)
{
	while (i-- > 0)
		free(array[i]);
	free(array);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**string_array;
	size_t	i;
	size_t	number_of_words;
	size_t	len_word;

	if (!s)
		return (NULL);
	number_of_words = 0;
	number_of_words = ft_number_of_words((char*)s, c, &number_of_words);
	if (!(string_array = (char**)malloc(sizeof(char*) * (number_of_words + 1))))
		return (NULL);
	i = 0;
	while (i < number_of_words)
	{
		while (*s && *s == c)
			s++;
		len_word = 0;
		len_word = ft_len_word((char*)s, c, &len_word);
		string_array[i] = ft_substr(s, 0, len_word);
		if (string_array[i++] == NULL)
			return (free_2d_array(string_array, i - 1));
		s += len_word;
	}
	string_array[i] = NULL;
	return (string_array);
}
