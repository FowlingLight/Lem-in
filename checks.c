/*
** checks.c for checks in /home/mika/svn/prog-elem/lem-in-2017-horiot_b
** 
** Made by mickael amar
** Login   <amar_e@epitech.net>
** 
** Started on  Sat Apr 27 16:48:59 2013 mickael amar
** Last update Sun Apr 28 16:52:45 2013 mickael amar
*/

#include "my.h"

int	check_ants(char *buffer)
{
  int	a;
  int	b;
  char	nbr[] = "0123456789";

  a = 0;
  while (buffer[a] != '\n')
    {
      b = 0;
      while (nbr[b] != buffer[a] && nbr[b])
	b += 1;
      if (nbr[b] == 0)
	put_error("Invalid ants number");
      a++;
    }
  return (0);
}

void	check_comment(char *buffer)
{
  int	a;
  int	i;
  int	n;
  char	tab[7];

  a = 0;
  i = 0;
  n = 0;
  while (buffer[a])
    {
      if (buffer[a] == '#' && buffer[a + 1] == '#')
	{
	  a += 2;
	  while (buffer[a] != '\n' && i <= 5)
	    tab[i++] = buffer[a++];
	  if (my_strcmp(tab, "start") == 1
	      || my_strcmp(tab, "end") == 1)
	    n++;
	  else
	    put_error("Where the fuck is the start/end ?");
	}
      a++;
    }
  if (n != 2)
    put_error("Invalid number of start/end in this file");
}

void	check_comment_order(char *buffer)
{
  int	a;
  int	i;
  char	tab[50];

  a = 0;
  i = 0;
  while (buffer[a])
    {
      if (buffer[a] == '#' && buffer[a + 1] == '#')
	{
	  while (buffer[a] != '\n')
	    a++;
	  a++;
	  while (buffer[a] != '\n')
	    tab[i++] = buffer[a++];
	  if (my_strcmp(tab, "##end") == 1 || my_strcmp(tab, "##start") == 1)
	    put_error("Wrong end/start position");
	}
      a++;
    }
}
