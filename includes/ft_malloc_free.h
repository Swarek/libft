#ifndef FT_MALLOC_FREE_H
# define FT_MALLOC_FREE_H

# include "libft.h"

void	ft_2dclear(char **array);
void	*ft_calloc(size_t num, size_t size);
void	*ft_check_malloc(size_t size);
void **ft_malloc_array(size_t count, size_t element_size);
void *ft_realloc(void *ptr, size_t old_size, size_t new_size);
void	*safe_calloc(size_t count, size_t size);
void ft_safe_free(void **ptr);
void *ft_safe_malloc(size_t size);

#endif