/*
** my_free.c for my_free in /home/b3nja13/Documents/svn/prog_elem/lem-in-2017-horiot_b
** 
** Made by benjamin horiot
** Login   <horiot_b@epitech.net>
** 
** Started on  Mon Apr 15 10:44:09 2013 benjamin horiot
** Last update Mon Apr 15 15:09:27 2013 benjamin horiot
*/

#include "my.h"

void		my_free(t_info s, t_graph g, t_nodes *list)
{
  int		a;

  a = 0;
  while (a != s.nb_nodes)
    free(g.links[a++]);
  free(list->name);
  free(list);
}
