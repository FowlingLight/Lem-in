/*
** my.h for my in /home/b3nja13/Documents/svn/prog_elem/lem_in
** 
** Made by benjamin horiot
** Login   <horiot_b@epitech.net>
** 
** Started on  Tue Apr  2 15:58:50 2013 benjamin horiot
** Last update Sun Apr 28 17:07:57 2013 benjamin horiot
*/

#ifndef MY_H_
# define MY_H_

# include		<stdlib.h>
# include		<unistd.h>
# include		"./lib/printf.h"

typedef struct s_info
{
  int			nb_fourmis;
  int			nb_nodes;
  char			buff[4097];
  char			line[200];
  char			tmp[200];
  int			len;
  struct s_nodes	*elem_ent;
  struct s_nodes	*elem_ext;
}			t_info;

typedef struct s_graph
{
  int			**links;
  int			*paths;
  int			*done;
  int			*to_do;
  int			count_done;
  int			count_to_do;
  char			*entry;
  char			*exit;
  int			a;
  struct s_info		*s;
}			t_graph;

typedef struct s_nodes
{
  char			*name;
  int			status;
  int			x;
  int			y;
  int			free;
  struct s_nodes	*next;
}			t_nodes;

typedef struct	s_ants
{
  int			*pos;
}			t_ants;

/* ants.c */
int			path_len(int *);
int			check_tab(int *);
void			throw_ants(t_info *, t_graph *, t_nodes *, t_ants *);
void			init_ants(t_info *, t_graph *, t_nodes *);

/* aff.c */
void			my_puttab(int **, int);
void			end_link(t_info *, t_graph *);
void			my_showlist(t_info *, t_nodes *);

/* check_file.c */
int			check_nodes_name(char *);
int			check_node_name_suite(char *, int, int);
int			check_link_name_suite(char *, int, int);
int			check_link_name(char *);
void			check_separator_char(char *);

/* checks.c */
int			check_ants(char *);
void			check_comment(char *);
void			check_comment_order(char *);

/* go_ants.c */
void			init_tab(t_info *, t_ants *);
void			go_ants(t_info *, t_graph *, t_nodes *);

/* skips.c */
void			put_error(char *);
int			skip_first_line(char *, int);
int			skip_nodes(char *, int);
int			skip_comment_line(char *, int);
int			skip_ants_line(char *, int);

/* get_all.c */
t_nodes			*look_for_name_entry(t_nodes *);
t_nodes			*look_for_name_exit(t_nodes *);
t_nodes			*get_node(t_nodes *, int);
t_nodes			*search_min(t_info *, t_graph *, t_nodes *, t_nodes *);

/* get_graph.c */
int			det_type(char *);
int			remp_tmp(t_info *, int);
void			get_nodes(t_info *, t_nodes **, int);
void			my_get_graph(t_info *, t_graph *, t_nodes *);

/* get_graph2.c */
void			remp_tab_links(t_info *, t_graph *);
t_nodes			*get_elem(char *, t_nodes *);
int			get_count(char *, t_nodes *, int);
void			get_link(t_info *, t_graph *, t_nodes *);

/* init.c */
int			my_get_next_line(t_info *, int);
void			my_malloc_all(t_info *, t_graph *);
void			count_nodes(t_info *);
int			main();

/* lem_in.c */
int			shock_wave(t_info *, t_graph *, t_nodes *, t_nodes *);
void			find_path(t_info *, t_graph *, t_nodes *);
t_nodes			*res_graph_suit(t_graph *, t_nodes *, t_nodes *);
void			res_graph(t_info *, t_graph *, t_nodes *);
void			lem_in(t_info *, t_graph *, t_nodes *);

/* lem_in2.c */
void			look_path(t_graph *, int);
int			get_nb_links(t_graph *, int);
int			check_finish(t_graph *, t_nodes *, int);

/* utils.c */
int			check_done(t_graph *, int);
int			check_to_do(t_graph *, int);
void			decal(t_graph *);
void			free_0(t_nodes *, int);
void			check_status(t_info *, t_nodes *);

#endif /* !MY_H_ */
