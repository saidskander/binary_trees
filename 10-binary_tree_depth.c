#include "binary_trees.h"

/**
 * binary_tree_depth - binary_tree_depth
 * @tree: const binary_tree_t *tree
 * Return: 0 if tree NULL else depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
}
