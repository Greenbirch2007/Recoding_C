



# touch file{1..5}.c++


import os

themes = ['1.开始','2.变量和基本类型','3.字符串，向量和数组','4.表达式','5.语句','6.函数','7.类','8.IO库','9.顺序容器','10.泛型算法','11.关联容器','12.动态内存','13.拷贝控制','14.重载运算与类型转换','15.面向对象程序设计','16.模板与泛型编程','17.标准库特殊设施','18.用于大型程序的工具','19.特殊工具与技术','附录A标准库']
base = "/home/karson/Recoding_C/The_C_Programming_Language/"
for i in themes:
    file_name = base + str(i)
    os.mkdir(file_name)