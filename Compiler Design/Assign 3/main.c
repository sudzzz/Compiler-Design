#include<stdio.h>
#include"lex.h"
#include"parser.h"
#include"backend.h"

int main()
{
    ASTnode_t *a;
    int flag = parser(&a);
    if(flag == 1){
        int ans = inorderOnAST(a);
        printf("\nAns: %d\n" , ans);
    }
    else{
        printf("Syntax Error \n");
    }
}