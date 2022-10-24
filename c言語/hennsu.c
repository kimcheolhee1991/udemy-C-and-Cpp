#include <stdio.h>

void main() {
    printf("HelloWorld. \n");
    printf("ABC\n");
    printf("日本語でも大丈夫\n");

    printf("こんにちは。私の名前は%sです。\n年齢は%d歳です。\n","山田太郎",20);
    printf("イニシャルは、%cです。\n",'Y');
    printf("%f + %f = %f\n",1.2,2.7,1.2 + 2.7);

    // 各種演算
    printf("%d + %d = %d\n",5,2,5+2);               /* 足し算 */
    printf("%d - %d = %d\n",5,2,5-2);               /* 引き算 */
    printf("%d * %d = %d\n",5,2,5*2);               /* 掛け算 */
    printf("%d / %d = %d 余り %d \n",5,2,5/2, 5 % 2); /* 割り算 */  

     /* 使用する変数の定義 */
    int a;  // 変数の宣言
    int b = 3;      //  初期化と代入を同時に行う。
    int add,sub;    //  複数の変数を同時に宣言
    double avg;     //  int以外の変数を宣言
    a = 6;  //  代入（最初に値を入れるので、”初期化”と言う。
    add = a + b;            //  a,bの和を求める。
    sub = a - b;            //  a,bの差を求める。
    avg = (a + b) / 2.0;    //  a,bの平均値を求める。
    printf("%d + %d = %d\n",a,b,add);
    printf("%d - %d = %d\n",a,b,sub);
    printf("%dと%dの平均値：%f\n",a,b,avg);

     /* 使用する変数の定義 */
    // int a1=2,b1=2,c1=2,d1=2;    // 変数の宣言(1)
    // int a2=2,b2=2,c2=2,d2=2;    // 変数の宣言(2)
    // //  普通の演算による計算と代入
    // a1 = a1 + 1;
    // b1 = b1 - 1;
    // c1 = c1 * 2;
    // d1 = d1 / 2;
    // //  代入演算による計算
    // a2 += 1;
    // b2 -= 1;
    // c2 *= 2;
    // d2 /= 2;    
    // printf("a1=%d b1=%d c1=%d d1=%d\n",a1,b1,c1,d1);
    // printf("a2=%d b2=%d c2=%d d2=%d\n",a2,b2,c2,d2);

    int i1,i2,j1,j2;
    double d1,d2,e1,e2;
    //  j1,j2に値を代入
    j1 = 3;
    j2 = 3;
    //  d1,d2に値を代入。
    d1 = 1.23;
    d2 = 1.23;
    //  i1,i2にd1,d2の値を代入
    i1 = d1;            //  普通に代入
    i2 = (int)d2;       //  キャストして代入
    //  e1,e2にj1,j2の値を代入
    e1 = j1;            //  普通に代入
    e2 = (double)j2;    //  キャストして代入
    printf("d1 = %f d2 = %f\n",d1,d2);
    printf("i1 = %d i2 = %d\n",i1,i2);
    printf("j1 = %d j2 = %d\n",j1,j2);  
    printf("e1 = %f e2 = %f\n",e1,e2);


    
}