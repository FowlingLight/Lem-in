/*
** get_graph2.c for get_graph2 in /home/b3nja13/Documents/svn/prog_elem/lem-in-2017-horiot_b
** 
** Made by benjamin horiot
** Login   <horiot_b@epitech.net>
** 
** Started on  Thu Apr 11 11:44:01 2013 benjamin horiot
** Last update Fri Apr 26 09:13:40 2013 benjamin horiot
*/

#include "my.h"

void		remp_tab_links(t_info *s, t_graph *g)
{
  int		a;
  int		b;

  a = 0;
  b = 0;
  while (a <= s->nb_nodes)
    {
      while (b <= s->nb_nodes)
	g->links[a][b++] = 0;
      a += 1;
      b = 0;
    }
}

t_nodes		*get_elem(char *name, t_nodes *list)
{
  t_nodes	*elem;

  elem = list;
  while (my_strcmp(elem->name, name) == 0 && elem)
    elem = elem->next;
  if (elem)
    return (elem);
  return (NULL);
}

int		get_count(char *name, t_nodes *list, int len)
{
  t_nodes	*elem;
  int		count;
  int		a;

  elem = list;
  count = 0;
  a = 0;
  while (my_strcmp(elem->name, name) == 0 && a != len)
    {
      count += 1;
      a += 1;
      if (a != len)
	elem = elem->next;
    }
  if (a != len)
    return (count);
  return (-1);
}

void		get_link(t_info *s, t_graph *g, t_nodes *list)
{
  int		a;
  int		b;
  int		x;
  int		y;

  a = 0;
  b = 0;
  while (s->line[a] != '-')
    s->tmp[b++] = s->line[a++];
  s->tmp[b] = 0;
  if ((x = get_count(s->tmp, list, s->nb_nodes)) < 0)
    error("Link");
  a += 1;
  b = 0;
  while (s->line[a])
    s->tmp[b++] = s->line[a++];
  s->tmp[b] = 0;
  if ((y = get_count(s->tmp, list, s->nb_nodes)) < 0)
    error("Link");
  g->links[x][y] = 1;
  g->links[y][x] = 1;
}
