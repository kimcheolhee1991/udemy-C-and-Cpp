#include "showResult.h"
#include <stdio.h>
 
 //externは他の所に宣言されているものを使いますとのいみ
extern int ans;
 
void showAnswer(){
    printf("%d\n",ans);
}