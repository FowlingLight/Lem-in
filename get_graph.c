/*
** get_graph.c for get_graph in /home/b3nja13/Documents/svn/prog_elem/lem-in-2017-horiot_b
** 
** Made by benjamin horiot
** Login   <horiot_b@epitech.net>
** 
** Started on  Wed Apr 10 15:28:30 2013 benjamin horiot
** Last update Sat Apr 27 15:28:25 2013 benjamin horiot
*/

#include "my.h"

int		det_type(char *str)
{
  int		a;
  int		space;

  a = 0;
  space = 0;
  while (str[a])
    {
      if (str[a] == ' ')
	{
	  while (str[a] == ' ')
	    a += 1;
	  space += 1;
	  a -= 1;
	}
      a += 1;
    }
  if (space == 2)
    return (1);
  else if (space == 0 || str[0] == '#')
    return (0);
  else
    {
      error("Space");
      return (1);
    }
}

int		remp_tmp(t_info *s, int a)
{
  int		b;

  b = 0;
  while (s->line[a] != ' ' && s->line[a])
    s->tmp[b++] = s->line[a++];
  s->tmp[b] = 0;
  s->len = my_strlen(s->tmp);
  return (a);
}

void		get_nodes(t_info *s, t_nodes **list, int status)
{
  t_nodes	*elem;
  int		a;
  int		b;

  if ((elem = malloc(sizeof(elem))) == NULL)
    error("Malloc");
  a = remp_tmp(s, 0);
  if ((elem->name = malloc(sizeof(char) * s->len + 1)) == NULL)
    error("Malloc");
  b = -1;
  while (s->tmp[++b])
    elem->name[b] = s->tmp[b];
  elem->name[b] = 0;
  elem->status = status;
  a += 1;
  a = remp_tmp(s, a);
  elem->x = my_getnbr(s->tmp);
  a += 1;
  a = remp_tmp(s, a);
  elem->y = my_getnbr(s->tmp);
  elem->free = 1;
  elem->next = *list;
  *list = elem;
}

void		my_get_graph(t_info *s, t_graph *g, t_nodes *list)
{
  int		a;
  int		status;

  remp_tab_links(s, g);
  list = NULL;
  a = my_get_next_line(s, 0);
  while (s->buff[a])
    {
      status = 0;
      a = my_get_next_line(s, a);
      while (s->line[0] == '#' || s->line[0] == 0)
	{
	  if (my_strcmp(s->line, "##start") && s->line[0])
	    status = 1;
	  else if (my_strcmp(s->line, "##end") && s->line[0])
	    status = 2;
	  a = my_get_next_line(s, a);
	}
      if (det_type(s->line))
	get_nodes(s, &list, status);
      else
	get_link(s, g, list);
    }
  end_link(s, g);
  lem_in(s, g, list);
}
