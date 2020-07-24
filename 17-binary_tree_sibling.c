#include "binary_trees.h"
/**
 * binary_tree_sibling - binary_tree_t *binary_tree_sibling
 * @node : binary_tree_t *node
 * Return: siblin node = NULL else pointer to the sibling
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
if (node == NULL || node->parent == NULL)
return (NULL);
if (node->parent->left == node)
return (node->parent->right);
return (node->parent->left);
}
