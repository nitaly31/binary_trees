# Project 0x1D. C - Binary trees 🌳

### 📋 Requirements
***
* Allowed editors: `vi`, `vim`, `emacs`.
* All your files will be compiled on Ubuntu `20.04` LTS using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`.
* You are not allowed to use global variables.
* No more than 5 functions per file.
* You are allowed to use the standard library.
* All your header files should be include guarded.

### 🎨 Style
***
* Code should use the `Betty` style.

### 💡 More Info
***
#### Data structures
##### Basic Binary Tree
```C
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
```
##### Binary Search Tree
```C
typedef struct binary_tree_s bst_t;
```
##### AVL Tree
```C
typedef struct binary_tree_s avl_t;
```
##### Max Binary Heap
```C
typedef struct binary_tree_s heap_t;
```
### 🎯 Tasks
***
Mandatory:s
| Files | Description |
| --- | --- |
| [0-binary_tree_node.c](https://github.com/nitaly31/binary_trees/blob/main/0-binary_tree_node.c) | Creates a binary tree node. |
| [1-binary_tree_insert_left.c](https://github.com/nitaly31/binary_trees/blob/main/1-binary_tree_insert_left.c) |  Inserts a node as the left-child of another node. |
| [2-binary_tree_insert_right.c](https://github.com/nitaly31/binary_trees/blob/main/2-binary_tree_insert_right.c) | Inserts a node as the right-child of another node. |
| [3-binary_tree_delete.c](https://github.com/nitaly31/binary_trees/blob/main/3-binary_tree_delete.c) | Deletes an entire binary tree. |
| [4-binary_tree_is_leaf.c](https://github.com/nitaly31/binary_trees/blob/main/4-binary_tree_is_leaf.c) | Checks if a node is a leaf. |
| [5-binary_tree_is_root.c](https://github.com/nitaly31/binary_trees/blob/main/5-binary_tree_is_root.c) | Checks if a given node is a root. |
| [6-binary_tree_preorder.c](https://github.com/nitaly31/binary_trees/blob/main/6-binary_tree_preorder.c) | Goes through a binary tree using pre-order traversal. |
| [7-binary_tree_inorder.c](https://github.com/nitaly31/binary_trees/blob/main/7-binary_tree_inorder.c) | Goes through a binary tree using in-order traversal. |
| [8-binary_tree_postorder.c](https://github.com/nitaly31/binary_trees/blob/main/8-binary_tree_postorder.c) | Goes through a binary tree using post-order traversal. |
| [9-binary_tree_height.c](https://github.com/nitaly31/binary_trees/blob/main/9-binary_tree_height.c) | Measures the height of a binary tree. |
| [10-binary_tree_depth.c](https://github.com/nitaly31/binary_trees/blob/main/10-binary_tree_depth.c) | Measures the depth of a node in a binary tree. |
| [11-binary_tree_size.c](https://github.com/nitaly31/binary_trees/blob/main/11-binary_tree_size.c) | Measures the size of a binary tree. |
| [12-binary_tree_leaves.c](https://github.com/nitaly31/binary_trees/blob/main/12-binary_tree_leaves.c) | Counts the leaves in a binary tree. |
| [13-binary_tree_nodes.c](https://github.com/nitaly31/binary_trees/blob/main/13-binary_tree_nodes.c) | Counts the nodes with at least 1 child in a binary tree. |
| [14-binary_tree_balance.c](https://github.com/nitaly31/binary_trees/blob/main/14-binary_tree_balance.c) | Measures the balance factor of a binary tree. |
| [15-binary_tree_is_full.c](https://github.com/nitaly31/binary_trees/blob/main/15-binary_tree_is_full.c) | Checks if a binary tree is full. |
| [16-binary_tree_is_perfect.c](https://github.com/nitaly31/binary_trees/blob/main/16-binary_tree_is_perfect.c) | Checks if a binary tree is perfect. |
| [17-binary_tree_sibling.c](https://github.com/nitaly31/binary_trees/blob/main/17-binary_tree_sibling.c) | Finds the sibling of a node. |
| [18-binary_tree_uncle.c](https://github.com/nitaly31/binary_trees/blob/main/18-binary_tree_uncle.c) | Finds the uncle of a node. |

Advanced:
| Files | Description |
| --- | --- |
| [100-binary_trees_ancestor.c](https://github.com/nitaly31/binary_trees/blob/main/100-binary_trees_ancestor.c) | Finds the lowest common ancestor of two nodes. |
| [101-binary_tree_levelorder.c](https://github.com/nitaly31/binary_trees/blob/main/101-binary_tree_levelorder.c) | Goes through a binary tree using level-order traversal. |
| [102-binary_tree_is_complete.c](https://github.com/nitaly31/binary_trees/blob/main/102-binary_tree_is_complete.c) | Checks if a binary tree is complete. |
| [103-binary_tree_rotate_left.c](https://github.com/nitaly31/binary_trees/blob/main/103-binary_tree_rotate_left.c) | Performs a left-rotation on a binary tree. |
| [104-binary_tree_rotate_right.c](https://github.com/nitaly31/binary_trees/blob/main/104-binary_tree_rotate_right.c) | Performs a right-rotation on a binary tree. |
| [110-binary_tree_is_bst.c](https://github.com/nitaly31/binary_trees/blob/main/110-binary_tree_is_bst.c) | Checks if a binary tree is a valid Binary Search Tree. |
| [111-bst_insert.c](https://github.com/nitaly31/binary_trees/blob/main/111-bst_insert.c) | Inserts a value in a Binary Search Tree. |
| [112-array_to_bst.c](https://github.com/nitaly31/binary_trees/blob/main/112-array_to_bst.c) | Builds a Binary Search Tree from an array. |
| [113-bst_search.c](https://github.com/nitaly31/binary_trees/blob/main/113-bst_search.c) | Searches for a value in a Binary Search Tree. |
| [114-bst_remove.c](https://github.com/nitaly31/binary_trees/blob/main/114-bst_remove.c) | Removes a node from a Binary Search Tree. |
| [115-O](https://github.com/nitaly31/binary_trees/blob/main/115-O) | What are the average time complexities of those operations on a Binary Search Tree. |
| [120-binary_tree_is_avl.c](https://github.com/nitaly31/binary_trees/blob/main/120-binary_tree_is_avl.c) | Checks if a binary tree is a valid AVL Tree. |
| [121-avl_insert.c](https://github.com/nitaly31/binary_trees/blob/main/121-avl_insert.c) | Inserts a value in an AVL Tree. |
| [122-array_to_avl.c](https://github.com/nitaly31/binary_trees/blob/main/122-array_to_avl.c) | Builds an AVL tree from an array. |
| [123-avl_remove.c](https://github.com/nitaly31/binary_trees/blob/main/123-avl_remove.c) | Removes a node from an AVL tree. |
| [124-sorted_array_to_avl.c](https://github.com/nitaly31/binary_trees/blob/main/124-sorted_array_to_avl.c) | Builds an AVL tree from an array. |
| [125-O](https://github.com/nitaly31/binary_trees/blob/main/125-O) | What are the average time complexities of those operations on an AVL Tree. |
| [130-binary_tree_is_heap.c](https://github.com/nitaly31/binary_trees/blob/main/130-binary_tree_is_heap.c) | Checks if a binary tree is a valid Max Binary Heap. |
| [131-heap_insert.c](https://github.com/nitaly31/binary_trees/blob/main/131-heap_insert.c) | Inserts a value in Max Binary Heap. |
| [132-array_to_heap.c](https://github.com/nitaly31/binary_trees/blob/main/132-array_to_heap.c) | Builds a Max Binary Heap tree from an array. |
| [133-heap_extract.c](https://github.com/nitaly31/binary_trees/blob/main/133-heap_extract.c) | Extracts the root node of a Max Binary Heap. |
| [134-heap_to_sorted_array.c](https://github.com/nitaly31/binary_trees/blob/main/134-heap_to_sorted_array.c) | Converts a Binary Max Heap to a sorted array of integers. |
| [135-O](https://github.com/nitaly31/binary_trees/blob/main/135-O) | What are the average time complexities of those operations on a Binary Heap. |

### ✒️ Autors
***
*Holberton School Students*

Smith Flores - [GitHub](https://github.com/Luffy981) | [LinkedIn](https://www.linkedin.com/in/smith-flores-chanta-176130214/)

Geraldine Meneses - [GitHub](https://github.com/nitaly31) | [LinkedIn](https://www.linkedin.com/in/geraldine-meneses/)
