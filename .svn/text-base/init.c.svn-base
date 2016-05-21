/*
** init.c for init in /home/b3nja13/Documents/svn/prog_elem/lem-in-2017-horiot_b
** 
** Made by benjamin horiot
** Login   <horiot_b@epitech.net>
** 
** Started on  Wed Apr 10 15:20:10 2013 benjamin horiot
** Last update Sun Apr 28 17:07:25 2013 benjamin horiot
*/

#include "my.h"

int		my_get_next_line(t_info *s, int a)
{
  int		b;
  int		c;

  if (a == 0)
    c = 1;
  else
    c = 0;
  b = 0;
  while (s->buff[a] != '\n' && s->buff[a])
    s->line[b++] = s->buff[a++];
  s->line[b] = 0;
  if (s->buff[a] == '\n')
    a += 1;
  if (c)
    s->nb_fourmis = my_getnbr(s->line);
  return (a);
}

void		my_malloc_all(t_info *s, t_graph *g)
{
  int		a;
  int		b;

  a = 0;
  g->links = malloc(sizeof(int*) * s->nb_nodes + 2);
  g->paths = malloc(sizeof(int) * s->nb_nodes + 1);
  g->done = malloc(sizeof(int) * s->nb_nodes + 1);
  g->to_do = malloc(sizeof(int) * s->nb_nodes + 1);
  if (g->links == NULL || g->paths == NULL || g->done == NULL ||
      g->to_do == NULL)
    error("Malloc");
  while (a <= s->nb_nodes)
    if ((g->links[a++] = malloc(sizeof(int) * s->nb_nodes + 2)) == NULL)
      error("Malloc");
  a = 0;
  b = 0;
  while (a != s->nb_nodes)
    {
      while (b != s->nb_nodes)
        g->links[a][b++] = 0;
      a += 1;
      b = 0;
    }
}

void		count_nodes(t_info *s)
{
  int		a;

  a = my_get_next_line(s, 0);
  while (s->buff[a])
    {
      if (det_type(s->line))
        s->nb_nodes += 1;
      a = my_get_next_line(s, a);
    }
}

int		main()
{
  int		len;
  t_info	s;
  t_graph	g;
  t_nodes	*list;

  if ((list = malloc(sizeof(t_nodes*))) == NULL)
    error("Malloc");
  if ((len = read(0, s.buff, 4096)) < 2)
    error("Read");
  s.buff[len] = 0;
  s.nb_nodes = 0;
  check_ants(s.buff);
  check_comment(s.buff);
  check_comment_order(s.buff);
  check_nodes_name(s.buff);
  check_link_name(s.buff);
  count_nodes(&s);
  my_malloc_all(&s, &g);
  my_get_graph(&s, &g, list);
  return (0);
}
