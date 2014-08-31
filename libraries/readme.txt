For information on installing libraries, see: http://arduino.cc/en/Guide/Libraries

这里都是Arduino官方封装的库，除了PID_v1(https://github.com/eeyoo/Arduino-PID-Library)。

库的目录结构大致如下：
|
|-- examples 	- 每个库提供的示例程序，库最终目的是为程序员提供方便直观的接口
|-- xxxxx.cpp	- 库由C++语言实现，因此少不了cpp文件
|-- xxxxx.h	- 与cpp同名的头文件，她是库的框架、纲领性文件
|-- keywords	- Arduino IDE需要的文件，代码能够高亮显示库中类名、方法和常数。