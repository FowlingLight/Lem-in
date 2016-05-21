/*
** lem_in.c for lem_in in /home/b3nja13/Documents/svn/prog_elem/lem-in-2017-horiot_b
** 
** Made by benjamin horiot
** Login   <horiot_b@epitech.net>
** 
** Started on  Thu Apr 11 12:58:35 2013 benjamin horiot
** Last update Sun Apr 28 15:29:52 2013 benjamin horiot
*/

#include "my.h"

int		shock_wave(t_info *s, t_graph *g, t_nodes *list, t_nodes *elem)
{
  t_nodes	*elem_tmp;
  int		a;
  int		b;

  a = get_count(elem->name, list, s->nb_nodes);
  b = 0;
  while (b != s->nb_nodes)
    {
      elem_tmp = get_node(list, b);
      if (elem_tmp->status == 1 && g->links[a][b] > 0)
        return (1);
      else if (g->links[a][b] > 0 && check_done(g, b) && check_to_do(g, b))
        g->to_do[g->count_to_do++] = b;
      b += 1;
    }
  if (my_strcmp(elem->name, s->elem_ext->name))
    g->to_do[g->count_to_do++] = -2;
  g->to_do[g->count_to_do] = -1;
  return (0);
}

void		find_path(t_info *s, t_graph *g, t_nodes *list)
{
  t_nodes	*elem;

  elem = s->elem_ent;
  while (elem->status != 2)
    if ((elem = search_min(s, g, list, elem)) == NULL)
      error("Exit");
  look_path(g, -1);
  go_ants(s, g, list);
}

t_nodes		*res_graph_suit(t_graph *g, t_nodes *list, t_nodes *elem)
{
  if (g->to_do[0] == -2)
    {
      g->to_do[g->count_to_do++] = -2;
      while (g->to_do[0] == -2)
	{
	  decal(g);
	  g->count_to_do -= 1;
	}
      g->a += 1;
    }
  g->to_do[g->count_to_do] = -1;
  if (g->to_do[0] >= 0)
    elem = get_node(list, g->to_do[0]);
  else
    error("Exit");
  decal(g);
  g->count_to_do -= 1;
  if (g->a < elem->free || elem->free == 0)
    elem->free = g->a;
  return (elem);
}

void		res_graph(t_info *s, t_graph *g, t_nodes *list)
{
  t_nodes	*elem;

  g->a = 1;
  elem = s->elem_ext;
  while (my_strcmp(elem->name, s->elem_ent->name) == 0)
    {
      if (check_done(g, get_count(elem->name, list, s->nb_nodes)))
	{
	  g->done[g->count_done++] = get_count(elem->name, list, s->nb_nodes);
	  g->done[g->count_done] = -1;
	}
      if (shock_wave(s, g, list, elem))
	elem = s->elem_ent;
      else
	elem = res_graph_suit(g, list, elem);
    }
  s->elem_ent->free = g->a + 1;
  s->elem_ext->free = 0;
  find_path(s, g, list);
}

void		lem_in(t_info *s, t_graph *g, t_nodes *list)
{
  check_status(s, list);
  my_printf("%s\n", s->buff);
  s->elem_ent = look_for_name_entry(list);
  g->entry = s->elem_ent->name;
  s->elem_ext = look_for_name_exit(list);
  g->exit = s->elem_ext->name;
  g->count_done = 0;
  g->count_to_do = 1;
  free_0(list, s->nb_nodes);
  g->to_do[0] = get_count(s->elem_ext->name, list, s->nb_nodes);
  g->to_do[1] = -1;
  res_graph(s, g, list);
}
