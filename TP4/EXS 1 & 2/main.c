#include "functions.h"



int main()
{
    tree T1=NULL;
    T1=make_tree(1,NULL,NULL);
    tree T2=NULL;
    T2=make_tree(2,NULL,NULL);
    tree T=make_tree(0,T1,T2);
    tree T3=NULL;
    tree T4=NULL;
    T3=make_tree(0,NULL,T);
    T4=make_tree(2,T3,NULL);
    printf("the size of the tree T is %d\n",tree_size(T));
    printf("the depth of the tree T is %d\n",height(T));
    printf("the diameter of the tree T is %d\n",tree_diameter_2(T));
    printf("the minimum  of the tree T is %d\n",min_tree(T));
    printf("the maximum  of the tree T is %d\n",max_tree(T));
    insert_bst(3,&T);
    return 0;
}
