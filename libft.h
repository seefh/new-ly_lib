#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>
# include <unistd.h>
# define BUFF_SIZE 4096

void    ft_bzero(void *b, size_t len);
void *ft_memccpy(void *dest, const void *src, int c, size_t n);
void    *ft_memchr(const void *s, int c, size_t n);
int  ft_memcmp(const void *s1, const void *s2, size_t n);
void    *ft_memcpy(void *restrict dst, const void *restrict src, size_t n);
void    *ft_memmove(void *dst, const void *src, size_t len);
void    *ft_memset(void *b, int c, size_t len);
int      ft_strcmp(const char *s1, const char *s2);
int      ft_strncmp(const char *s1, const char *s2, size_t n);
size_t	ft_strlen(const char *s);
char	*ft_strdup(const char *s1);
char	*ft_strcpy(char *s1, const char *s2);
char	*ft_strncpy(char *s1, const char *s2, size_t n);
char	*ft_strcat(char *s1, const char *s2);
char	*ft_strncat(char *s1, const char *s2, size_t n);
size_t	ft_strlcat(char	*dst, const char *src, size_t size);
char	*ft_strchr(const char *s, int c);
int	ft_memcmp(const void *s1, const void *s2, size_t n);
int	ft_atoi(const char *str);
#endif