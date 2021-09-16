/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mballet <mballet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 12:54:09 by mballet           #+#    #+#             */
/*   Updated: 2021/09/07 13:43:37 by mballet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}				t_list;

typedef struct s_list_int
{
	long int			*content;
	struct s_list_int	*next;
}				t_list_int;

long int		ft_atoi(const char *str);
void			ft_bzero(void *s, size_t n);
int				ft_isalnum(int c);
int				ft_isalpha(int c);
int				ft_isascii(int c);
int				ft_isdigit(int c);
int				is_strnum(char *str);
int				ft_isprint(int c);
void			*ft_memccpy(void *dest, const void *src, int c, size_t n);
void			*ft_memcpy(void *dest, const void *src, size_t n);
void			*ft_memset(void *b, int c, size_t n);
char			*ft_strchr(const char *s, int c);
size_t			ft_strlcat(char *dest, const char *src, size_t destsize);
size_t			ft_strlcpy(char *dest, const char *src, size_t destsize);
size_t			ft_strlen(const char *s);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
char			*ft_strnstr(const char *haystack, const char *needle,
					size_t len);
void			*ft_memmove(void *dest, const void *src, size_t len);
char			*ft_strrchr(const char *s, int c);
int				ft_toupper(int c);
int				ft_tolower(int c);
void			*ft_memmove(void *dest, const void *src, size_t len);
void			*ft_memchr(const void *s, int c, size_t n);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
void			*ft_calloc(size_t count, size_t size);
char			*ft_strdup(const char *s1);
char			*ft_substr(char const *s, unsigned int start, size_t len);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_strtrim(char const *s1, char const *set);
void			ft_putchar_fd(char c, int fd);
void			ft_putstr_fd(char *s, int fd);
void			ft_putendl_fd(char *s, int fd);
void			ft_putnbr_fd(int n, int fd);
char			*ft_itoa(int n);
char			**ft_split(char const *s, char c);
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
t_list			*ft_lstnew(void *content);
t_list_int		*ft_lstnew_int(long int *content);
void			ft_lstadd_front(t_list **alst, t_list *new);
void			ft_lstadd_front_int(t_list_int **alst, t_list_int *new);
int				ft_lstsize(t_list *lst);
int				ft_lstsize_int(t_list_int *lst);
t_list			*ft_lstlast(t_list *lst);
t_list_int		*ft_lstlast_int(t_list_int *lst);
void			ft_lstadd_back(t_list **alst, t_list *new);
void			ft_lstadd_back_int(t_list_int **alst, t_list_int *new);
void			ft_lstdelone(t_list *lst, void (*del)(void*));
void			ft_lstdelone_int(t_list_int *lst, void (*del)(long int *));
void			ft_lstclear(t_list **lst, void (*del)(void*));
void			ft_lstclear_int(t_list_int **lst, void (*del)(long int *));
void			ft_lstiter(t_list *lst, void (*f)(void *));
void			ft_lstiter_int(t_list_int *lst, void (*f)(long int *));
void			printlst_int(t_list_int *lst);
t_list			*ft_lstmap(t_list *lst, void *(*f)(void *),
					void (*del)(void *));
int				lst_cpy(t_list *from, t_list **cpy);
int				lst_cpy_int(t_list_int *from, t_list_int **cpy);
void			ft_putnbr_base(int nbr, char *base);
char			*ft_realloc(char *str, size_t size);
void			ft_double_free(char **str, int size_first);
char			**ft_strdup_double(char **str, int size);

#endif
