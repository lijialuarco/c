#include <stdio.h>

int main(int argc,char *argv[])
{
    // 创建了两个数组 ages存储了int数据,names储存了一个字符串数组
    int ages[] = {23,43,12,89,2};
    char *names[] = {
        "Alan","Frank",
        "Mary","John","Lisa"
    };
    // 定义循环步长
    int count = sizeof(ages)/ sizeof(int);
    // 初始化i
    int i =0;
    // 使用i对应数组索引,循环输出
    for (i=0;i<count;i++){
        printf("%s has %d years alive.\n",
                names[i],ages[i]);
    }

    printf("------\n");
    // 创建了一个只想ages的指针,int *意味着"指向整数的指针"
    int *cur_age = ages;
    // 创建了指向指针的指针
    char **cur_name = names;
    // *(cur_name+i)等价于cur_name指针加i的值 与names[i]等价
    for(i=0;i<count;i++){
        printf("%s is %d years old.\n",
                *(cur_name+i),*(cur_age+i));
    }

    printf("----\n");

    for(i=0; i< count; i++){
        printf("%s is %d years old again.\n",
                cur_name[i],cur_age[i]);
    }

    printf("-----\n");

    for(cur_name = names, cur_age=ages;
        (cur_age - ages)< count;
        cur_name++,cur_age++)
    {
    printf("%s lived %d years so far.\n",
            *cur_name, *cur_age);
    }

    return 0;
    }

// 在计算机中开辟一块内存
// 将ages这个名字指向它的起始位置
// 通过选取ages作为基址,并且获取位置为i的元素,来对内存块进行索引
// 将ages+i处的元素转换成大小正确有效的int,这样就返回了定义的值
                
