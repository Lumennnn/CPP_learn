# C++笔记

**C++编码风格**：

> 1. 每条语句占一行
> 2. 每个函数都有一个开始和结束花括号，花括号各占一行
> 3. 函数中的语句对相对于花括号进行缩进
> 4. 与函数名称相关的小括号周围没有空白

**书写注释时一个良好的编程习惯**：

> 1. 有助于对代码的理解
> 2. 注释语句应准确、易懂、简介
> 3. 单行注释：以“//”开头
> 4. 多行注释：以“/*”开头，“*/”结尾

![编译过程](./编译过程.png)  

**编译和执行过程**：

> * 编译（预处理->编译->目标文件）
>   * 形成目标代码/文件。目标代码时编译器的输出结果，常见扩展名为 .o 或 .obj
> * 连接
>   * 将目标代码跟C++函数库相连接，并将源程序所用的库与目标代码合并
>   * 形成最终可执行的二进制机器代码（可执行程序）
> * 执行
>   * 在特定的机器环境下运行C++程序

**编译过程**：

> * 预处理：导入头文件
>   * 生成.ii文件
>   * g++ -o HellowWorld.ii -E HellowWorld.cpp
> * 编译：将预处理文件编译成汇编文件
>   * 生成.s文件（汇编文件）
>   * g++ -o HellowWorld.s -S HellowWorld.ii
> * 汇编：汇编文件链接函数库
>   * 生成.o文件
>   * g++ -o HellowWorld.o -c HellowWorld.s
> * 链接：目标文件链接C++函数库
>   * 生成.exe文件
>   * g++ -o HellowWorld.exe HellowWorld.o
