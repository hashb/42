//
// Created by Exam 42 on 10/12/18.
//

#ifndef RENDU_FT_LIST_H_H
#define RENDU_FT_LIST_H_H

typedef struct      s_list
{
    struct s_list   *next;
    void            *data;
}                   t_list;

#endif //RENDU_FT_LIST_H_H
