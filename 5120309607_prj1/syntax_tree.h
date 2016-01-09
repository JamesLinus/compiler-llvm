#include "header.h"

#ifndef SYNTAX_TREE_H
#define SYNTAX_TREE_H

typedef struct TreeNode {
    int lineCount;
    char* content;
    int childrenSize ;
    struct TreeNode** children;
} TreeNode;

TreeNode * root;

TreeNode* getNodeInstance(int line, char* content, int  childrenSize, ...) {
    TreeNode* p = (TreeNode*)malloc(sizeof(TreeNode));
    p->lineCount = line;
    p->content = strdup(content);
    p-> childrenSize =  childrenSize;
    p->children = (TreeNode**)malloc(sizeof(TreeNode*) *  childrenSize);
    va_list childrenList;
    va_start(childrenList,  childrenSize);
    int i;
    for (i = 0; i < childrenSize; i++) {
        p->children[i] = va_arg(childrenList, TreeNode*);
    }
    va_end(childrenList);
    return p;
}

void printTree(TreeNode * t, int level){
	int i=0;
	if(level==0){
		printf("\n");
		printf("syntax tree:\n");
		printf("\n");
	}
	for(;i<level;i++){
		printf("--");
	}
	printf(t->content);
        printf("  (");
	printf(" block_end_at_line:%d",t->lineCount);
	printf(" children_num:%d",t->childrenSize);
	printf(")\n");
	i=0;
	for(;i< t->childrenSize;i++){
		printTree(*(t->children+i),level+1);
	}
}

#endif
