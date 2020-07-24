#include "binary_trees.h"

/**
 * binary_tree_t - binary tree node.
 * @parent: binary_tree_t *parent
 * @value: int value
 * Return: error - NULL else a pointer to the new node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
binary_tree_t *create;
create = malloc(sizeof(binary_tree_t));
if (create == NULL)
return (NULL);
create->n = value;
create->parent = parent;
create->left = NULL;
create->right = NULL;

return (create);
}

