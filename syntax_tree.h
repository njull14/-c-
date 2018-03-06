#ifndef SYNTAX_TREE_H
#define SYNTAX_TREE_H
typedef struct syntax_tree_node
{
    int loc_line;
    int loc_column;
    char *str;
    struct syntax_tree_node *first_child;
    struct syntax_tree_node *next_brother;
} AST_node;

AST_node *new_token_node(int line, int column, char *string);
AST_node *new_parent_node(char *string, int node_num, ...);
void print_child_node(AST_node *parent, int depth);

#endif
