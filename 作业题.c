#define _CRT_SECURE_NO_WARNINGS 1
//1、程序填空，给定程序中，函数fun的功能是：将自然数1 - 10以及它们的平方根写到名为myfile.txt的文本文件中，然后再顺序读出显示到屏幕上。

#include <math.h>

#include <stdio.h>

int fun(char* fname)

{

    FILE* fp;

    int i, n;

    float x;

    if ((fp = fopen(fname, "w")) == NULL)

    {

        return 0;

    }

    for (i = 1; i <= 10; i++)

        /**********found**********/

    {

        fprintf(fp, "%d %f\n", i, sqrt((double)i));

    }

    printf("\nSucceed!！\n");

    /**********found**********/

    fclose(fp);

    printf("\nThe data in file :\n");

    /**********found**********/

    if ((fp = fopen(fname, "r")) == NULL)

    {

        return 0;

    }

    fscanf(fp, "%d%f", &n, &x);

    while (!feof(fp))

    {

        printf("%d %f\n", n, x);

        fscanf(fp, "%d%f", &n, &x);

    }

    fclose(fp);

    return 1;

}

int main()

{

    char fname[] = "myfile.txt";

    fun(fname);

}
