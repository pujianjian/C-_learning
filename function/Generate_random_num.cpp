//
// Created by Administrator on 2022/4/7.
//
#include <iostream>
#include <cstdlib>
using namespace std;
/*
 * 方法1：使用rand()函数
 * 头文件<stdlib.h>
 * (1)  如果你只要产生随机数而不需要设定范围的话，你只要用rand()就可以了：
 *      rand()会返回一随机数值, 范围在0至RAND_MAX 间。RAND_MAX定义在stdlib.h, 其值为2147483647。
 * (2)  如果你要随机生成一个在一定范围的数，你可以在宏定义中定义一个random(int number)函数，然后在main()里面直接调用random()函数
 *  x = rand()%11; 产生1~10之间的随机整数
 *  y = rand()%51 - 25; 产生-25 ~ 25之间的随机整数
 *  z = ((double)rand()/RAND_MAX)*(b-a) + a;产生区间[a,b]上的随机数
 */

#define random(x) (rand()%x)
void Generate_random_num(){
    //方法1.1
    cout <<"方法一：" << rand() << endl;

    //方法1.2
    cout << "方法二：" << random(11) << endl;

}
