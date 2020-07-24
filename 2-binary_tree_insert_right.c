#include "binary_trees.h"

/**
 * binary_tree_t *binary_tree_insert_right - binary_tree_t *binary_tree_insert_right
 * @parent : binary_tree_t *parent
 * @value : int value
 * Return: NULL else a pointer to the new node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
binary_tree_t *create;
if (parent == NULL)
return (NULL);
create = binary_tree_node(parent, value);
if (create == NULL)
return (NULL);
if (parent->right != NULL)
{
create->right = parent->right;
parent->right->parent = create;
}
parent->right = create;
return (create);
}
