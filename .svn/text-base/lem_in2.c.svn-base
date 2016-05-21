/*
** lem_in2.c for lem_in2 in /home/laguer_s//Programmation Elementaire/lem-in-2017-horiot_b
** 
** Made by serge laguerre
** Login   <laguer_s@epitech.net>
** 
** Started on  Mon Apr 15 10:50:58 2013 serge laguerre
** Last update Fri Apr 26 11:29:15 2013 benjamin horiot
*/

#include       	"my.h"

void		look_path(t_graph *g, int coord)
{
  static int	i;

  if (coord != -1)
    g->paths[i++] = coord;
  else
    g->paths[i] = -1;
}

int		get_nb_links(t_graph *g, int x)
{
  int		y;
  int		nb;

  y = 0;
  nb = 0;
  while (g->links[x][y] != -1)
    {
      if (g->links[x][y] > 0)
	nb += 1;
      y += 1;
    }
  return (nb);
}

int		check_finish(t_graph *g, t_nodes *list, int x)
{
  int		y;
  t_nodes	*elem;

  y = 0;
  elem = list;
  while (g->links[x][y] != -1)
    {
      if (g->links[x][y] > 0)
	if (elem->free == 1)
	  return (0);
      y += 1;
      elem = elem->next;
    }
  return (1);
}
