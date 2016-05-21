/*
** get_all.c for get_all in /home/b3nja13/Documents/svn/prog_elem/lem-in-2017-horiot_b
** 
** Made by benjamin horiot
** Login   <horiot_b@epitech.net>
** 
** Started on  Sat Apr 27 10:15:34 2013 benjamin horiot
** Last update Sat Apr 27 15:34:33 2013 benjamin horiot
*/

#include "my.h"

t_nodes		*look_for_name_entry(t_nodes *list)
{
  t_nodes	*elem;

  elem = list;
  while (elem != NULL)
    {
      if (elem->status == 1)
	return (elem);
      elem = elem->next;
    }
  return (NULL);
}

t_nodes		*look_for_name_exit(t_nodes *list)
{
  t_nodes	*elem;

  elem = list;
  while (elem != NULL)
    {
      if (elem->status == 2)
	return (elem);
      elem = elem->next;
    }
  return (NULL);
}

t_nodes		*get_node(t_nodes *list, int a)
{
  int		b;
  t_nodes	*elem;

  elem = list;
  b = 0;
  while (b != a)
    {
      elem = elem->next;
      b += 1;
    }
  return (elem);
}

t_nodes		*search_min(t_info *s, t_graph *g, t_nodes *list, t_nodes *elem)
{
  int		a;
  int		b;
  t_nodes	*elem_tmp;

  a = get_count(elem->name, list, s->nb_nodes);
  b = 0;
  while (b != s->nb_nodes)
    {
      elem_tmp = get_node(list, b);
      if (g->links[a][b] > 0 && (elem_tmp->free == (elem->free - 1) ||
				 elem_tmp->status == 2))
	{
	  look_path(g, b);
	  return (elem_tmp);
	}
      b += 1;
    }
  return (NULL);
}
