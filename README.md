BINARY TREES – COMPLETE GUIDE

Description
A binary tree is a hierarchical data structure where each node contains:
- an integer value
- a pointer to its parent
- a pointer to its left child
- a pointer to its right child

Binary trees are widely used in searching, sorting, and data organization.

Structure

/**
* struct binary_tree_s - Binary tree node
*
* @n: Integer stored in the node
* @parent: Pointer to the parent node
* @left: Pointer to the left child node
* @right: Pointer to the right child node
  */
  struct binary_tree_s
  {
  int n;
  struct binary_tree_s *parent;
  struct binary_tree_s *left;
  struct binary_tree_s *right;
  };

typedef struct binary_tree_s binary_tree_t;

Tree Variants

Binary Tree
A general tree with no ordering constraints.

Binary Search Tree (BST)
typedef struct binary_tree_s bst_t;

Rules:
- left subtree contains values less than the node
- right subtree contains values greater than the node

Used for fast search operations.

AVL Tree
typedef struct binary_tree_s avl_t;

A self-balancing binary search tree.
The difference of height between left and right subtrees is at most 1.

Max Binary Heap
typedef struct binary_tree_s heap_t;

A complete binary tree where:
- each parent node is greater than or equal to its children

Core Concepts

Root
The top node of the tree.

Leaf
A node with no children.

Height
The number of edges on the longest path from a node to a leaf.

Depth
The number of edges from the root to a node.

Size
The total number of nodes in the tree.

Node Types
- internal node: has at least one child
- leaf node: has no children

Tree Traversals

Pre-order (root, left, right)
Used to copy or serialize a tree.

In-order (left, root, right)
Returns values in sorted order for BST.

Post-order (left, right, root)
Used to safely delete a tree.

Function Overview

0-binary_tree_node.c
Creates a new node with a given value and parent.

1-binary_tree_insert_left.c
Inserts a node as the left child of a parent.

2-binary_tree_insert_right.c
Inserts a node as the right child of a parent.

3-binary_tree_delete.c
Deletes an entire tree using post-order traversal.

4-binary_tree_is_leaf.c
Checks if a node is a leaf.

5-binary_tree_is_root.c
Checks if a node is the root.

6-binary_tree_preorder.c
Traverses the tree in pre-order.

7-binary_tree_inorder.c
Traverses the tree in in-order.

8-binary_tree_postorder.c
Traverses the tree in post-order.

9-binary_tree_height.c
Returns the height of a tree.

10-binary_tree_depth.c
Returns the depth of a node.

11-binary_tree_size.c
Returns the number of nodes.

12-binary_tree_leaves.c
Counts the number of leaf nodes.

13-binary_tree_nodes.c
Counts nodes with at least one child.

14-binary_tree_balance.c
Computes balance factor (left height - right height).

15-binary_tree_is_full.c
Checks if every node has 0 or 2 children.

16-binary_tree_is_perfect.c
Checks if the tree is full and all leaves are at the same level.

17-binary_tree_sibling.c
Returns the sibling of a node.

18-binary_tree_uncle.c
Returns the uncle of a node.

Key Implementation Rules

- Always check for NULL pointers.
- Use recursion for traversal and computations.
- Free memory using post-order traversal.
- Maintain correct parent pointers during insertions.
- Follow strict compilation flags (no warnings allowed).

Complexity

Average:
- search: O(log n)
- insert: O(log n)

Worst case (unbalanced tree):
- search: O(n)
- insert: O(n)

Summary

A binary tree is composed of nodes connected in a hierarchical structure.
Understanding recursion and traversal is essential to manipulate trees correctly.
Binary search trees provide efficient search capabilities.
Balanced trees improve performance by maintaining optimal height.
