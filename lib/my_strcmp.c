/*
** my_strcmp.c for my_strcmp in /home/b3nja13/Documents/svn/mysh2
** 
** Made by benjamin horiot
** Login   <horiot_b@epitech.net>
** 
** Started on  Mon Feb 11 10:51:21 2013 benjamin horiot
** Last update Fri Apr 26 11:06:20 2013 benjamin horiot
*/

#include "printf.h"

int		my_strcmp(char *str1, char *str2)
{
  int		a;

  a = 0;
  while (str1[a] == str2[a] && str1[a] && str2[a])
    a += 1;
  if (str1[a] == 0 || str2[a] == 0)
    return (1);
  return (0);
}
