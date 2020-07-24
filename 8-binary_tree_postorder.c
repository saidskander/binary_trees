#include "binary_trees.h"

/**
 * binary_tree_postorder - binary_tree_postorder
 * @tree: const binary_tree_t *tree
 * @func: void (*func)(int)
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
if (func && tree)
{
binary_tree_postorder(tree->left, func);
binary_tree_postorder(tree->right, func);
func(tree->n);
}
}
