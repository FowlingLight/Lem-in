/*
** go_ants.c for go_ants in /home/b3nja13/Documents/svn/prog_elem/lem-in-2017-horiot_b
** 
** Made by benjamin horiot
** Login   <horiot_b@epitech.net>
** 
** Started on  Sun Apr 28 14:37:58 2013 benjamin horiot
** Last update Sun Apr 28 17:05:47 2013 benjamin horiot
*/

#include "my.h"

int		int_len(int *str)
{
  int		a;

  a = 0;
  while (str[a] != -1)
    a += 1;
  return (a);
}

void		init_tab(t_info *s, t_ants *ants)
{
  int		a;

  a = 0;
  while (a != s->nb_fourmis)
    ants->pos[a++] = 0;
  ants->pos[a] = -1;
}

int		calc_ants(t_graph *g, t_nodes *list, t_ants *ants, int a)
{
  int		b;
  t_nodes	*elem;
  static int	aff;

  if (a != -1)
    {
      b = ants->pos[a];
      elem = get_node(list, g->paths[b]);
      if (elem->free)
	{
	  ants->pos[a] += 1;
	  if (aff++)
	    my_putchar(' ');
	  my_printf("P%d-%s", a + 1, elem->name);
	  elem->free = 0;
	}
      return (a + 1);
    }
  else
    {
      if (aff)
	my_putchar('\n');
      aff = 0;
    }
  return (0);
}

void		move_ants(t_info *s, t_graph *g, t_nodes *list, t_ants *ants)
{
  int		a;
  int		stop;

  stop = 1;
  while (stop)
    {
      a = 0;
      while (ants->pos[a] != -1)
	{
	  while (ants->pos[a] == int_len(g->paths) && ants->pos[a] != -1)
	    a += 1;
	  if (ants->pos[a] != -1)
	    a = calc_ants(g, list, ants, a);
	  else
	    stop = 0;
	}
      calc_ants(g, list, ants, -1);
      free_0(list, s->nb_nodes);
    }
}

void		go_ants(t_info *s, t_graph *g, t_nodes *list)
{
  t_ants	ants;

  if (s->nb_fourmis < 1 || s->nb_fourmis > 99999)
    error("Ants");
  if ((ants.pos = malloc(sizeof(int) * s->nb_fourmis + 1)) == NULL)
    error("Malloc");
  free_0(list, s->nb_nodes);
  init_tab(s, &ants);
  move_ants(s, g, list, &ants);
}
