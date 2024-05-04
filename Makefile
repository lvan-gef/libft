# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: lvan-gef <lvan-gef@student.codam.n>          +#+                      #
#                                                    +#+                       #
#    Created: 2022/10/25 16:26:47 by lvan-gef      #+#    #+#                  #
#    Updated: 2022/12/02 17:59:23 by lvan-gef      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -c -Wall -Werror -Wextra
CFILES = ft_memset.c ft_strjoin.c ft_strlcat.c ft_itoa.c ft_atoi.c ft_bzero.c ft_putstr_fd.c ft_isdigit.c ft_strlcpy.c ft_strdup.c ft_strncmp.c ft_tolower.c ft_calloc.c ft_putnbr_fd.c ft_putchar_fd.c ft_strnstr.c ft_putendl_fd.c ft_memcpy.c ft_strchr.c ft_memcmp.c ft_striteri.c ft_memchr.c ft_isascii.c ft_isalnum.c ft_memmove.c ft_split.c ft_isalpha.c ft_strrchr.c ft_strlen.c ft_isprint.c ft_strtrim.c ft_substr.c ft_strmapi.c ft_toupper.c
OBJECTS = $(CFILES:%.c=%.o)
B_CFILES = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c 
B_OBJECTS = $(B_CFILES:%.c=%.o)
INCLUDE = libft.h
NAME = libft.a
LIB = ar rcs

.PHONY: all clean fclean re bonus

$(NAME): $(OBJECTS) $(INCLUDE)
	$(LIB) $(NAME) $(OBJECTS)
	ranlib $(NAME)

all: $(NAME)

bonus: $(B_OBJECTS) $(INCLUDE)
	$(LIB) $(NAME) $(B_OBJECTS)
	ranlib $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -o $@ $<

clean:
	rm -f $(OBJECTS) $(B_OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all
