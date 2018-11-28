


# c++中  (.h)头文件　　　(.cpp)源文件

# touch file{1..5}.cpp


import os

themes = ['1.Ｃ++语言概述','2.数据类型，运算符和表达式','3.基本控制结构','4.数组，指针与引用','5.函数','6.类和对象','7.继承和派生','8.运算符重载','9.模板','10.C++流']
base = "/home/karson/Recoding_C/C＋＋程序设计(2级考试)/"
for i in themes:
    file_name = base + str(i)
    os.mkdir(file_name)