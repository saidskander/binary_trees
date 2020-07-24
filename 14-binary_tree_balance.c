#include "binary_trees.h"

/**
 * binary_tree_balance - int binary_tree_balance
 * @tree : const binary_tree_t *tree
 * Return: 0 if tree is NULL else balance
 */
int binary_tree_balance(const binary_tree_t *tree)
{
if (tree)
return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
return (0);
}

/**
 * binary_tree_height - size_t tree_height
 * @tree : const binary_tree_t *tree
 * Return: 0 if tree is NULL height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
if (tree)
{
size_t x = 0, y = 0;
x = tree->left ? 1 + binary_tree_height(tree->left) : 1;
y = tree->right ? 1 + binary_tree_height(tree->right) : 1;
return ((x > y) ? x : y);
}
return (0);
}
