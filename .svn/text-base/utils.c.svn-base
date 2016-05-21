/*
** utils.c for utils in /home/b3nja13/Documents/svn/prog_elem/lem-in-2017-horiot_b
** 
** Made by benjamin horiot
** Login   <horiot_b@epitech.net>
** 
** Started on  Sat Apr 27 10:51:48 2013 benjamin horiot
** Last update Sat Apr 27 15:33:55 2013 benjamin horiot
*/

#include "my.h"

int		check_done(t_graph *g, int b)
{
  int		a;

  a = 0;
  while (g->done[a] != -1)
    if (g->done[a++] == b)
      return (0);
  return (1);
}

int		check_to_do(t_graph *g, int b)
{
  int		a;

  a = 0;
  while (g->to_do[a] != -1)
    if (g->to_do[a++] == b)
      return (0);
  return (1);
}

void		decal(t_graph *g)
{
  int		a;

  a = 0;
  while (g->to_do[a + 1] != -1 && g->to_do[0] != -1)
    {
      g->to_do[a] = g->to_do[a + 1];
      a += 1;
    }
  g->to_do[a] = -1;
}

void		free_0(t_nodes *list, int len)
{
  int		a;
  t_nodes	*elem;

  a = 0;
  elem = list;
  while (a != len)
    {
      a += 1;
      elem->free = 10000;
      elem = elem->next;
    }
}

void		check_status(t_info *s, t_nodes *list)
{
  int		ent;
  int		ext;
  int		a;
  t_nodes	 *elem;

  ent = 0;
  ext = 0;
  a = 0;
  elem = list;
  while (a != s->nb_nodes)
    {
      if (elem->status == 1)
	ent += 1;
      else if (elem->status == 2)
	ext += 1;
      a += 1;
      if (a != s->nb_nodes)
	elem = elem->next;
    }
  if (ent != 1 || ext != 1)
    error("Entry/exit");
}
