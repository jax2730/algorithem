

# [点云 — Open3D 0.17.0 文档](http://www.open3d.org/docs/release/tutorial/geometry/pointcloud.html)



# pointnet

#### open3d安装

安装指令：

```pthon 
 pip install --trusted-host www.open3d.org -f http://www.open3d.org/docs/latest/getting_started.html open3d 
```



#### 安装过程遇到的问题1

如图：

![image-20230710112132518](C:\Users\jax\AppData\Roaming\Typora\typora-user-images\image-20230710112132518.png)

##### 解决方法：

1.重复安装

2.在代码后加上

```python
 asy_install -i https://pypi.doubanio.com/simple/ --upgrade pip
```





![image-20230710112742166](C:\Users\jax\AppData\Roaming\Typora\typora-user-images\image-20230710112742166.png) 

安装成功



```  python
o3d.np.asarray(pcd.points) 
```

出现错误：

```python
AttributeError: module 'open3d' has no attribute 'np'
```

解决方法：

```python
print(np.asarray(pcd.points))
```

o3d在最新的open3d中已经不适用

