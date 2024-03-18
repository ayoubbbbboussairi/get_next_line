#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H
# include <stdlib.h>
# include <unistd.h>
# include <stddef.h>

char	*get_next_line(int fd);
char	*ft_strjoin_bs(char *var_static, char *var);
char	*ft_substr_bs(char *s, int start, int len);
int		ft_strlen_bs(char *s);
char	*ft_get_line_bs(char *var_static);
char	*ft_readfile_bs(char *var_static, int fd);
int		ft_backslash_bs(char *s);
char	*ft_strdup_bs(const char *s1);

#endif
