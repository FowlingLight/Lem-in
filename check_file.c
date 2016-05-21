/*
** check_file.c for check_file in /home/mika/svn/prog-elem/test
** 
** Made by mickael amar
** Login   <amar_e@epitech.net>
** 
** Started on  Tue Apr 16 10:24:12 2013 mickael amar
** Last update Sun Apr 28 17:08:17 2013 benjamin horiot
*/

#include "my.h"

int	check_nodes_name_suite(char *buffer, int a, int b)
{
  char	t[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

  while (buffer[a] != ' ')
    {
      if (buffer[a] == '-' || buffer[a] == '\0')
	return (0);
      if (buffer[a] == t[b])
	{
	  b = 0;
	  a++;
	}
      else if (t[b] == '\0')
	put_error("Invalid node name");
      else
	{
	  a = skip_comment_line(buffer, a);
	  b++;
	}
    }
  return (1);
}

int	check_nodes_name(char *buffer)
{
  int	a;
  int	b;

  a = 0;
  b = 0;
  a = skip_first_line(buffer, a);
  while (buffer[a])
    {
      if (buffer[a - 1] == '\n')
	{
	  a = skip_comment_line(buffer, a);
	  check_nodes_name_suite(buffer, a, b);
	  a++;
	}
      if (buffer[a] == '#')
	skip_comment_line(buffer, a);
      a++;
    }
  return (1);
}

int	check_link_name_suite(char *buffer, int a, int b)
{
  char	t[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789-";

  while (buffer[a] != '\n')
    {
      if (buffer[a] == '\0')
	return (0);
      if (buffer[a] == t[b])
	{
	  b = 0;
	  a++;
	}
      else if (t[b] == '\0')
	put_error("Invalid link name");
      else
	{
	  a = skip_comment_line(buffer, a);
	  b++;
	}
    }
  return (1);
}

int	check_link_name(char *buffer)
{
  int	a;
  int	b;

  b = 0;
  a = skip_nodes(buffer, 0);
  while (buffer[a])
    {
      if (buffer[a - 1] == '\n')
	{
	  a = skip_comment_line(buffer, a);
	  check_link_name_suite(buffer, a, b);
	}
      if (buffer[a] == '#')
	a = skip_comment_line(buffer, a);
      a++;
    }
  return (1);
}
