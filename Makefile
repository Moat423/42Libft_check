# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lmeubrin <lmeubrin@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/25 12:59:00 by lmeubrin          #+#    #+#              #
#    Updated: 2024/05/15 11:39:46 by lmeubrin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
SRC_DIR = .
OBJ_DIR = obj
CFLAGS = -Werror -Wall -Wextra -I$(LIBPATH)
NAME = test.a
HEADER = libft_check.h
DEPS = -g
SRCS = main.c ft_strnstr_check.c ft_isprint_check.c ft_memchr_check.c \
	   ft_atoi_check.c ft_bzero_check.c ft_strncmp_check.c \
	   ft_calloc_check.c ft_strdup_check.c ft_substr_check.c \
	   ft_strlcpy_check.c ft_striteri_check.c ft_strmapi_check.c \
	   ft_putchar_fd_check.c ft_itoa_check.c ft_split_check.c \
	   ft_memcmp_check.c ft_strtrim_check.c

OBJS = $(SRCS:%.c=$(OBJ_DIR)/%.o)
LIBPATH = ../Libft/
LDFLAGS = -L$(LIBPATH) -lft -lbsd
LIBNAME = libft.a
DEBUG = 
DEB_NAME = debug.out

$(NAME): $(OBJS) $(LIBPATH)$(LIBNAME)
	$(CC) -o $@ $^ $(LDFLAGS)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c $(HEADER)| $(OBJ_DIR)
	$(CC) -c $< $(CFLAGS) $(DEBUG) -o $@

$(OBJ_DIR):
	mkdir $@

lib:
	cd $(LIBPATH) && $(MAKE) re
	$(MAKE)

all: $(NAME)

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

$(DEB_NAME): $(SRCS)
	$(CC) -o $@ $(DEBUG) $^ $(wildcard $(LIBPATH)*.c)

debug:: $(lib_debug) $(DEB_NAME)

lib_debug:
	cd $(LIBPATH) && $(MAKE) debug

.PHONY: all, clean, fclean, re, g, lib, lib_debug, debug
