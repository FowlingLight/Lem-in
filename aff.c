/*
** lem_in.c for lem_in in /home/b3nja13/Documents/svn/prog_elem/lem_in
** 
** Made by benjamin horiot
** Login   <horiot_b@epitech.net>
** 
** Started on  Mon Apr  1 10:29:58 2013 benjamin horiot
** Last update Sun Apr 28 14:34:57 2013 benjamin horiot
*/

#include "my.h"

void		my_puttab(int **tab, int len)
{
  int		a;
  int		b;

  a = 0;
  b = 0;
  while (a != len)
    {
      while (b != len)
	my_printf("%d\t", tab[a][b++]);
      a += 1;
      b = 0;
      my_putchar('\n');
    }
}

void		end_link(t_info *s, t_graph *g)
{
  int		a;

  a = 0;
  while (a <= s->nb_nodes)
    {
      g->links[a][s->nb_nodes] = -1;
      g->links[s->nb_nodes][a] = -1;
      a += 1;
    }
}

void		my_showlist(t_info *s, t_nodes *list)
{
  t_nodes	*elem;
  int		a;

  elem = list;
  a = 0;
  while (a != s->nb_nodes)
    {
      my_printf("%d: Name:%s\tx:%d\ty:%d\tStatus:%d\n", a, elem->name,
		elem->x, elem->y, elem->status);
      elem = elem->next;
      a += 1;
    }
}
