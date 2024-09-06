#ifndef FT_ARRAY_OF_STRINGS_H
# define FT_ARRAY_OF_STRINGS_H

# include "libft.h"

char	**duplicate_string_array(char **src);
void	free_array_iter_error(char **tab, int i);
int		get_2d_array_length(char **map);

#endif