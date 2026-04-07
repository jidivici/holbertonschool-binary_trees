#include "binary_trees.h"

/**
 * height - Measures the height of a binary tree
 * @tree: Pointer to the root node
 *
 * Return: Height, or 0 if tree is NULL
 */
size_t height(const binary_tree_t *tree)
{
size_t left_height, right_height;

if (!tree)
return (0);

left_height = height(tree->left);
right_height = height(tree->right);

return ((left_height > right_height ? left_height : right_height) +1);
}

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: Pointer to the root node of the tree to measure
 *
 * Return: Balance factor, or 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
int left_h = 0, right_h = 0;

if (!tree)
return (0);

if (tree->left)

left_h = (int)height(tree->left);
if (tree->right)
right_h = (int)height(tree->right);

return (left_h - right_h);
}
