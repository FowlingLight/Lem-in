/*
** skips.c for skips in /home/mika/svn/prog-elem/lem-in-2017-horiot_b
** 
** Made by mickael amar
** Login   <amar_e@epitech.net>
** 
** Started on  Sat Apr 27 16:54:12 2013 mickael amar
** Last update Sun Apr 28 15:06:38 2013 mickael amar
*/

#include "my.h"

void	put_error(char *str)
{
  my_printf("Invalid file : %s\n", str);
  exit(0);
}

int	skip_first_line(char *buffer, int a)
{
  while (buffer[a] != '\n')
    a++;
  a++;
  return (a);
}

int	skip_nodes(char *buffer, int a)
{
  while (buffer[a] != '-')
    a++;
  while (buffer[a - 1] != '\n')
    a--;
  return (a);
}

int	skip_comment_line(char *buffer, int a)
{
  if (buffer[a - 1] == '\n' && buffer[a] == '#')
    {
      while (buffer[a] != '\n')
	a++;
      a++;
      skip_comment_line(buffer, a);
    }
  return (a);
}

int	skip_ants_line(char *buffer, int a)
{
  while (buffer[a] != ' ')
    a++;
  a--;
  return (a);
}
