#include <stdio.h>
 
void main(){

    //1
    // //  サイズ3の配列変数の宣言
    // double d[3];
    // double sum,avg; //  合計値、平均値を入れる変数
    // int i;
    // //  値を代入
    // d[0] = 1.2;
    // d[1] = 3.7;
    // d[2] = 4.1;
    // sum = 0.0;
    // for(i = 0; i < 3; i++){
    //     printf("%f ",d[i]);
    //     sum += d[i];
    // }
    // printf("\n");
    // avg = sum / 3.0;            //  平均値の計算
    // printf("合計値：%f\n",sum);
    // printf("平均値：%f\n",avg);




    //2
    // int n[] = { 5,4,3,2,1 };
    // int i;
    // for(i = 0; i < 5; i++){
    //     printf("n[%d]=%d ",i,n[i]);
    // }
    // printf("\n");



    //3
    // char s1[4] = { 'a','b','c','\0' };  //  文字列"abc"
    // char s2[] = "HelloWorld.";          //  文字列"HelloWorld."
    // char s3[10];                        //  最大10文字まで入る文字列
    // //  文字列の入力
    // printf("文字列を入力してください。:");
    // scanf("%s",s3); //  文字列の入力
    // printf("s1 = %s\n",s1);
    // printf("s2 = %s\n",s2);
    // printf("s3 = %s\n",s3);


    //4
    int a[3][4];
    int m,n;
    //  二次元配列に値を代入
    for(m = 0; m < 3; m++){
        for(n = 0; n < 4; n++){
            a[m][n] = m+n;
        }
    }
    //  成分の表示
    for(m = 0; m < 3; m++){
        for(n = 0; n < 4; n++){
            printf("%d ",a[m][n]);
        }
        printf("\n");
    }   
}