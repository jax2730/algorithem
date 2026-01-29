<center> QT速成</center>

qt编写GUI程序框架   TUI(命令行界面)

Windows哪些方案可以开发GUI?  :  windows api , MFC（上世纪90）,  QT(91年) ，gtk,wxwidget

基于C/C++搭建的，，，，

微软： C# 

window forms 给C# .net定制GUI技术体系  

WPF   UWP 

ELectron 将HTML打包到windows 基于 atom ....

QT支持跨平台 Linux ， mac， windows

Linux KDE桌面，基于Qt构建的

Qt优点：跨平台，几乎支持所有平台，接口简单，容易上手，简化了内存回收机制，开发效率高，能够快速的构建应用程序，有很好的社区氛围，市场份额在缓慢上升，可进行嵌入式开发。



pro文



![](C:\Users\jax\AppData\Roaming\Typora\typora-user-images\image-20250413110307788.png)

对象树   

![image-20250413110430804](C:\Users\jax\AppData\Roaming\Typora\typora-user-images\image-20250413110430804.png)

主要目的是为了能够在合适的时机将这些对象统一进行释放  （窗口关闭） 最好统一销毁  如果某个对象提前销毁，会导致对应的控件在界面上不存在  

![image-20250413154552915](C:\Users\jax\AppData\Roaming\Typora\typora-user-images\image-20250413154552915.png)

创建自定义类  定义一个析构函数 在析构函数中，完成打印方便看到最终的自动销毁对象的效果

F4切换头文件和对应的.cpp文件 

Qt creator 终端 设置字符编码？

如何设置编码一致？（QString ：自动处理编码方式   Qt也提供了专门打印日志的方式，也能自动处理编码方式

![image-20250413164008131](C:\Users\jax\AppData\Roaming\Typora\typora-user-images\image-20250413164008131.png)

字符集，2个字节一个汉字   linux 3个字节

信号槽 让按钮产生作用 

Qt中的connect是QObject提供的静态函数，作用是”连接信号和槽“

![image-20250413195155601](C:\Users\jax\AppData\Roaming\Typora\typora-user-images\image-20250413195155601.png)

![image-20250413203636698](C:\Users\jax\AppData\Roaming\Typora\typora-user-images\image-20250413203636698.png)

驼峰命名: 变量/函数 使用小驼峰 studentText  类使用大驼峰 QWidget
