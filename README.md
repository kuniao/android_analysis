
 ## 编译方法
 unix like
 ```shell
mkdir "build"
cd build
cmake .. -DNDK=your_ndk_path/Android/sdk/ndk/22.0.7026061 -DANDROID_ABI=armeabi-v7a
make -j8
```
或者使用andriod studio编译
## 注入方法
采用frida注入
```
把生成的libnative_hook*.so放入/data/app/目录下
```
```
在inject文件夹中
main.py修改要注入的进程
index.js中修改要注入的so
```
记得把.json文件放在sdcard
  
x86存在bug,自行解决问题, 欢迎投币,作者QQ734248537 谢谢
x86 is bug, fix bug by yourself, wecome to give me money, qq is 734248537, see you leite

