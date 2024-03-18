#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <stdlib.h>
# include <unistd.h>
# include <stddef.h>

char	*get_next_line(int fd);
char	*ft_strjoin(char *var_static, char *var);
char	*ft_substr(char *s, int start, int len);
int		ft_strlen(char *s);
char	*ft_get_line(char *var_static);
char	*ft_readfile(char *var_static, int fd);
int		ft_backslash(char *s);
char	*ft_strdup(const char *s1);

#endif
