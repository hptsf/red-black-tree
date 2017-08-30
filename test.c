/*
** main.c for epitech in /home/chapui_s/travaux/rbtree/main.c
**
** Made by chapui_s
** Login   <chapui_s@epitech.eu>
**
** Started on  Mon Feb 16 00:46:44 2015 chapui_s
** Last update Mon Feb 16 01:55:11 2015 chapui_s
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "rbtree.h"

extern t_rbnode *root_rbtree;

int main()
{
  unsigned int i;
  int a;
//  srandom(time(NULL));
  srandom(10);
  for (i = 0; i < 30; ++i) {
    a = random() % 100;
    insert(a, a);
  }

//  print_ascii_tree(root_rbtree);
  print_rbtree(root_rbtree);
  erase_tree(root_rbtree);
  return (0);
}
