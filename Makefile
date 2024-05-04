# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: lvan-gef <lvan-gef@student.codam.nl>          +#+                     #
#                                                    +#+                       #
#    Created: 2022/10/25 16:26:47 by lvan-gef      #+#    #+#                  #
#    Updated: 2022/12/02 17:59:23 by lvan-gef      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Werror -Wextra

# Root source directory
SRC = src/

# dirs
OBJDIR = obj/
LLDIR = $(SRC)ll/
MEMDIR = $(SRC)mem/
PRINTDIR = $(SRC)printer/
STRDIR = $(SRC)str/
GNLDIR = $(SRC)gnl/
PRINTFDIR = $(SRC)printf/

# c files
LLFILES = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c
MEMFILES = ft_bzero.c ft_calloc.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c
PRINTFILES = ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c
STRFILES = ft_strjoin.c ft_strlcat.c ft_itoa.c ft_atoi.c ft_isdigit.c ft_strlcpy.c ft_strdup.c ft_strncmp.c ft_tolower.c ft_strnstr.c ft_strchr.c ft_striteri.c ft_isascii.c ft_isalnum.c ft_split.c ft_isalpha.c ft_strrchr.c ft_strlen.c ft_isprint.c ft_strtrim.c ft_substr.c ft_strmapi.c ft_toupper.c

# objects
LLOBJ = $(LLFILES:%.c=$(OBJDIR)ll/%.o)
MEMOBJ = $(MEMFILES:%.c=$(OBJDIR)mem/%.o)
PRINTOBJ = $(PRINTFILES:%.c=$(OBJDIR)printer/%.o)
STROBJ = $(STRFILES:%.c=$(OBJDIR)str/%.o)

HEADERS = -I include/libft.h
NAME = libft.a
LIB = ar rcs

.PHONY: all clean fclean re

$(NAME): $(LLOBJ) $(MEMOBJ) $(PRINTOBJ) $(STROBJ) $(INCLUDE)
	$(LIB) $(NAME) $(LLOBJ) $(MEMOBJ) $(PRINTOBJ) $(STROBJ) -s

all: $(NAME)

# linked list
$(OBJDIR)ll/%.o: $(LLDIR)%.c
	@mkdir -p $(OBJDIR)ll
	$(CC) $(HEADER) -c $(CFLAGS) -o $@ $<

# mem
$(OBJDIR)mem/%.o: $(MEMDIR)%.c
	@mkdir -p $(OBJDIR)mem
	$(CC) $(HEADER) -c $(CFLAGS) -o $@ $<

# print
$(OBJDIR)printer/%.o: $(PRINTDIR)%.c
	@mkdir -p $(OBJDIR)printer
	$(CC) $(HEADER) -c $(CFLAGS) -o $@ $<

# str
$(OBJDIR)str/%.o: $(STRDIR)%.c
	@mkdir -p $(OBJDIR)str
	$(CC) $(HEADER) -c $(CFLAGS) -o $@ $<

clean:
	rm -rf $(OBJDIR)

fclean: clean
	rm -f $(NAME)

re: fclean all
