#include "binary_trees.h"

/**
 * binary_tree_preorder - void binary_tree_preorder
 * @tree: const binary_tree_t *tree
 * @func: void (*func)(int)
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
if (func && tree)
{
func(tree->n);
binary_tree_preorder(tree->left, func);
binary_tree_preorder(tree->right, func);
}
}
