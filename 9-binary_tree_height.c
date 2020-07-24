#include "binary_trees.h"

/**
 * binary_tree_height - size_t binary_tree_height
 * @tree: const binary_tree_t *tree
 * Return: 0 if tree is null else height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
if (tree)
{
size_t x = 0, y = 0;
x = tree->left ? 1 + binary_tree_height(tree->left) : 0;
y = tree->right ? 1 + binary_tree_height(tree->right) : 0;
return ((x > y) ? x : y);
}
return (0);
}
