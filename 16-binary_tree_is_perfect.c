#include "binary_trees.h"

/**
 * depth_left - returns the depth of the leftmost leaf
 * @tree: pointer to tree
 *
 * Return: depth
 */
int depth_left(const binary_tree_t *tree)
{
int depth = 0;

while (tree)
{
depth++;
tree = tree->left;
}
return (depth);
}

/**
 * is_perfect - recursive helper to check perfect tree
 * @tree: pointer to current node
 * @depth: expected depth for all leaves
 * @level: current level
 *
 * Return: 1 if perfect, 0 otherwise
 */
int is_perfect(const binary_tree_t *tree, int depth, int level)
{
if (!tree)
return (1);


if (!tree->left && !tree->right)
return (depth == level + 1);


if (!tree->left || !tree->right)
return (0);

return (is_perfect(tree->left, depth, level + 1) &&
is_perfect(tree->right, depth, level + 1));
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to root
 *
 * Return: 1 if perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
int d;

if (!tree)
return (0);

d = depth_left(tree);

return (is_perfect(tree, d, 0));
}
