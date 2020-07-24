#include "binary_trees.h"
/**
 * binary_tree_inorder - void binary_tree_inorder
 * @tree: const binary_tree_t *tree
 * @func: void (*func)(int)
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
if (tree && func)
{
binary_tree_inorder(tree->left, func);
func(tree->n);
binary_tree_inorder(tree->right, func);
}
}
