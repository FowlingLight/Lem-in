/*
** error.c for error in /home/b3nja13/Documents/svn/allum1
** 
** Made by benjamin horiot
** Login   <horiot_b@epitech.net>
** 
** Started on  Mon Feb  4 10:19:40 2013 benjamin horiot
** Last update Fri Apr 26 11:05:10 2013 benjamin horiot
*/

#include "printf.h"

void		error(char *str)
{
  my_printf("%s error\n", str);
  exit(1);
}
