#include "binary_trees.h"
/**
 * binary_tree_size - Measures the size of a binary tree
 * @tree: Pointer to the root node of the tree
 *
 * Return: Number of nodes in the tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	int left, right;

	if (!tree)
		return (0);
	left = (binary_tree_height(tree->left) + 1);
	right = (binary_tree_height(tree->right) + 1);
	return (left + right + 1);
}
