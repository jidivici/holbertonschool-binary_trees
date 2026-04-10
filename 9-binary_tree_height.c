#include "binary_trees.h"
/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree
 *
 * Return: Height of the tree, or 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int left, right;

	if (!tree)
		return (0);
	left = (binary_tree_height(tree->left) + 1);
	right = (binary_tree_height(tree->right) + 1);
	if (left > right)
		return (left + 1);
	return (right + 1);
}
