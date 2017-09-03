#include <stdio.h>
#include <string.h>

/* 文字変数/=文字”列”変数 */

typedef struct {
    int year;
    int clas;
    int number;
    char name[64];
    double height;
    double weight;
} student;/* studentという型の定義（構造体） */

void student_print(student data);
void student_print2(student *data);

int main(void)
{
    /* Here is comment. */
    student data;
    student *pdata;

    data.year = 3;
    data.clas = 4;
    data.number = 18;
    strcpy(data.name,"MARIO");
    data.height = 168.2;
    data.weight = 72.4;

    student_print(data);

    pdata = &data;
    (*pdata).year = 10;
    strcpy(pdata->name,"MARIA");

    student_print(*pdata);

    student_print2(&data);

    return 0;
}

void student_print(student data)
{

    printf("[Year  ]:%d\n",data.year);
    printf("[Class ]:%d\n",data.clas);
    printf("[Number]:%d\n",data.number);
    printf("[Name  ]:%s\n",data.name);
    printf("[Height]:%f\n",data.height);
    printf("[Weight]:%f\n",data.weight);
    printf("\n");

    return ;

}

void student_print2(student *data)
{

    printf("[Year  ]:%d\n",data->year);
    printf("[Class ]:%d\n",data->clas);
    printf("[Number]:%d\n",data->number);
    printf("[Name  ]:%s\n",data->name);
    printf("[Height]:%f\n",data->height);
    printf("[Weight]:%f\n",data->weight);
    printf("\n");

    return ;

}


/*    printf("\n");*/

