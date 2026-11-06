/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgammal <dimitri.gammal@learner.42.tech    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 16:14:39 by dgammal           #+#    #+#             */
/*   Updated: 2026/11/06 11:22:11 by dgammal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include <stdlib.h>

int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isalnum(int c);
int	ft_isascii(int c);
int	ft_isprint(int c);
int	ft_strlen(const char*str);
void	*ft_memset(void*dest, int c, size_t n);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void*dest, const void*src, size_t count);
void	*ft_memmove(void *dest, const void *src, size_t n);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
void	*ft_memchr(const void *ptr, int ch, size_t n);
int	ft_memcmp(const void *s1, const void *s2, size_t n);
int	ft_toupper(int c);
int	ft_tolower(int c);
char	*ft_strchr(const char *s, int target);
char	*ft_strrchr(const char *str, int ch);
int	ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strnstr(char const *big, char const *little, size_t len);
size_t	ft_strlcat(char *dst, const char *src, size_t size);

#endif // LIBFT_H
