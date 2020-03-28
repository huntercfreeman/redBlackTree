/*
Hunter Freeman
*/

#ifndef redBlackTree
#define redBlackTree

typedef struct redBlackTreeNode {
  int value;
  struct redBlackTreeNode* left;
  struct redBlackTreeNode* right;
} redBlackTreeNode;

typedef struct redBlackTreeAPIStruct {
  void (* const Print)(redBlackTreeNode* root);

  redBlackTreeNode* (* const Search)(redBlackTreeNode* root, int value);
  redBlackTreeNode* (* const Insert)(redBlackTreeNode* root, int value);
  redBlackTreeNode* (* const Remove)(redBlackTreeNode* root, int value);

  // Returns a string that describes the list.
  char* (* const ToString)(redBlackTreeNode* root);
} redBlackTreeAPIStruct;

redBlackTreeAPIStruct const redBlackTreeAPI;

#endif
